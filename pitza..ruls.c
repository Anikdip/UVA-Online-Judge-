#include<stdio.h>
int main()
{
    long long a,b;

    while(scanf("%lld",&a)==1){
            if(a<0)
            break;
        b=(a*a+a+2)/2;
        printf("%lld\n",b);
    }
        return 0;
}
