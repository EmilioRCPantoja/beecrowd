#include<stdio.h>

int main(){
    int num, hours;
    float salperh, salary;
    scanf("%d", &num);
    scanf("%d", & hours);
    scanf("%f", &salperh);
    salary= hours*salperh;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %0.2f\n", salary);
return 0;
}