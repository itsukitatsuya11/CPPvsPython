import time

# Function to perform matrix-vector multiplication
def matrix_vector_multiply(matrix, vector):
    result = [0] * len(matrix)
    for i in range(len(matrix)):
        for j in range(len(vector)):
            result[i] += matrix[i][j] * vector[j]
    return result

# Sample matrix and vector data
matrix = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]
vector = [1, 2, 3]

# Start the timer
start = time.time()

# Perform matrix-vector multiplication
result = matrix_vector_multiply(matrix, vector)

# Stop the timer
end = time.time()
duration = end - start

# Display the result and the time taken
print("Result vector:", result)
print("Time taken:", duration, "seconds")
