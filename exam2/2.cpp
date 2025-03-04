#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n], i, j, visited[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
        visited[i] = 0; // Mark as not checked
    }

    // Count duplicates
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) // Skip if already counted
            continue;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate
            }
        }
    }

    printf("The total number of duplicate elements found in the array is: %d\n", count);
    return 0;
}
