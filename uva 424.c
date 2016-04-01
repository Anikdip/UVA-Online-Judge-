#include<stdio.h>
#include<string.h>
#include<memory.h>


int main()
{
    char ara[120];
    int sum[220];
    int rem,k,sumlen,length,len,lock=1,lock2=0,i,num;
    memset(sum,0,sizeof(sum));
    while(1){
        scanf("%s",ara);
        if(strcmp(ara,"0")==0)
            break;

        len=strlen(ara)-1;
        if(lock){
            sumlen=len;
            lock=0;
        }
        if(len<sumlen)
            length=sumlen;
        else
            length=len;
        k=length;
        rem=0;
        for(;length>=0;len--,sumlen--,length--){
            if(len<0)
                num=sum[length]+rem;
            else if(sumlen<0)
                num=ara[length]-48+rem;
            else
                num=ara[len]-48+sum[sumlen]+rem;
            if(num>9){
               sum[length+1]=num%10;
               rem=1;
            }
            else{
                sum[length+1]=num;
                rem=0;

            }
            if(length==0&&rem==1){
                sum[length]=1;
                lock2=1;
            }
            else if(length==0&&rem==0){
                for(i=0;i<=k;i++)
                    sum[i]=sum[i+1];
                sum[k+1]=0;
                lock2=0;
            }

        }
        if(lock2)
            sumlen=k+1;
        else
            sumlen=k;


    }
    for(i=0;i<=sumlen;i++)
        printf("%d",sum[i]);
        printf("\n");
    return 0;


}
