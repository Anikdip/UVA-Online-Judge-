#include<stdio.h>
#include<string.h>

int main()
{
    int t,count,total_count,len,i;
    char a[100];
    scanf("%d",&t);
    while(t--)
    {
        total_count=0;
        count,
        scanf("%s",a);
        len=strlen(a);
        count=0;
        for(i=0;i<len;i++)
        {
            if(a[i]=='O'){
                count++;
                total_count+=count;
            }
            else{
                count=0;
            }
        }
        printf("%d\n",total_count);
    }
    return 0;
}
