//root of polynomial eq by newton rapson method correct upto 3 decimal places
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x*x + x*x -1;
}

float findValueAt(float x)
{
    return 1/sqrt(1+x);
}
float differentiate(float x)
{
    return 1/2.0 * (pow(1,pow((1+x),3/2.0)));
}

int main(){
float a,b,x,x0;
    do {
        printf("Enter the value of a and b(starting boundary): ");  //0 & 1 for this one
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
    
    //find x0
    x0= (a+b)/2;
    //check if the function form used is valid or invalid
    if(fabs(differentiate(x0))<1)
        printf("Function Form is Correct. Iteration Method can be applied\n");
    else
    {
        printf("Function Form is NOT Correct. Iteration Method CAN'T be applied\n");
        return 0;
    }

    //Apply Successive approximation to find the root b/w a and b
    //..........Find root............   
    
    while(1)
    {
      x = findValueAt(x0);   //find the mid point
      
      if(fabs(x-x0)<.0001)
      {
           printf("Final Root=%f\n",x);
           return 0;
      }      
      printf("Roots=%f\n",x); 
      x0=x;
    }
    printf("Root=%f",x);

    return 0;
}