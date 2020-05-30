#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;


int main()
{
    float a, b, c, r1, r2, x;

    scanf("%5f", &a);
    scanf("%5f", &b);
    scanf("%5f", &c);

    x = b*b - 4*a*c;
    if(x > 0 && a != 0){
        x = sqrt(x);
        r1 = (-b+x)/(2*a);
        r2 = (-b-x)/(2*a);

        printf("R1 = %.5f ", r1);
        cout<<endl;
        printf("R2 = %.5f ", r2);

    }
    else{
        printf("Impossivel calcular");


    }
return 0;
}
