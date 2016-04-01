#include<stdio.h>
#include<string.h>

int main()
{
    char line[500];
    int i,len;

    while(gets(line)){
        len=strlen(line);
        for(i=0;i<len;i++){
            if(line[i]=='/'){
                line[i]='.';
            }
            else if(line[i]==' ')
                line[i]=' ';
            else if(line[i]=='\\')
                line[i]=']';

            else if(line[i]=='.')
                line[i]=',';
             else if(line[i]==',')
                line[i]='M';
              else if(line[i]=='M')
                line[i]='N';
               else if(line[i]=='N')
                line[i]='B';
                 else if(line[i]=='B')
                line[i]='V';
                 else if(line[i]=='v')
                line[i]='c';
                 else if(line[i]=='C')
                line[i]='X';
                 else if(line[i]=='X')
                line[i]='Z';
                 else if(line[i]=='\'')
                line[i]=';';
                else if(line[i]==';')
                line[i]='L';
                else if(line[i]=='L')
                line[i]='K';
                else if(line[i]=='K')
                line[i]='J';
                else if(line[i]=='J')
                line[i]='H';
                else if(line[i]=='H')
                line[i]='G';
                else if(line[i]=='G')
                line[i]='F';

                else if(line[i]=='F')
                line[i]='D';
                else if(line[i]=='D')
                line[i]='S';
                else if(line[i]=='S')
                line[i]='A';
                else if(line[i]==']')
                line[i]='[';
                else if(line[i]=='[')
                line[i]='P';
                else if(line[i]=='P')
                line[i]='O';
                else if(line[i]=='O')
                line[i]='I';
                else if(line[i]=='I')
                line[i]='U';
                else if(line[i]=='U')
                line[i]='Y';
                else if(line[i]=='Y')
                line[i]='T';
                else if(line[i]=='T')
                line[i]='R';
                else if(line[i]=='R')
                line[i]='E';
                else if(line[i]=='E')
                line[i]='W';
                else if(line[i]=='W')
                line[i]='Q';
                else if(line[i]=='=')
                line[i]='-';
                else if(line[i]=='-')
                line[i]='0';
                else if(line[i]=='0')
                line[i]='9';
                else if(line[i]=='9')
                line[i]='8';
                else if(line[i]=='8')
                line[i]='7';
                else if(line[i]=='7')
                line[i]='6';
                else if(line[i]=='6')
                line[i]='5';
                else if(line[i]=='5')
                line[i]='4';
                else if(line[i]=='4')
                line[i]='3';
                else if(line[i]=='3')
                line[i]='2';
                else if(line[i]=='2')
                line[i]='1';
                else if(line[i]=='1')
                line[i]='`';


        }
        for(i=0;i<len;i++)
        printf("%c",line[i]);
        printf("\n");

    }
    return 0;
}
