# SubtitleRemover

A lightweight C++ command-line utility that automatically removes `.srt` and `.vtt` subtitle files from a directory.

## Features

* Removes `.srt` subtitle files
* Removes `.vtt` subtitle files

## Linux Usage

Run the program from the directory where you want to remove subtitle files:

```bash
./SubtitleRemover
```

By default, the program checks the current directory only.

### Recursive Mode

Use the `-r` argument to recursively search through subdirectories:

```bash
./SubtitleRemover -r
```

This will search the current directory and all of its subdirectories for:

```text
.srt
.vtt
```

and remove any files with those extensions.

## Windows Usage
Run the .exe from the directory where you want to remove subtitle files.
### Windows version is automatically recursive.

## Building

### Requirements

* C++17 or newer
* A C++ compiler such as `g++` or `clang++`
* CMake (if using the included CMake configuration)

### Using CMake

Create a build directory:

```bash
mkdir build
cd build
```

Configure the project:

```bash
cmake ..
```

Build it:

```bash
make
```

The executable will then be available in the build directory.

### Using g++

You can also compile the source directly:

```bash
g++ -std=c++17 main.cpp directory_search.cpp -o SubtitleRemover
```

Then run:

```bash
./SubtitleRemover
```

## Project Structure

```text
SubtitleRemover/
├── main.cpp
├── directory_search.cpp
├── directory_search.h
├── CMakeLists.txt
└── README.md
```

## Warning

**This program permanently deletes matching subtitle files.**

There is currently no recycle bin, confirmation prompt, or undo functionality.

Make sure you are running the program in the intended directory before using it.

## License

This project is open source. See the repository license for details.
