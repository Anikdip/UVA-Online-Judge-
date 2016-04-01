#include<stdio.h>
#include<string.h>
 int main()
 {
     char ara[6];
     int t,b;
     int count,n;
     char c;
     scanf("%d",&t);
     getchar(c);
     count=0;
     while(t--){
         scanf("%s",ara);
        if(strcmp(ara,"donate")==0){
            scanf("%d",&n);
            count=count+n;
        }
        else if(strcmp(ara,"report")==0)
            printf("%d\n",count);

     }
     return 0;
 }
