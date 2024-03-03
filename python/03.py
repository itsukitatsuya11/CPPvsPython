import time
import math

# Start the timer
start = time.time()

# Perform scientific computations and mathematical calculations here
result = 0
for i in range(1000000):
    result += math.sin(i) * math.cos(i)

# Stop the timer
end = time.time()
duration = end - start

# Display the result and the time taken
print("Result:", result)
print("Time taken:", duration, "seconds")
