#include <stdio.h>
#include <math.h>
int main()
{
    double x1, x2, y1, y2;
    while( scanf("%lf %lf", &x1, &y1) == 2 ){
        scanf(" %lf %lf", &x2, &y2 );
        double distance;
        distance = pow( (x1-x2) , 2) + pow( (y1-y2) , 2);
        distance = sqrt( distance );
        printf("%.4lf\n", distance);
    }
    return 0;
}
