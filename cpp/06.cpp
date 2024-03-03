#include <iostream>
#include <vector>
#include <chrono>

// Function to perform a simple simulation task (example)
void simulate(int iterations) {
    std::vector<double> data(1000000, 1); // Sample data
    for (int i = 0; i < iterations; ++i) {
        // Perform simulation tasks here (example: simple data manipulation)
        for (double& value : data) {
            value *= 2;
        }
    }
}

int main() {
    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Perform modeling and simulation tasks (example: simulation loop)
    simulate(200); // Perform 200 iterations of simulation

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Display the time taken
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
