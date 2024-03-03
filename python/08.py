import time

def code_to_benchmark():
    # Code to be benchmarked (example)
    for i in range(1000000):
        # Perform some computation
        result = i * i

def main():
    # Define the number of repetitions
    REPEATS = 100

    # Start the timer
    start = time.time()

    # Repeat the code execution
    for _ in range(REPEATS):
        code_to_benchmark()

    # Stop the timer
    end = time.time()
    duration = end - start

    # Calculate average time taken per execution
    average_time = duration / REPEATS

    # Display the average time taken
    print("Average time taken per execution:", average_time, "seconds")

if __name__ == "__main__":
    main()
