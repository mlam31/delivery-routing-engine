cmake_minimum_required(VERSION 3.10)
project(DeliveryRoutingEngine VERSION 1.0 LANGUAGES CXX)

# Use C++17 for Smart Pointers and Threading support
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Multithreading (essential for our Truck threads)
find_package(Threads REQUIRED)

# Tell CMake where to find header files
include_directories(include)

# List of source files
set(SOURCES 
    src/main.cpp 
    src/Core/Package.cpp
    src/Core/PackageTypes.cpp
    src/Engine/Router.cpp
    src/Engine/Truck.cpp
)

# Create the executable
add_executable(DeliveryEngine ${SOURCES})

# Link the Threading library
target_link_libraries(DeliveryEngine PRIVATE Threads::Threads)