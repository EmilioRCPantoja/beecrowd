#include<stdio.h>

int main()
{
    float l1, l2, l3, area, peri;

    scanf("%f %f %f", &l1, &l2, &l3);

    if((l1 + l2) > l3 && (l3 + l1) > l2 && (l3 +l2) > l1)
    {
        peri = l1 + l2 + l3;
        printf("Perimetro = %0.1f\n", peri);
    }
    else
    {
        area = ((l1 + l2) * l3)/2;
        printf("Area = %0.1f\n", area);
    }

    
    return 0;
}