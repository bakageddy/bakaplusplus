#include <cstdint>
#include <vector>
#include <string>
#include <map>
#include "record.hpp"
#include "serialize.hpp"

using std::string;
using std::vector;


int main(void) {
    std::string name;
    int64_t number;
    int option = 1;
    vector<Record> records;
    while (option == 1) {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter number: ";
        std::cin >> number;
        std::cout << std::endl;
        Record x {name, number};
        records.emplace_back(x);
        std::cout << "Continue? (0/1): ";
        std::cin >> option;
    }

    serialize("output.txt", records);
    // auto foo = deserialize("output.txt");
    for (const auto& items: records) {
        items.print();
    }
}
