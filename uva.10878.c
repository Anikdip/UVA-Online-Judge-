#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,p,m,len;
    char ch,lock[25];
    char ara1[25],ara[25];
    gets(lock);
     for(i=0;i<11;i++){
        if(lock[i]=='_')
            n=1;
        else
            n=0;
     }
        j=0;
    while(n=1){
        gets(ara);
        len=strlen(ara);
        for(i=0;i<  11;i++){
        if(ara[i]=='_')
            n=0;
        else
            n=1;
     }
       if(n=1)
        break;
        for(i=len-1,m=0;i>=0;i--){
            if(ara[i]==' ')
                m=m+1;
          else if(ara[i]=='0'){
                m=m+1;
                p=pow(2,m);
                p=p+p;
          }





        }
        if(p==0)
            ch=46;
        ch=p;
        ara1[j]=ch;
        j=j+1;
    }
    puts(ara1);

    return 0;
}
