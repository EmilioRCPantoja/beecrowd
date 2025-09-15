#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
int i;
double salario, imposto = 0, decompsalar;

cin >> salario;
decompsalar = salario;

if(salario <= 2000){
    cout << "Isento" << endl;

}
else{
    if(decompsalar > 4500){
        imposto += (decompsalar - 4500) * 0.28;
        decompsalar = 4500;
    }
    
    if(decompsalar > 3000){
        imposto += (decompsalar - 3000) * 0.18;
        decompsalar = 3000;
    }

    if(decompsalar > 2000){
        imposto += (decompsalar - 2000) * 0.08;
    }

cout << "R$ "  << fixed << setprecision(2) << imposto << endl;
}
}

