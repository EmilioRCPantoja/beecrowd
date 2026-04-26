#include <bits/stdc++.h>

using namespace std;

int vencedor(char *a, char *b) 
{
    if ((strcmp(a, "tesoura") == 0 && strcmp(b, "papel") == 0) || 
        (strcmp(a, "papel") == 0 && strcmp(b, "pedra") == 0) || 
        (strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") == 0) ||
        (strcmp(a, "lagarto") == 0 && strcmp(b, "Spock") == 0) ||
        (strcmp(a, "Spock") == 0 && strcmp(b, "tesoura") == 0) ||
        (strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") == 0) ||
        (strcmp(a, "lagarto") == 0 && strcmp(b, "papel") == 0) ||
        (strcmp(a, "papel") == 0 && strcmp(b, "Spock") == 0) ||
        (strcmp(a, "Spock") == 0 && strcmp(b, "pedra") == 0) ||
        (strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") == 0))
    {
        return 1;
    } else if (strcmp(a, b) == 0)
    {
        return 0;
    } else
    {
        return -1;
    }
}

int main(){

    int T;
    cin >> T;
    

     char jogador1[50];
     char jogador2[50];



    for (int i = 1; i <= T; i++)
    {
         cin >> jogador1 >> jogador2;

        int resultado = vencedor(jogador1, jogador2); 

    

        if (resultado == 1)
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (resultado == -1)
        {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        } else
        {
            cout << "Caso #" << i << ": De novo!" << endl;
        }
    }

    return 0;
}

