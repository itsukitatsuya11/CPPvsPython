import threading
import time

def cpu_intensive_task():
    # Perform CPU-intensive task (example)
    for i in range(100000000):
        result = i * i

def main():
    # Define the number of threads
    NUM_THREADS = 4

    # Start the timer
    start = time.time()

    # Create and start multiple threads
    threads = []
    for _ in range(NUM_THREADS):
        thread = threading.Thread(target=cpu_intensive_task)
        thread.start()
        threads.append(thread)

    # Join all threads to the main thread
    for thread in threads:
        thread.join()

    # Stop the timer
    end = time.time()
    duration = end - start

    # Display the time taken
    print("Time taken:", duration, "seconds")

if __name__ == "__main__":
    main()
