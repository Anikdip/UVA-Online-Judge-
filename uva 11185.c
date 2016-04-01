#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,j;
    int ara[100];
    while(scanf("%d",&n)==1){
        if(n<0)
        break;
        if(n==0)
            printf("0");
         i=0;
        while(n>0){
            ara[i]=n%3;
            i++;
            n=n/3;
        }

        for(j=i-1;j>=0;j--){
            printf("%d",ara[j]);
        }
        printf("\n");
    }
    return 0;

}
