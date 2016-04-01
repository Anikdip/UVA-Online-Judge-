#include<stdio.h>
#include<string.h>

int main()
{
    char line[500];
    int len,i;
    while(gets(line)){
        len=strlen(line);
        int count=0;
        for(i=0;i<len;i++){

            if(((line[i]>='a'&&line[i]<='z')
               ||(line[i]>='A'&&line[i]<='Z'))
               &&((line[i+1]>'z'||line[i+1]<'a')&&
                  (line[i+1]>'Z'||line[i+1]<'A'))){
                    count++;
                  }


            }

         printf("%d\n",count);
        }


    return 0;
}
