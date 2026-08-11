#include "device.h"

#include <stdexcept>
#include <utility>

Device::Device(std::string name) : name_(std::move(name)) {
    if (name_.empty()) {
        throw std::invalid_argument("device name must not be empty");
    }
}

const std::string& Device::name() const {
    return name_;
}

std::string Device::status_message() const {
    return name_ + " ready";
}
