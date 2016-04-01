#include<stdio.h>
int main()
{

    int a,b,i,j,k,l,m,n,swapp;
    int ara[100];
    while(scanf("%d",&a)==1){
            for(i=0;i<a;i++){
        scanf("%d",&b);

        for(j=0;j<b;j++){
            scanf("%d",&ara[j]);
        }
        swapp=0;
        for(l=0;l<b;l++)
                for(k=0;k<b-1;k++)
                     if(ara[k]>ara[k+1]){

                     m=ara[k];
                    ara[k]=ara[k+1];
                    ara[k+1]=m;

                    swapp=swapp+1;
            }






        printf("Optimal train swapping takes %d swaps.\n",swapp);

    }
    }
    return 0;
}



