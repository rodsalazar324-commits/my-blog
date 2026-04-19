void merge(int arr1[], int& size1, int arr2[], int size2) {
    int i = size1 - 1;     // End of elements in arr1
    int j = size2 - 1;     // End of arr2
    int k = size1 + size2 - 1; // End of target space

    // Merge from back to front to avoid overwriting arr1 elements
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else if (arr1[i] < arr2[j]) {
            arr1[k--] = arr2[j--];
        } else {
            // Elements are equal (unique elements requirement)
            arr1[k--] = arr1[i--];
            j--; 
        }
    }
    // Copy remaining elements of arr2 if any
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
    // Note: If arr1 has unique elements left, they are already in place.
}