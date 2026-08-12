#include "device.h"

#include <iostream>

int main() {
    Device device("Team Alpha device");
    std::cout << device.status_message() << '\n';
    return 0;
}
