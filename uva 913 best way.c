#include <stdio.h>


int main()
{
     long long i,n,sum,s,l;
    while(scanf("%lld",&n)==1){
         l=(n-1)/2;
         s=(l*(3+n))/2l;

        sum=((s*2+1)+(s-1)*2+1+(s-2)*2+1);
        printf("%lld\n",sum);

    }
    return 0;
}

