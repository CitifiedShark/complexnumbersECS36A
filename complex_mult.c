
#include <stdio.h>
#include <math.h>

/*
This program helps us evaluate the product of multiplying two complex numbers

We first ask the user for input
1. A complex number in the form ai + b
2. Another complex number in the form ai + b that will be multiplied with the previous complex number

We then multiply the inputs together
1. We first solve for b of ai + b
2. We then solve for a of ai + b

We display the product of the two complex numbers multiplied by each other
*/
int main(void) {
    int a1, b1, a2, b2; // Variables to gather input from user
    int x1, x2, x3, x4; // Hidden Variables used for calculations
    int aFinal, bFinal; // Final Output Variables

    // Ask for the user's input
    printf("Enter the first complex number in the form ai + b: ");
    scanf(" %d i + %d", &a1, &b1);
    printf("Enter the second complex number in the form ai + b: ");
    scanf(" %d i + %d", &a2, &b2);

    // Multiply the inputs together
    // Solve for B
    x1 = a1 * a2 * -1;
    x2 = b1 * b2;
    bFinal = x1 + x2;

    // Solve for A
    x3 = a1 * b2;
    x4 = b1 * a2;
    aFinal = x3 + x4;

    // Display the result
    printf("(%di + %d) * (%di + %d) = %di + %d\n", a1, b1, a2, b2, aFinal, bFinal);

    return 0;
}