#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>
#include <string>

class Display {

    public:
        Display(int width, int height, const std::string& title);
        virtual ~Display();
        bool isClosed();
        void update();

    private:
        Display(const Display& other) = default;
        Display& operator=(const Display& other) = default;
        SDL_Window* window;
        SDL_GLContext glContext;
        bool closed;
};
#endif
