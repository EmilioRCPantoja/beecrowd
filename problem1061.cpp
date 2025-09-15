#include<iostream>

using namespace std;

int main(){

    int h1, m1, s1, h2, m2, s2, d1, d2, dE, hE, mE, sE, comeco, final, total;
    string temp;

    cin >> temp >> d1;
    cin >> h1 >> temp >> m1 >> temp >> s1; 
    cin >> temp >> d2;
    cin >> h2 >> temp >> m2 >> temp >> s2;
    

    comeco = (d1 * 86400) + (h1 * 3600) +( m1 * 60) + s1;
    final = (d2 * 86400) + (h2 * 3600) + (m2 * 60) + s2;
    
    total = final - comeco;

    dE = total / 86400;
    total %= 86400;     
    hE = total / 3600;
    total %= 3600;
    mE = total / 60;
    sE = total % 60;

    cout << dE << " dia(s)" << endl << hE << " hora(s)" << endl; 
    cout << mE << " minuto(s)" << endl << sE << " segundo(s)" << endl;
    
}