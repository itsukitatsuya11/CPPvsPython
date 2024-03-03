#include <iostream>
#include <chrono>

void codeToBenchmark() {
    // Code to be benchmarked (example)
    for (int i = 0; i < 1000000; ++i) {
        // Perform some computation
        double result = i * i;
    }
}

int main() {
    // Define the number of repetitions
    const int REPEATS = 100;

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Repeat the code execution
    for (int i = 0; i < REPEATS; ++i) {
        codeToBenchmark();
    }

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Calculate average time taken per execution
    double averageTime = duration.count() / REPEATS;

    // Display the average time taken
    std::cout << "Average time taken per execution: " << averageTime << " seconds" << std::endl;

    return 0;
}
