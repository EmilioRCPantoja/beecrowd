#include<iostream>
#include<iomanip>


using namespace std;


int main(){
    double Tcb = 0, Tco = 0, Tr = 0, Ts = 0, Pco = 0, Pr = 0, Ps = 0;
    char spc;
    int num = 0, n = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;

        Tcb += num;

        cin >> spc;
        
        if(spc == 'C' || spc == 'c' )
            Tco += num;

        else if(spc == 'R' || spc == 'r')
            Tr += num;
        
        else if(spc == 'S' || spc == 's')
            Ts += num;
        
    }

    Pco = (100*Tco)/Tcb;
    Pr = (100*Tr)/Tcb;
    Ps = (100*Ts)/Tcb;

    cout << "Total: "<< Tcb << " cobaias"<<endl;
    cout << "Total de coelhos: " << Tco << endl;
    cout << "Total de ratos: " << Tr << endl;
    cout << "Total de sapos: " << Ts << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) <<  Pco  << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << Pr << " %"<< endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << Ps <<  " %" << endl;

}