#include <stdio.h>

void main() {
   int numbers[] = {2, 3, 4, 5, 6}; // limit less array

    int len_of_numbers = sizeof(numbers) / 4;
    int result = 0;
    
    // set outer loop from 1 - 10
    for (int n = 1; n <= 10; n++) {
        for (int index = 0; index < len_of_numbers; index++) {
            result = (numbers[index] * n);
            
            if (n < 10) {
                if (result < 10) {
                    printf("%d * 0%d = 0%d\t|\t", numbers[index], n, result);
                } else {
                    printf("%d * 0%d = %d\t|\t", numbers[index], n, result);
                }
            } else {
                printf("%d * %d = %d\t|\t", numbers[index], n, result);
            }
        }printf("\n");
}
}