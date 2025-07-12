/**
 * @file example.cpp
 * @brief Implementation of Example class for Doxygen feature testing.
 */

#include "example.hpp"
#include <stdexcept>

Example::Example() : name_("Unnamed"), color(Color::Red) {}

Example::Example(const std::string& name) : name_(name), color(Color::Green) {}

bool Example::setName(const std::string& name) {
    if (name.empty()) return false;
    name_ = name;
    return true;
}

std::string Example::getName() const {
    return name_;
}

void Example::addValue(int value) {
    if (value < 0) throw std::invalid_argument("Negative value not allowed");
    values_.push_back(value);
}

std::vector<int> Example::getValues() const {
    return values_;
}

int Example::add(int x, int y) {
    return x + y;
}
