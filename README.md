# chngclcltr

## Overview

![Overview image](overview.png)

This is a GUI program for calculating the change from a price and the money given.

## Dependencies

I generally try to minimize dependencies, but I'm a one man crew and can therefore only support Linux Mint/Ubuntu as I'm running it myself. Anyway, you need to have the following packages installed for everything to work properly:

- GCC, G++, GDB and CMake for building the C++ code. Install them with `sudo apt install build-essential gdb cmake`.
- gtkmm as the used GUI toolkit. Install it with `sudo apt install libgtkmm-3.0-dev`.

## How to use it

Simply create a build directory via `mkdir build`, move to it via `cd build` and run CMake via `cmake ..` followed by make via `make`. Then run the executable via `./chngclcltr`.
