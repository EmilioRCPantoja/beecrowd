#include<stdio.h>

int main()
{
    int num, year, day, month;
    
    scanf("%d", &num);

    year = num/365;
    month = (num%365)/30;
    day = (num%365)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
}