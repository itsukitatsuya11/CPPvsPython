#include <iostream>
#include <string>
#include <chrono>

int main() {
    // Create a large string as sample data
    std::string data = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Perform string processing operations here
    std::string reversed;
    for (int i = data.size() - 1; i >= 0; --i) {
        reversed += data[i];
    }

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Display the result and the time taken
    std::cout << "Reversed string: " << reversed << std::endl;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
