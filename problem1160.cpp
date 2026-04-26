

#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, y = 0;
    cin >> t;

    int pa, pb;
    double g1, g2;

    for (int i = 0; i < t; i++)
    {
        cin >> pa >> pb >> g1 >> g2;
        y = 0;
        do
        {
            pa = ((g1 / 100) * pa) + pa;
            pb = ((g2 / 100) * pb) + pb;
            y++;

            if (y > 100)
            {   
                cout << "Mais de 1 seculo." << endl;
                break;
            }
            
        } while (pa <= pb);

        
        if (y <= 100)
        {
            cout << y << " anos." << endl;
        }
        }

}

