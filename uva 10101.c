#include<stdio.h>
#include<string.h>

int main()
{
    long long a,t;
    int count=0;
    while(scanf("%lld",&a)==1){
     t=a;
        printf("%4d.",++count);
        if(a/100000000000000>0){
        printf(" %lld kuti",a/100000000000000);
        a=a%100000000000000;
        }
        if(a/1000000000000>0){
            printf(" %lld lakh",a/1000000000000);
            a=a%1000000000000;
        }
        if(a/10000000000>0){
            printf(" %lld hajar",a/10000000000);
            a=a%10000000000;
        }
        if(a/1000000000>0){
            printf(" %lld shata",a/1000000000);
            a=a%1000000000;
        }
        if(a/10000000==0&&t>10000000)
        printf(" kuti");
        if(a/10000000>0){
            printf(" %lld kuti",a/10000000);
            a=a%10000000;
        }
        if(a/100000>0){
            printf(" %lld lakh",a/100000);
            a=a%100000;
        }
        if(a/1000>0){
            printf(" %lld hajar",a/1000);
            a=a%1000;
        }
        if(a/100>0){
            printf(" %lld shata",a/100);
            a=a%100;

        }
        if(a>0)
            printf(" %lld",a);
            if(t==0)
            printf(" %lld",t);
        printf("\n");


        }

    return 0;



}
