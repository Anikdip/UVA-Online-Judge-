#include<stdio.h>
#include<string.h>


int main()
{
    int i,len;
    char num[35];
    while(gets(num)){
        len=strlen(num);
        char decode[len];
        for(i=0;i<len;i++){
          if(num[i]=='-')
             decode[i]='-';
          else if(num[i]=='1')
                    decode[i]='1';
          else if(num[i]=='A'||num[i]=='B'||num[i]=='C')
                    decode[i]='2';
          else if(num[i]=='D'||num[i]=='E'||num[i]=='F')
                    decode[i]='3';
          else if(num[i]=='G'||num[i]=='H'||num[i]=='I')
                    decode[i]='4';
          else if(num[i]=='J'||num[i]=='K'||num[i]=='L')
                    decode[i]='5';
          else if(num[i]=='M'||num[i]=='N'||num[i]=='O')
                    decode[i]='6';
          else if(num[i]=='P'||num[i]=='Q'||num[i]=='R'||num[i]=='S')
                    decode[i]='7';
          else if(num[i]=='T'||num[i]=='U'||num[i]=='V')
                    decode[i]='8';
          else if(num[i]=='W'||num[i]=='X'||num[i]=='Y'||num[i]=='Z')
                    decode[i]='9';
        }
        puts(decode);
    }
    return 0;
}
