#include<stdio.h>

/*int main()
{
    float ValorOri, ValorF, Conta2, Conta5, Conta10, cont100, cont20, cont50;
    float Conta1, cont50cents, cont75cents, cont25cents, cont10cents, cont5cents, cont1cent;

    scanf("%f", &ValorOri);
  
    ValorF = ValorOri;

    cont100 = ValorF / 100;
    ValorF = ValorF % 100;

    cont50 = ValorF / 50;
    ValorF = ValorF % 50;

    cont20 = ValorF / 20;
    ValorF = ValorF % 20;

    cont10 = ValorF / 10;
    ValorF = ValorF % 10;

    Conta5 = ValorF / 5;
    ValorF = ValorF % 5;

    Conta2 = ValorF / 2;
    ValorF = ValorF % 2;

    
    Conta1 = (int)ValorF;
    
    cont50cents = ValorF / 0.5;
    Valorf = ValorF % 0.5;

    cont75cents = ValorF / 0.75;
    ValorF = ValorF % 0.75;

    cont25cents = ValorF / 0.25;
    ValorF = ValorF % 0.25;

    cont10cents = ValorF / 0.1;
    ValorF = ValorF % 0.1;

    cont5cents = ValorF / 0.05;
    ValorF = ValorF % 0.05;

    cont1cent = ValorF
}
*/

int main()
{
float valorori, dinh;
int notas[] = {10000, 5000, 2000, 1000, 500, 200};
int moedas[] = {100, 50, 25, 10, 5, 1};
int i, qntd, valorf;

scanf("%f", &valorori);

valorf = valorori * 100 + 0.5;

printf("NOTAS:\n");

for(i = 0; i<6; i++)
{
    qntd = valorf / notas[i];
    valorf = valorf % notas[i];
    dinh = notas[i]/100.0;
    printf("%d nota(s) de R$ %0.2f\n", qntd , dinh);
}

printf("MOEDAS:\n");

for(i = 0; i<6; i++)
{
    qntd = valorf / moedas[i];
    valorf = valorf % moedas[i];
    dinh = moedas[i]/100.0;
    printf("%d moeda(s) de R$ %0.2f\n", qntd, dinh);
}


}