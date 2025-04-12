#include<stdio.h>

int main(){
  double time, km, kmperh;
  double gas;
  scanf("%lf %lf", &time, &kmperh);
  km=kmperh*time;
  gas=km/12;
  printf("%0.3lf", gas);
  
}
