#include <stdio.h>

int main() {

    int nums[] = {0, 1, 0, 3, 12};
    int size = 5;

    int position = 0;

    for (int i = 0; i < size; i++) {

        if (nums[i] != 0) {

            int temp = nums[i];
            nums[i] = nums[position];
            nums[position] = temp;

            position++;
        }
    }

    printf("Array after moving zeroes:\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}