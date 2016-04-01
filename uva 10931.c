#include<stdio.h>


int main()
{
    int num;
    int ara[32];
    int i,j;
    while(1){
        scanf("%d",&num);
        if(num==0)
            break;
            int count=0;
            i=0;
        while(num>0){

            if(num%2==0)
                ara[i]=0;
            else
                ara[i]=1;
            if(ara[i]==1)
                count++;
            i++;

            num=num/2;
        }

        printf("The parity of ");
        for(j=i;j>=0;j--)
            printf("%d",ara[j]);
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
