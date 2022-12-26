#include <iostream>
#include <cmath>
#include "calc.hpp"

int input() {
    int number;
    std::cout << "1. Arithmetic\n";
    std::cout << "2. Trigonometry\n";
    std::cout << "3. Exponential\n";
    std::cout << "4. Logarithmetic\n";
    std::cout << "5. Quit\n";
    std::cout << "Your option: ";
    std::cin >> number;
    return number;
}

void arithmetic() {
    int option, op1, op2;

    std::cout << "1. Addition\n";
    std::cout << "2. Subraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "Your option: ";
    std::cin >> option;

    std::cout << "Enter operand 1: ";
    std::cin >> op1;

    std::cout << "Enter operand 2: ";
    std::cin >> op2;

    if (option == 1) {
        std::cout << op1 + op2 << std::endl;
    } else if (option == 2) {
        std::cout << op1 - op2 << std::endl;
    } else if (option == 3) {
        std::cout << op1 * op2 << std::endl;
    } else if (option == 4) {
        std::cout << op1 / op2 << std::endl;
    } else {
        std::cout << "!!! INVALID OPTION !!!\n";
    }
}

void trigonometry() {
    int option;
    float op1;

    std::cout << "1. Sine\n";
    std::cout << "2. Cosine\n";
    std::cout << "3. Tangent\n";
    std::cout << "Your option: ";
    std::cin >> option;

    std::cout << "Enter the angle in radians: ";
    std::cin >> op1;
    if (option == 1) {
        std::cout << sin(op1) << std::endl;
    } else if (option == 2) {
        std::cout << cos(op1) << std::endl;
    } else if (option == 3) {
        std::cout << tan(op1) << std::endl;
    }
}

void exponential() {
    int power, base;
    std::cout << "Enter the power: ";
    std::cin >> power;
    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << std::pow(power, base) << std::endl;
}

void logarithmic() {
    int op1;
    std::cout << "Enter the number: ";
    std::cin >> op1;

    std::cout << std::log(static_cast<float>(op1)) << std::endl;
}
