#include <stdio.h>

int main()
{
  int valorori, valorf, i;
  int nota[] = {100, 50, 20, 10, 5, 2, 1};
  int cont; 
  

  scanf("%d", &valorori);

  printf("%d\n", valorori);
  valorf = valorori;

  for(i = 0; i<7; i++)
  {
    cont = valorf / nota[i];
    valorf = valorf % nota[i];
    printf("%d nota(s) de R$ %d,00\n", cont, nota[i]);
  }
  
  /*ValorF = ValorOri;

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

  Conta1 = ValorF;

  printf("%d\n", ValorOri);
  printf("%d nota(s) de R$ 100,00\n", cont100);
  printf("%d nota(s) de R$ 50,00\n", cont50);
  printf("%d nota(s) de R$ 20,00\n", cont20);
  printf("%d nota(s) de R$ 10,00\n", cont10);
  printf("%d nota(s) de R$ 5,00\n", Conta5);
  printf("%d nota(s) de R$ 2,00\n", Conta2);
  printf("%d nota(s) de R$ 1,00\n", Conta1);*/


}


