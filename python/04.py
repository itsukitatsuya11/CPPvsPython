import time

# Create a large string as sample data
data = "Lorem ipsum dolor sit amet, consectetur adipiscing elit."

# Start the timer
start = time.time()

# Perform string processing operations here
reversed_string = data[::-1]

# Stop the timer
end = time.time()
duration = end - start

# Display the result and the time taken
print("Reversed string:", reversed_string)
print("Time taken:", duration, "seconds")
