#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <string>
#include <thread>
#include <vector>
using namespace std;
#include "plotter_disk.hpp"
void main()
try {
    auto memo = string("memo");
    auto id = vector<uint8_t>(32, 0);
    DiskPlotter().CreatePlotDisk(
        ".",
        ".",
        ".",
        "zhytest.plot",
        32,
        (const uint8_t*)memo.c_str(),
        memo.size(),
        &id[0],
        id.size(),
        0,
        64,
        0,
        thread::hardware_concurrency());
} catch (...) {
    throw;
}