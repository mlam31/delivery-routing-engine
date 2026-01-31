# High-Performance Delivery Routing Engine

A C++17 multi-threaded routing engine designed to manage and prioritize package deliveries efficiently. 

## Overview
This project simulates a logistics hub (inspired by systems like Amazon's) where packages arrive with different priority levels and are dispatched to delivery trucks using a thread-safe priority queue.

## 🛠️ Tech Stack
- **Language:** C++17
- **Build System:** CMake
- **Concurrency:** Standard Threading Library (`std::thread`, `std::mutex`)
- **Data Structures:** Custom thread-safe Priority Queue

## Project Structure
- `include/`: Header files (.hpp)
- `src/`: Source files (.cpp)
- `tests/`: Unit tests (planned)

## How to Build
1. Create a build directory: `mkdir build && cd build`
2. Configure: `cmake ..`
3. Build: `cmake --build .`
4. Run: `./DeliveryEngine`

## Roadmap
- [x] Basic Project Structure & CMake setup
- [ ] Core Data Structures (Package & Priority Queue)
- [ ] Thread-safe implementation
- [ ] Multi-threaded Truck simulation
- [ ] Real-time routing dashboard (CLI)
