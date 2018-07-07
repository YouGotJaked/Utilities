#include <iostream>
#include <ctime>
#include "Date.h"
#include "Roommate.h"

int main() {
    // current system time
    time_t now = time(0);
    tm *ltm = localtime(&now);
    Date today(*ltm);
    std::cout << today;
}

