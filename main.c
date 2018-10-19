/*

Write a program to read n number of real values in an array and then shows a menu that let the user:

    -Compute the sum of the given numbers.
    -Compute the average of the given numbers.
    -Display the smallest value of the given numbers and the number of the cell where it is stored.
    -Display the biggest value of the given numbers and the number of the cell where it is stored.

Name: Óscar Rubén Gómez Ríos
Mail: A01411750@itesm.mx
Matricule Number: A01411750

 */

#include <stdio.h>


float sum(int array[], int a) {
    float b = 0;
    for (int i = 0; i < a; i++) {
        b += array[i];
    }
    return b;
}

int main() {

    int c;
    int d;
    int e;
    int number;

    printf("How many numbers would you like to enter?\n");
    scanf("%i", &d);

    int array[d];

    printf("You will now enter %i numbers.\n", d);

    for (int i = 0; i < d; i++) {
        printf("Give me number %i:\n", i + 1);
        scanf("%i", &c);
        array[i] = c;
    }

    printf("What would you like to do with these numbers?\nPress '1' To add the numbers.\n"
           "Press '2' To get the average of the numbers.\n"
           "Press '3' To Know the smallest value of the numbers and the number of the cell where it is stored.\n"
           "Press '4' To Know the biggest value of the numbers and the number of the cell where it is stored.\n");
    scanf("%i", &e);

    switch(e) {
        case 1:
            printf("The sum of the numbers is %.1f.", sum(array, d));
            break;
        case 2:
            printf("The average of the numbers is %.1f.", sum(array, d)/ (sizeof(array)/sizeof(array[0])));
            break;
        case 3:
            number = array[0];

            for (int i = 0; i < d; i++) {
                if (array[i] < number) {
                    number = array[i];
                }
            }
            printf("The smallest number is %i.", number);
            break;
        case 4:
            number = array[0];

            for (int i = 0; i < d; i++) {
                if (array[i] > number) {
                    number = array[i];
                }
            }
            printf("The biggest number is %i.", number);
            break;
        default:
            printf("That is not available.");
    }

    return 0;

}
