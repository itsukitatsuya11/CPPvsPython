import time

# Create a large list as sample data
data = [1] * 1000000  # 1 million elements with value 1

# Start the timer
start = time.time()

# Process the data here
total = sum(data)

# Stop the timer
end = time.time()
duration = end - start

# Display the result and the time taken
print("Total:", total)
print("Time taken:", duration, "seconds")
