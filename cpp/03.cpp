#include <iostream>
#include <cmath>
#include <chrono>

int main() {
    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Perform scientific computations and mathematical calculations here
    double result = 0;
    for (int i = 0; i < 1000000; ++i) {
        result += std::sin(i) * std::cos(i);
    }

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Display the result and the time taken
    std::cout << "Result: " << result << std::endl;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
