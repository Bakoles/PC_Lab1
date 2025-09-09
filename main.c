#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x, F;
    scanf("%f%f%f%f", &a, &b, &c, &x);
    if(((c + b)< 0) && (a != 0)){
        F = (a * (cos(x)*cos(x)) + c)/((b*b) - x);
    }
    else if((c+b>0) && (a == 0)){
        F = (a*x - log(b)*x)/((b*b) - c*x);
    }
    else{
        F = (3 * sin(x)+ 4 * log(2) * x)/((a*a) + c + b*x);
    }
    printf("F = %f \nx = %f", F, x);
    return 0;
}
