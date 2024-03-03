#include <iostream>
#include <vector>
#include <chrono>

int main() {
    // Define the size of memory-intensive data structure
    const int SIZE = 1000000; // Adjust size as needed

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Allocate memory-intensive data structure (example: vector of integers)
    std::vector<int> data(SIZE);

    // Perform memory-intensive operations (example: fill the vector with values)
    for (int i = 0; i < SIZE; ++i) {
        data[i] = i;
    }

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Display the time taken and memory usage
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
    std::cout << "Memory used: " << SIZE * sizeof(int) / (1024 * 1024) << " MB" << std::endl;

    return 0;
}
