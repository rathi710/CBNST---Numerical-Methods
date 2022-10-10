//root of polynomial eq by bisection method correct upto 3 decimal places
#include <stdio.h>
#include <math.h>


float f(float x){
    return x*x*x - 2*x - 5;
}

int main()
{
    float a,b,x,x2;
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
    while(fabs(x-a) > .0001 || fabs(x-b) > .0001)
    {
        if(f(x)*f(a) < 0){
            b = x;
        } 
        else a = x;

        x2 = (a+b)/2;
        x=x2;
        printf("%f\n",x);
        
    }
    printf("Root = %f",x);

    return 0;
}
