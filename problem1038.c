#include<stdio.h>

int main()
{
    float preco,  valort;
    int cod,num;

    scanf("%d %d", &cod, &num);

    switch (cod)
    {
    case 1:
        preco = 4;
        
        break;
    case 2:
        preco = 4.5;

        break;
    case 3:
        preco = 5;
        
         break;
    case 4:
         preco = 2;
    
        break;
    case 5:
        preco = 1.5;
    
        break;
    }

    valort = preco * num;
    printf("Total: R$ %.2f\n", valort);
}