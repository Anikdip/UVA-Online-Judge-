#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

int main()
{
    int i,n,p,l,lock;
    int ara[3003];
    int a[3005];
   while(scanf("%d",&n)==1){
        l=1;
        lock=0;
    memset(ara,0,sizeof(ara));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(lock){
            p=abs(a[i]-a[i-1]);

            if(p>0&&p<n){
                if(ara[p]==1){
                   printf("Not jolly\n");
                   l=0;
                break;
                }
                else
                ara[p]=1;
            }
            else{
                printf("Not jolly\n");
                l=0;
                break;
            }
        }
        lock=1;
    }
    if(l)
        printf("Jolly\n");

   }
   return 0;
}
