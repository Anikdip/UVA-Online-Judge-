#include<stdio.h>

int main()
{
    float result;
    int count,i,t,n,sum,av;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ara[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        count=0;
        av=sum/n;
        for(i=0;i<n;i++){
            if(ara[i]>av)
                count++;
        }
        result=((float)(count)/(float)(n));
        printf("%0.3f%%\n",result*100);

    }
    return 0;
}
