#ifndef SERIALIZE_HPP_
#define SERIALIZE_HPP_

#include <cstdint>
#include <string>
#include <vector>
#include "record.hpp"

void serialize(const std::string& name, const std::vector<Record>& state);
std::vector<Record> deserialize(const std::string& name);

#endif
