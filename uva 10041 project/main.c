#include <stdio.h>
#include <stdlib.h>

int main()
{

    int road[501];
    int t,min,sum,dis,i,j,n;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&road[i]);
        }

        min=2147483647;
        for(i=0;i<n;i++){
                sum=0;
            for(j=0;j<n;j++){
                if(road[i]>=road[j])
                dis=road[i]-road[j];
                else
                dis=road[j]-road[i];
                sum+=dis;
            }

            if(sum<min)
                min=sum;

        }
        printf("%d\n",min);
    }
    return 0;
}
