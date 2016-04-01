#include<stdio.h>

int main()
{
    long long a,b,c,d,e,f;
    while(scanf("%lld%lld%lld",&a,&b,&c)){
        if(a==0&&b==0&&c==0)
            break;
        d=a*a;
        e=b*b;
        f=c*c;
        if((d+e)==f||(d+f)==e||(e+f)==d)
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
