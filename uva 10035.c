#include<stdio.h>
#include<string.h>


int main()
{
    char a[12],b[12];
    int c,d,n,e;
    int m,count,high;

    while(1){
        scanf("%s",&a);
        scanf("%s",&b);
        if(strcmp(a,"0")==0&&strcmp(b,"0")==0)break;

         count=0;
         n=strlen(a);
         m=strlen(b);
         e=0;
         if(n>=m)
            high=n;
         else
            high=m;
        for(n=n-1,m=m-1;high>=0;n--,m--,high--){
                if(n>=0)
                e+=a[n]-48;
                if(m>=0)
                e+=b[m]-48;
            if(e>=10){
                e=1;
                count++;
            }
            else
                e=0;

        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
           printf("1 carry operation.\n");
         else
        printf("%d carry operations.\n",count);

    }
    return 0;
}
