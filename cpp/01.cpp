#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to generate random numbers
vector<int> generateRandomNumbers(int size) {
    vector<int> nums(size);
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        nums[i] = rand();
    }
    return nums;
}

// Function to perform benchmarking
void benchmarkSortingAlgorithms(int size) {
    vector<int> nums = generateRandomNumbers(size);
    vector<int> nums_copy = nums;

    // Benchmarking selection sort
    auto start = high_resolution_clock::now();
    sort(nums.begin(), nums.end());
    auto stop = high_resolution_clock::now();
    auto duration_selection_sort = duration_cast<milliseconds>(stop - start).count();
    cout << "Selection Sort Time: " << duration_selection_sort << " milliseconds" << endl;

    // Benchmarking C++ sort function (introsort)
    start = high_resolution_clock::now();
    sort(nums_copy.begin(), nums_copy.end());
    stop = high_resolution_clock::now();
    auto duration_cpp_sort = duration_cast<milliseconds>(stop - start).count();
    cout << "C++ Sort (introsort) Time: " << duration_cpp_sort << " milliseconds" << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    benchmarkSortingAlgorithms(size);
    return 0;
}
