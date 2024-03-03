#include <iostream>
#include <thread>
#include <chrono>

void cpuIntensiveTask() {
    // Perform CPU-intensive task (example)
    for (int i = 0; i < 100000000; ++i) {
        double result = i * i;
    }
}

int main() {
    // Define the number of threads
    const int NUM_THREADS = 4;

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Create and start multiple threads
    std::thread threads[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; ++i) {
        threads[i] = std::thread(cpuIntensiveTask);
    }

    // Join all threads to the main thread
    for (int i = 0; i < NUM_THREADS; ++i) {
        threads[i].join();
    }

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Display the time taken
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
