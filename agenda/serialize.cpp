#include <cstdint>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include "record.hpp"

void serialize(const std::string& name, const std::vector<Record>& state) {
    std::ofstream file {name};
    for (const auto& record: state) {
        file << record.getName() << '\n';
        file << record.getNumber() << '\n';
    }
}

std::vector<Record> deserialize(const std::string& name) {
    std::ifstream file {name};
    string line, rec_name;
    int64_t rec_num;
    int counter = 0;
    std::vector<string> lines;
    std::vector<Record> records;
    while (std::getline(file, line)) {
        if (counter % 2 == 0) {
            rec_name = std::move(line);
        } else {
            rec_num = std::atol(line.c_str());
            Record x {rec_name, rec_num};
            records.emplace_back(x);
        }
        counter++;
    }
    return records;
}
