#include "device.h"

#include <cassert>
#include <iostream>
#include <stdexcept>

int main() {
    const Device device("UART");
    assert(device.name() == "UART");
    assert(device.status_message() == "UART ready");

    bool rejected_empty_name = false;
    try {
        const Device invalid("");
    } catch (const std::invalid_argument&) {
        rejected_empty_name = true;
    }
    assert(rejected_empty_name);

    std::cout << "All device tests passed\n";
    return 0;
}
