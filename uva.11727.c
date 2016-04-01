#include<stdio.h>
int main()
{
    long long a,b,c,count,i;
    int n;
    while(scanf("%d",&n)==1){
            count=1;
        for(i=0;i<n;i++){
            scanf("%lld %lld %lld",&a,&b,&c);
            if(a>b && a<c || a<b&& a>c)
                printf("Case %lld: %lld\n",count,a);
            else if(b>a&& b<c|| b>c && b<a)
                 printf("Case %lld: %lld\n",count,b);
            else if(c>a&&c<b||c>b&&c<a)
                 printf("Case %lld: %lld\n",count,c);

            count++;
        }
    }
    return 0;
}
