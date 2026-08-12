#include <iostream>

#include "device.h"



int main() {
    Device device("LIG Buzzer device");
    std::cout << device.status_message() << '\n';
    return 0;
}