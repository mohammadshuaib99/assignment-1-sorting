#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isAlmostSorted(const vector<int>& arr) {
    int n = arr.size();

    // If array has less than 2 elements, it is considered almost sorted
    if (n <= 2) {
        return true;
    }

    // Iterate through the array and check if each element is at most one position away from being sorted
    for (int i = 0; i < n - 1; ++i) {
        if (abs(arr[i] - arr[i + 1]) > 1) {
            return false;
        }
    }

    return true;
}

int main() {
    // Test cases
    vector<int> arr1 = {1, 2, 3, 4, 5}; // Sorted array
    vector<int> arr2 = {1, 3, 2, 4, 5}; // Almost sorted
    vector<int> arr3 = {1, 4, 3, 2, 5}; // Not almost sorted

    cout << "Array 1 is almost sorted? " << (isAlmostSorted(arr1) ? "Yes" : "No") << endl;
    cout << "Array 2 is almost sorted? " << (isAlmostSorted(arr2) ? "Yes" : "No") << endl;
    cout << "Array 3 is almost sorted? " << (isAlmostSorted(arr3) ? "Yes" : "No") << endl;

    return 0;
}
