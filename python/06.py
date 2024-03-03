import time

# Function to perform a simple simulation task (example)
def simulate(iterations):
    data = [1] * 1000000  # Sample data
    for _ in range(iterations):
        # Perform simulation tasks here (example: simple data manipulation)
        data = [value * 2 for value in data]

def main():
    # Start the timer
    start = time.time()

    # Perform modeling and simulation tasks (example: simulation loop)
    simulate(200)  # Perform 200 iterations of simulation

    # Stop the timer
    end = time.time()
    duration = end - start

    # Display the time taken
    print("Time taken:", duration, "seconds")

if __name__ == "__main__":
    main()
