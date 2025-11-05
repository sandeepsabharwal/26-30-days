# Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

#include <stdio.h>

int main() {
    int group_sizes[] = {1, 4, 5, 3, 1};
    int total_groups = sizeof(group_sizes) / sizeof(group_sizes[0]);

    for (int i = 0; i < total_groups; i++) {
        for (int j = 0; j < group_sizes[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // Blank line between groups
    }

    return 0;
}
