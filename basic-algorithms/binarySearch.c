#include <stdio.h>

int main() {

    int nums[] = {-1, 0, 3, 5, 9, 12};
    int size = 6;
    int target = 9;

    int left = 0;
    int right = size - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            printf("Target found at index: %d\n", mid);
            return 0;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    printf("Target not found\n");

    return 0;
}