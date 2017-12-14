#include "TimeUtilities.h"

void sleepMs(int time) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::microseconds(time));
}