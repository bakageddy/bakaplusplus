#include "display.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_video.h>
#include <GL/glew.h>
#include <iostream>

Display::Display(int width, int height, const std::string& title) {

    SDL_Init(SDL_INIT_EVERYTHING);

    // Doesn't guarntee 8 bits exactly, it will give minimum 8 bits
    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);

    // Double Buffer to minimize the flickering problems
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    // C library so pass it as c string...
    // make it centered and give the window some params
    // and indicate that i am gonna use opengl stuff to render things
    window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);
    glContext = SDL_GL_CreateContext(window);
    closed = true;

    GLenum status = glewInit();
    if (status != GLEW_OK) {
        std::cerr << "Glew failed to initialized" << std::endl;
    }

}

Display::~Display() {
    SDL_GL_DeleteContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

bool Display::isClosed() {
    return closed;
}

void Display::update() {
    // Swap buffers
    SDL_GL_SwapWindow(window);
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            closed = true;
        }
    }
}
