#include <iostream>
#include "calc.hpp"

int main(void) {
    int option;
    while (1) {
        option = input();
        if (option == 1) {
            arithmetic();
        } else if (option == 2) {
            trigonometry();
        } else if (option == 3) {
            exponential();
        } else if (option == 4) {
            logarithmic();
        } else if (option == 5) {
            break;
        }
    }
    return 0;
}
