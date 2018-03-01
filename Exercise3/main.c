#include <stdio.h>

int main() {
    float side1, side2, side3, hT, area, perimeter;
    char op;
    do {
        //printf
        scanf("%f %f %f", &side1, &side2, &side3);


        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}