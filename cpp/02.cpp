#include <iostream>
#include <vector>
#include <chrono>

int main() {
    // Create a large vector as sample data
    std::vector<int> data(1000000, 1); // 1 million elements with value 1

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Process the data here
    long long sum = 0;
    for (int num : data) {
        sum += num;
    }

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Display the result and the time taken
    std::cout << "Total: " << sum << std::endl;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
