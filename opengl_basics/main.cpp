#include <iostream>
#include <GL/glew.h>
#include "display.hpp"

int main(void) {
    Display display(600, 800, "Dinesh Kumar");
    while (!display.isClosed()) {
        glClearColor(0.0f, 0.15f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        display.update();
    }
    return 0;
}
