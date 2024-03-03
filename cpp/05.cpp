#include <iostream>
#include <vector>
#include <chrono>

// Function to perform matrix-vector multiplication
std::vector<double> matrixVectorMultiply(const std::vector<std::vector<double>>& matrix, const std::vector<double>& vector) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    std::vector<double> result(rows, 0);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i] += matrix[i][j] * vector[j];
        }
    }

    return result;
}

int main() {
    // Sample matrix and vector data
    std::vector<std::vector<double>> matrix = {{1, 2, 3},
                                               {4, 5, 6},
                                               {7, 8, 9}};
    std::vector<double> vector = {1, 2, 3};

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    // Perform matrix-vector multiplication
    std::vector<double> result = matrixVectorMultiply(matrix, vector);

    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Display the result and the time taken
    std::cout << "Result vector:";
    for (double value : result) {
        std::cout << " " << value;
    }
    std::cout << std::endl;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
