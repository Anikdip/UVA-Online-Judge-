#include<stdio.h>
#include<string.h>
#include<memory.h>

int main()
{
    int up[26],low[26];
    char line[300];
    int i,high,len;
    while(gets(line)){
         memset(up,0,sizeof(up));
         memset(low,0,sizeof(low));
         len=strlen(line);
         for(i=0;i<len;i++){
         if(line[i]<='a'&&line[i]>='z')
            low[(line[i])-97]++;

         else if(line[i]<='A'&&line[i]>='Z')
            up[(line[i])-65]++;

         }
         high=0;
       for(i=0;i<26;i++){
        if(up[i]>high)
            high=up[i];
        if(low[i]>high)
          high=low[i];
       }
       for(i=0;i<26;i++){
         if(up[i]==high)
          printf("%c",i+65);
        if(low[i]==high)
          printf("%c",i+97);
       }
       printf(" %d\n",high);
    }
    return 0;
}
