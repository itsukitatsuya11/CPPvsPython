import time
import sys

def main():
    # Define the size of memory-intensive data structure
    SIZE = 1000000  # Adjust size as needed

    # Start the timer
    start = time.time()

    # Allocate memory-intensive data structure (example: list of integers)
    data = [0] * SIZE

    # Perform memory-intensive operations (example: fill the list with values)
    for i in range(SIZE):
        data[i] = i

    # Stop the timer
    end = time.time()
    duration = end - start

    # Display the time taken and memory usage
    print("Time taken:", duration, "seconds")
    print("Memory used:", sys.getsizeof(data) / (1024 * 1024), "MB")

if __name__ == "__main__":
    main()
