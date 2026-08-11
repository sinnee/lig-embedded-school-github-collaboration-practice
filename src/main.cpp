#include "device.h"

#include <iostream>

int main() {
    Device device("LIG training device");
    std::cout << device.status_message() << '\n';
    return 0;
}
