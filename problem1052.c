#include<stdio.h>

int main()
{
    int i, mesat ;
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    char *meses[] = {"January\n", "Febuary\n", "March\n", "April\n", "May\n", "june\n", "July\n", "August\n", "September\n", "October\n", "November\n", "December\n"};
    i = 0;

    scanf("%d", &mesat);



   while(mesat != numeros[i])
   {
    i++;
   }

   printf("%s",meses[i] );

}