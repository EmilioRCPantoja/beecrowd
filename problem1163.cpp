#include<iostream>
#include<cmath>
#include <iomanip>


using namespace std;

int main(){
    double h;
    int p1, p2, n;

    while (cin >> h >> p1 >> p2 >> n){

        for(int i = 0; i < n; i++){
            double v, a;

            cin >> a >> v;

            double vy = v * sin(a * (3.14159/180));
            
            double vx = v * cos(a * (3.14159/180));
        
            double t = (vy + sqrt(vy*vy + 2 * 9.80665*h))/9.80665;
        
            double res = vx * t;

            if(p1 < res && p2 >res){
                cout << fixed << setprecision(5) << res <<" -> DUCK"<<endl;
            }
            else{
                cout << fixed << setprecision(5) << res <<" -> NUCK"<<endl;
            }
        }
    }

}