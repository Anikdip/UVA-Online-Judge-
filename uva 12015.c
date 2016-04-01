#include<stdio.h>
#include<string.h>

struct web
{
    char name[150];
    int rank;
};
int main()
{
    struct web ara[10];
    int t,i,count,high;
    scanf("%d",&t);
    count=1;
    while(t--){
            high=-10;
        for(i=0;i<10;i++){
            scanf("%s",&ara[i].name);
            scanf("%d",&ara[i].rank);
            if(ara[i].rank>high)
                high=ara[i].rank;
        }
        printf("Case #%d:\n",count);
        count++;
        for(i=0;i<10;i++){
            if(ara[i].rank==high){
                printf("%s\n",ara[i].name);
            }
        }
    }
    return 0;
}
