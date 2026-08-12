#include "device.h"

#include <iostream>

int main() {
    Device device("Team Beta device");
    std::cout << device.status_message() << '\n';
    return 0;
}
