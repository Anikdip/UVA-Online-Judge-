#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sort(const void *a,const void *b)
{
    int *c,*d;
    c=(int*)a;
    d=(int*)b;
    return (*c-*d);
}

int main()
{
    long long i=0,arr[10010],n,m;
    while(scanf("%lld",&arr[i])==1)
    {
        qsort((void*)arr,i+1,sizeof(long long),sort);
        if(i%2==0)
        {
            n=ceil(i/2);
            printf("%lld\n",arr[n]);
        }
        else if(i%2!=0)
        {
            n=i/2;
            m=(arr[n]+arr[n+1])/2;
            printf("%lld\n",m);
        }
        i++;
    }
    return 0;
}
