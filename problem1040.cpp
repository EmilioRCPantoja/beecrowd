#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n1, n2, n3, n4, ne, med, medf;

    cin >> n1 >> n2 >> n3 >> n4;

    med = ((n1 * 2) + (n2 * 3) + (n3 * 4) +n4)/10;

    if(med < 5)
    {
        cout << "Media: " << fixed << setprecision(1) <<  med <<endl;
        cout <<"Aluno reprovado." << endl; 

    }
    else
    {
        if(med >= 7)
        {
            cout << "Media: " << fixed << setprecision(1) << med << endl;
            cout <<"Aluno aprovado." << endl; 
        }
        else
        {
            cin >> ne;
            medf = (med+ne)/2;
            if(medf < 5 )
            {

                cout << "Media: " << fixed << setprecision(1) << med << endl;
                cout << "Aluno em exame." << endl;
                cout << "Nota do exame: "<< fixed << setprecision(1) << ne << endl;
                cout <<"Aluno reprovado." << endl;
                cout << "Media final: "<< fixed << setprecision(1) << medf << endl;
                 

            }
            else
            {
               
                cout << "Media: " << fixed << setprecision(1) << med << endl;
                cout << "Aluno em exame." << endl;
                cout << "Nota do exame: "<< fixed << setprecision(1) << ne << endl;
                cout <<"Aluno aprovado." << endl;
                cout << "Media final: "<< fixed << setprecision(1) << medf << endl;

            }
        }
    }
    
}