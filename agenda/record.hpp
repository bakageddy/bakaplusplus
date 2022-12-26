#ifndef RECORD_HPP_
#define RECORD_HPP_

#include <cstdint>
#include <string>
#include <iostream>

using std::string;
struct Record {
    Record(const string c_name, const int64_t c_num) : name(c_name), num(c_num) {
    }

    string getName() const {
        return name;
    }

    int64_t getNumber() const {
        return num;
    }
    void print() const {
        std::cout << "-------------------\n";
        std::cout << "Name: " << name << '\n';
        std::cout << "Number: " << num << '\n';
        std::cout << "-------------------\n";
    }

private:
    string name;
    int64_t num;
};

#endif

