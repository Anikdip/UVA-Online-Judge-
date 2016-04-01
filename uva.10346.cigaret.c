#include<stdio.h>

int main()
{
    int a,b,m,n,count;
    while(scanf("%d%d",&a,&b)==2){
        count=0;
        n=0;
        m=a/b;
        count=a+m;
        m=m+a%b;
        while(m>=b){
            n=m%b;
            m=m/b;
            count=count+m;
            m=m+n;
        }
        printf("%d\n",count);
    }
    return 0;
}
