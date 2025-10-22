#include <stdio.h>

int main() {
    int id[10];
    int i, j;

    printf("Enter 10 IDs : ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &id[i]);
    }

    printf("You entered the following IDs : \n");
    for (i = 0; i < 10; i++){
        printf(" %d ",id[i]);
    }
   

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (id[i] == id[j]) {
                id[j] = -1;  // Duplicate with -1
            }
        }
    }

    printf("\nUpdated IDs : \n");
    for (i = 0; i < 10; i++) {
        printf(" %d ", id[i]);
    }

    return 0;
}
