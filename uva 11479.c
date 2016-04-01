#include<stdio.h>

int main()
{
    long long a,b,c,t,count;
    scanf("%lld",&t);
    count=1;
    while(t--){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b<=c||a+c<=b||b+c<=a)
            printf("Case %lld: Invalid\n",count);
        else{
            if(a==b&&b==c)
            printf("Case %lld: Equilateral\n",count);
            else if(a!=b&&b!=c&&a!=c)
            printf("Case %lld: Scalene\n",count);
            else
                printf("Case %lld: Isosceles\n",count);


        }
        count++;
    }
    return 0;
}
