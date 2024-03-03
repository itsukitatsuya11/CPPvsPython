import random
import time

# Function to generate random numbers
def generate_random_numbers(size):
    return [random.randint(0, 1000) for _ in range(size)]

# Function to perform benchmarking
def benchmark_sorting_algorithms(size):
    nums = generate_random_numbers(size)
    nums_copy = nums.copy()

    # Benchmarking selection sort
    start = time.time()
    nums.sort()
    duration_selection_sort = (time.time() - start) * 1000
    print(f"Selection Sort Time: {duration_selection_sort} milliseconds")

    # Benchmarking Python's built-in sort function (Timsort)
    start = time.time()
    nums_copy.sort()
    duration_python_sort = (time.time() - start) * 1000
    print(f"Python Sort (Timsort) Time: {duration_python_sort} milliseconds")

if __name__ == "__main__":
    size = int(input("Enter the size of the list: "))
    benchmark_sorting_algorithms(size)
