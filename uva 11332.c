#include<stdio.h>

int main()
{
    long long rem,n;
    while(scanf("%lld",&n)==1){
          if(n==0)
          break;
          rem=0;
        while(1){
             rem+=n%10;
             n=n/10;
             if(n==0&&rem>9){
                n=rem;
                rem=0;
             }
             if(n==0&&rem<10)
                break;

        }
        printf("%lld\n",rem);
    }
    return 0;
}
