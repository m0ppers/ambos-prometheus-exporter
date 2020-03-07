# AmBoS Prometheus Exporter

A simple exporter for the old Amiga BBS System AmBoS.

Currently only exports one value :S

## Build requirements

this project is intended to be cross compiled

- bebbos amiga gcc toolchain
- cmake

## Building

```
mkdir build/release
cd build/release
cmake -DCMAKE_BUILD_TYPE=Release -DAMIGA_TOOLCHAIN_PATH=INSTALL_PATH_FOR_BEBBOS_TOOLCHAIN -DCMAKE_TOOLCHAIN_FILE=../../amiga-toolchain.cmake ../..
make -j4
```

## Usage

Just execute the binary on your amiga. It will occupy port 9771

