#include <stdio.h>

int main() 
{
    int i = 1;

    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    int j = 1;
    do {
        printf("\n%d", j);
        j++;
    } 
    while (j <= 5);

    return 0;
}
