#include <stdio.h>
int main() {
    int colum = 75;
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("%d ", colum + i + j);
        }
        printf("\n");
    }
    return 0;
}
