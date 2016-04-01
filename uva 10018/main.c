#include<stdio.h>
#include<stdlib.h>
long long rev(long long x){
    long long y=0;
    while(1){
        y+=(x%10);
        x=x/10;
        if(x<=0)
          break;
        y=y*10;
    }

    return y;
}

int main()
{
    int t,count;
    long long a;
    scanf("%d",&t);
    while(t--){
        scanf("lld",&a);
        if(a==rev(a))
            printf("0 %lld\n",a);
        else{
                count=1;
            while(1){
                a=a+rev(a);
                if(a==rev(a)){
                printf("%d %lld\n",count,a);
                break;
                count++;
                }
            }
        }
    }
    return 0;
}
