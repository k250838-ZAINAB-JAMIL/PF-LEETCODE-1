#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Array size must be between 1 and 100.\n");
        return 1;
    }

    int nums[100];  // fixed-size array to avoid VLA errors

    printf("Enter %d elements (1 <= nums[i] <= 1000):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] < 1 || nums[i] > 1000) {
            printf("Element out of range.\n");
            return 1;
        }
    }

    // Replace even with 0, odd with 1
    for (int i = 0; i < n; i++) {
        nums[i] = (nums[i] % 2 == 0) ? 0 : 1;
    }

    // Sort using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // Print result
    printf("Resulting array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
