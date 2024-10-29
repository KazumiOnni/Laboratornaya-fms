#include <stdio.h>

int main()
{
    int MaxN = 20; //дальше интегралы сходят с ума, и становяться отрицательными
    double E;
    scanf( "%lf", &E );
    
    double S = 0;
    double fraction;
    for (int i=1; i<=MaxN; i++) {
    
        long long factorial = 1;
        for (int j=2; j<=i; j++) 
            factorial *= j;
        
        fraction = 1.0 / factorial; // дробь
        S += fraction;
        
        if (fraction < E)
            break;
    }
    printf( "S = %f\n", S );
    

    return 0;
}