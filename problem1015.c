#include<stdio.h>
#include<math.h>

int main(){
    double x1x2, y1y2, dist;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &x2);

    dist = sqrt(pow((x2-x1), 2));//+(pow((y2-y1), 2)));

    printf("%0.4lf\n", dist);
}