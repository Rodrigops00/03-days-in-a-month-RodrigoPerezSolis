/*
 * este programa toma de input el mes y el año y le dice al usuario cuantos dias
 * tiene ese mes y ese año
 * Autor: Rodrigo Perez Solis A01411278
 */

#include <stdio.h>
int main (){
    // Aqui pondremos las dos variables para el mes y el año
    int month;
    signed int year;
    printf(" Hi i am going to show you how many days does a month has\n");
    //Aqui le pedimos al usuario que ponga el numero de el mes.
    printf("Enter the number of the month\n");
    scanf("%i",&month);
    printf(" please write the yearn\n");
    scanf("%i",&year);

    switch (month) {case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days\n");
            break;
            // Abril,Junio,Septiembre y noviembre cuentan solo con 30 dias

        case 4:
        case 6:
        case 9:
        case 11:
            printf("This month has 30 days\n");
            break;

            // en febrero el año solo tiene 29 dias y si es año biciesto tiene 28
        case 2:
            if (year %4 == 0) {
                printf ("this month has 29 days cause is a leap year\n");

            } else {
                printf("this month has 28 days\n");
            } break;

        default: printf("Sorry that is not a month, enter another value");

    }
    return 0;
}

