#pragma once

#include <string>

class Device {
public:
    explicit Device(std::string name);

    const std::string& name() const;
    std::string status_message() const;

private:
    std::string name_;
};
