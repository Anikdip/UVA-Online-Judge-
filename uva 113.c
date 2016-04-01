#include<stdio.h>
#include<math.h>

int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)==2){
        printf("%.0lf\n",pow(b,(1/a)));
    }
    return 0;
}
