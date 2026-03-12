#include<iostream>
#include<iomanip>

using namespace std;

struct Media
{
    double nt1 = 0, nt2 = 0, nt3 = 0;
    double mp;

    Media(double n1, double n2, double n3){
        nt1 = n1 * 2;
        nt2 = n2 * 3;
        nt3 = n3 * 5;

        mp = (nt1 + nt2 + nt3)/10;
    }

   
};


int main(){
    int sc;

    cin >> sc;

    double medias[sc];

    cout << fixed << setprecision(1);

    for(int i = 0; i < sc; i++){

        double n1 = 0, n2 = 0 , n3 = 0;

        cin >> n1;
        cin >> n2;
        cin >> n3;

        Media media(n1, n2, n3);

        medias[i] = media.mp;
    }

    for(int i = 0; i < sc; i++){
        cout << medias[i] << endl;
    }
}