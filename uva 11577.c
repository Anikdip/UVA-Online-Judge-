#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<memory.h>

int main()
{
    int alpha[26];
    char line[201];
    int i,len,t,max;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(line);
        len=strlen(line);
        memset(alpha,0,sizeof(alpha));

        for(i=0;i<len;i++){
            if(line[i]>='A'&& line[i]<='z')
                line[i]=tolower(line[i]);

            if(line[i]>='a'&&line[i]<='z')
            alpha[line[i]-97]++;
        }
        max=0;
        for(i=0;i<26;i++){
            if(alpha[i]>max)
                max=alpha[i];
        }

        for(i=0;i<26;i++){
            if(alpha[i]==max)
                printf("%c",i+97);

        }
        printf("\n");

    }
    return 0;
}
