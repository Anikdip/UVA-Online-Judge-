#include<stdio.h>

int main ()
{
    int t,i,n,count,a,high;
    count=1;
    scanf("%d",&t);
    while(t--){
        high=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a);
            if(a>high)
               high=a;
        }
       printf("Case %d: %d\n",count,high);
       count++;
    }
    return 0;
}
