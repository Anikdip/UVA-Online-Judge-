#include<stdio.h>
#include<string.h>

int main()
{
    int len,i,lock;
    char line[500];
    while(gets(line)){
        len=strlen(line);
        lock=0;
        for(i=0;i<len;i++){
            if(lock==0&&line[i]=='"'){
                printf("``");
                lock=1;
            }
            else if(lock==1&&line[i]=='"'){
                printf("''");
                lock=0;
            }
            else
                printf("%c",line[i]);
        }
        printf("\n");
    }
    return 0;
}
