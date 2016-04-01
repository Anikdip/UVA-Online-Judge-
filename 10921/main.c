#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{


     int i,len;
    char num[35];
    while(gets(num)){
        len=strlen(num);

        for(i=0;i<len;i++){
               if(num[i]=='A'||num[i]=='B'||num[i]=='C'){
                    num[i]='2';
                    printf("%c",num[i]);}
          else if(num[i]=='D'||num[i]=='E'||num[i]=='F'){
                    num[i]='3';
                    printf("%c",num[i]);}
          else if(num[i]=='G'||num[i]=='H'||num[i]=='I'){
                    num[i]='4';
                     printf("%c",num[i]);}
          else if(num[i]=='J'||num[i]=='K'||num[i]=='L'){
                    num[i]='5';
                     printf("%c",num[i]);}
          else if(num[i]=='M'||num[i]=='N'||num[i]=='O'){
                    num[i]='6';
                     printf("%c",num[i]);}
          else if(num[i]=='P'||num[i]=='Q'||num[i]=='R'||num[i]=='S'){
                    num[i]='7';
                     printf("%c",num[i]);}
          else if(num[i]=='T'||num[i]=='U'||num[i]=='V'){
                    num[i]='8';
                     printf("%c",num[i]);}
          else if(num[i]=='W'||num[i]=='X'||num[i]=='Y'||num[i]=='Z'){
                    num[i]='9';
                     printf("%c",num[i]);}
                    else
                        printf("%c",num[i]);
        }
        printf("\n");

    }
    return 0;
}
