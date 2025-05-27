#include <stdio.h>

int main(){
  int value2, value, i;
  
  scanf("%d", &value);
  for (i=0; value>=100; value-=100){
    i++;
  }
  printf("%d", i);

  value2= value-i ;
  printf("%d", value2);
  
}
