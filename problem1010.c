#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char linestr1[]="12, 3, 4",linestr2[15];
    int codp1, nump1, codp2, nump2;
    double valuep1, valuep2;
    char *line1;
    char *line2;

    line1 = strtok(linestr1,",");
    line2 = strtok(linestr2, " ");


    printf("%s\n", line1);
    system("pause");
    
    return 0;

}