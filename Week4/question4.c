#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isMultipleOf11(char* num) {
    int length = strlen(num);
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            evenSum += num[i] - '0';
        } else {
            oddSum += num[i] - '0';
        }
    }

    int difference = abs(evenSum - oddSum);
    
    return (difference == 0 || difference % 11 == 0);
}

int main() {
    char num[1001];

    FILE *fp = fopen("input.txt", "r");
    if (!fp) {
        perror("Error opening the file");
        return -1;
    }

    while (fgets(num, sizeof(num), fp)) {
        // Remove newline character
        num[strcspn(num, "\n")] = 0;

        // Stop at 0
        if (strcmp(num, "0") == 0) {
            break;
        }

        if (isMultipleOf11(num)) {
            printf("%s is a multiple of 11.\n", num);
        } else {
            printf("%s is not a multiple of 11.\n", num);
        }
    }

    fclose(fp);
    return 0;
}