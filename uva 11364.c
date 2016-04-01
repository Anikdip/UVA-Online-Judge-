#include<stdio.h>

int main()
{
    int i,t,n,a,low,high;
    scanf("%d",&t);
    while(t--){
        low=100;
        high=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a);
            if(a>high)
            high=a;
            if(a<low)
            low=a;
        }
        printf("%d\n",(high-low)*2);

    }
    return 0;
}
