#include <stdio.h>

void shuffleArray(int nums[], int n, int result[]) {
    int j = 0; // index for result array
    for (int i = 0; i < n; i++) {
        result[j++] = nums[i];      // x_i
        result[j++] = nums[i + n];  // y_i
    }
}

int main() {
    int n;

    // Input n
    printf("Enter n (half the size of the array): ");
    scanf("%d", &n);

    if (n < 1 || n > 500) {
        printf("n must be between 1 and 500.\n");
        return 1;
    }

    int size = 2 * n;
    int nums[size], result[size];

    // Input array elements
    printf("Enter %d elements (1 <= nums[i] <= 1000):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] < 1 || nums[i] > 1000) {
            printf("Element out of range.\n");
            return 1;
        }
    }

    // Shuffle the array
    shuffleArray(nums, n, result);

    // Print the shuffled array
    printf("Shuffled array: [");
    for (int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
