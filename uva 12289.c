#include<stdio.h>
#include<string.h>

int main()
{
    char ara[6];
    int len,i,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",ara);
        len=strlen(ara);
        if(len==5)
            printf("3\n");
        else {
            for(i=0;i<3;i++){
                if(ara[i]=='n'||ara[i]=='e'){
                    printf("1\n");
                    break;
                }
                else if(ara[i]=='t'||ara[i]=='w'){
                    printf("2\n");
                    break;
                }
            }
        }
    }
    return 0;
}
