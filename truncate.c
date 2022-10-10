#include <stdio.h>
#include <math.h>

void roundoff(float x, int s){
    int tmp = x*100000;
    int last = tmp%10;
    if(last>5){
        s+=1;
    }
    float ans = s;
    ans = ans/10000;
    printf("after rounding off:- ");
    printf("%.4f",ans);
}
int main(){
    float x = .76487123;
    
    int d = pow(10,4)*x;
    float z= d;
    z = z/10000;
    roundoff(x,d);
    printf("\n");
    printf("after truncating:- ");
    printf("%.4f", z);
}