# C-Unit-Test-Template
A project demo for demonstrating how to test C code with Google Test

## Prerequisites

You need to install the following software in order to run this project

- [git](https://git-scm.com/)
- A C++14 compatible compiler (gcc or clang). Under Linux gcc is usually already installed by default.
- [CMake](https://cmake.org/) v3.5 or higher
- [Google Test and Google Mock](https://github.com/google/googletest)
- The pthread library is also required (usually already available under Linux)


## Building

1. Create a project folder: 

```
cd ~
mkdir unit-test-demo
cd unit-test-demo
```

2. Clone this repository with git: `git clone https://github.com/Jawan81/C-Unit-Test-Template.git`
3. Create a build output directory:


```
mkdir build
cd build
```

4. Run CMake to create the makefiles: `cmake ../C-Unit-Test-Template`
5. Choose your build target, e.g. for building the unit tests run `make runUnitTests`
6. Run the executable: `tests/runUnitTests`
