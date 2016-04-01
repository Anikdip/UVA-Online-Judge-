#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
     char skew[35];
     int i,j,m,n,len,s;
     while(gets(skew)){
          m=0;
          n=1;
        if(skew[0]=='0')
            break;


        len=strlen(skew);

        for(i=0;i<len;i++){
                for(j=0;j<len-i;j++){
                    n=n*2;
                }
            s=(skew[i]-48)*(n-1);
            m+=s;

        }
        if(i>31)
            m=2147483647;
        printf("%d\n",m);


     }
     return 0;
}
