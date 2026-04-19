#include <iostream>
using namespace std;

/**
 * Merges arr2 into arr1 while maintaining sorted order and uniqueness.
 * @param arr1: The destination array (size must be sufficient).
 * @param m: Current number of elements in arr1 (passed by reference to update).
 * @param arr2: The source array to merge.
 * @param n: Number of elements in arr2.
 */
void merge(int arr1[], int& m, int arr2[], int n) {
    // We use a temporary array to make the unique merge logic cleaner
    int temp[100]; 
    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2
    int k = 0; // Pointer for temp

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            temp[k++] = arr1[i++];
        } else if (arr2[j] < arr1[i]) {
            temp[k++] = arr2[j++];
        } else {
            // Elements are equal: add once and advance both pointers to skip duplicate
            temp[k++] = arr1[i++];
            j++;
        }
    }

    // Copy remaining elements from arr1, if any
    while (i < m) {
        temp[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2, if any
    while (j < n) {
        temp[k++] = arr2[j++];
    }

    // Update arr1 with the merged result and update the size m
    m = k; 
    for (int x = 0; x < m; x++) {
        arr1[x] = temp[x];
    }
}

int main() {
    // Initial data from your example
    int arr1[100] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7};
    int m = 5; // size of arr1
    int n = 4; // size of arr2

    cout << "Before merge:" << endl;
    cout << "arr1 = { ";
    for(int i=0; i<m; i++) cout << arr1[i] << (i==m-1 ? "" : ", ");
    cout << " }" << endl;

    cout << "arr2 = { ";
    for(int i=0; i<n; i++) cout << arr2[i] << (i==n-1 ? "" : ", ");
    cout << " }" << endl;

    // Execute the merge
    merge(arr1, m, arr2, n);

    cout << "\nAfter merge:" << endl;
    cout << "arr1 = { ";
    for(int i=0; i<m; i++) cout << arr1[i] << (i==m-1 ? "" : ", ");
    cout << " }" << endl;
    
    cout << "arr2 = { ";
    for(int i=0; i<n; i++) cout << arr2[i] << (i==n-1 ? "" : ", ");
    cout << " }" << endl;

    return 0;
}