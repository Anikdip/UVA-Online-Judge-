#include<stdio.h>

int main()
{

     long long a,i;
      long long ara[2100000];

    while(scanf("%lld",&a)==1){

            if(a>0)
             ara[a];
               ara[0]=1;
                ara[1]=2;
                if(a<0)
                   break;


             else if(a==0 || a==1)
            printf("%lld\n",a+1);


                else {
            for(i=2;i<=a;i++){
                    ara[i]=i+ara[i-1];

            }
            printf("%lld\n",ara[i-1]);
                }

    }
    return 0;
}
