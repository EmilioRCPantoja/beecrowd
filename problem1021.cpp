#include <bits/stdc++.h>

using namespace std;

 
int main()
{
float valorori, dinh;
int notas[] = {10000, 5000, 2000, 1000, 500, 200};
int moedas[] = {100, 50, 25, 10, 5, 1};
int i, qntd, valorf;

cin >> valorori;

valorf = valorori * 100 + 0.5;

cout << "NOTAS:"<<endl;

for(i = 0; i<6; i++)
{
    qntd = valorf / notas[i];
    valorf = valorf % notas[i];
    dinh = notas[i]/100.0;
    cout << qntd << " nota(s) de R$ "<<fixed << setprecision(2) << dinh << endl;
}

cout << "MOEDAS:" << endl;

for(i = 0; i<6; i++)
{
    qntd = valorf / moedas[i];
    valorf = valorf % moedas[i];
    dinh = moedas[i]/100.0;
    cout << qntd << " moeda(s) de R$ "<<fixed << setprecision(2) << dinh << endl;
}


}