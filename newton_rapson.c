//root of polynomial eq by newton rapson method correct upto 3 decimal places
#include <stdio.h>
#include <math.h>

float f(float x){
    return x*x*x - 3*x - 5;
}

float diff(float x){
    return 3*x*x - 3;
}

int main(){
    float a,b,x,xn;
    do {
        printf("Enter the value of a and b(starting boundary): ");  //2 & 3 for this one
        scanf("%f %f",&a,&b);
        if(f(a)*f(b) > 0)
        {
           printf("Roots are Invalid\n");
           continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n",a,b);
            break;

        }
    } while(1);

    x = (a+b)/2;
    while(1){
        printf("%f\n",x);
        xn = x - (f(x)/diff(x));

        if(fabs(xn-x) < .00001){
            printf("Root=%f",xn);
            return 0;
        }
        x = xn;
    }
    return 0;
}
