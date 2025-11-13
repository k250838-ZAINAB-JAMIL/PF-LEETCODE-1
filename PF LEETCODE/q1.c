#include <stdio.h>

void runningSum(int nums[], int n, int result[]) {
    result[0] = nums[0];
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] + nums[i];
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("Array size must be between 1 and 1000.\n");
        return 1;
    }

    int nums[n], result[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] < -1000000 || nums[i] > 1000000) {
            printf("Element out of range [-10^6, 10^6].\n");
            return 1;
        }
    }

    runningSum(nums, n, result);

    printf("Running sum: [");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}

