#include<stdio.h>

int main()
{
    int n,k,p,count,a,t;
    scanf("%d",&t);
    count=1;
    while(t--){
        scanf("%d%d%d",&n,&k,&p);
        a=k+p;
        while(1){
         if(a>n)
           a=a-n;
          if(a<=n)
            break;
        }
        printf("Case %d: %d\n",count,a);
        count++;
    }
    return 0;
}
