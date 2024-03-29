#include <stdio.h>

int main() {

    int n;
    printf("how many array elements do you want to add: ");
    scanf("%d", &n);

    // Check if the user entered a non-positive size
    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];

    // Insert elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    int max = arr[0], min = arr[0];
    int max_index = 0, min_index = 0;

    // Checking the max, min
    for (int i = 1; i < n; i++) {

        if (arr[i] > max) {
            max = arr[i];
            max_index = i;

        }
        if (arr[i] < min) { // Use if instead of else if for independent checks
            min = arr[i];
            min_index = i;
        }
    }

    // Print out the elements
    printf("Elements: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    // Printing out all the things
    printf("Max is: %d\n", max);
    printf("Min is: %d\n", min);
    printf("Max index is: %d\n", max_index+1);
    printf("Min index is: %d\n", min_index+1);

    return 0;
}
