#include <stdio.h>
#include <math.h>

#define sqr(x) ((x) * (x)) // Define a macro for squaring a number

int main() {
    double side1, side2, hypotenuse;

    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);

    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);

    hypotenuse = sqrt(sqr(side1) + sqr(side2)); // Use the macro sqr

    printf("The hypotenuse is: %lf\n", hypotenuse);

    return 0;
}

/*to compile this program use: gcc math.c -o math -lm
*/
/*to output use: ./math */
