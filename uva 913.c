#include <stdio.h>


int main()
{
     long long i,n,sum,s;
    while(scanf("%lld",&n)==1){
            s=0;
         for(i=3;i<=n;i+=2){
            s+=i;
         }

        sum=((s*2+1)+(s-1)*2+1+(s-2)*2+1);
        printf("%lld\n",sum);



    }
    return 0;
}
