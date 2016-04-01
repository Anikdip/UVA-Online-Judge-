#include<stdio.h>

int main()
{
    int t,i,egg,high,weight,w,sum,count,co;
    scanf("%d",&t);
    co=1;
    while(t--){
        scanf("%d%d%d",&egg,&high,&weight);
        count=0;
        sum=0;
        for(i=0;i<egg;i++){
            scanf("%d",&w);
            sum+=w;
            if(i<high){
              if(sum<=weight)
                count++;
            }

        }

        printf("Case %d: %d\n",co,count);
        co++;
    }
    return 0;
}

