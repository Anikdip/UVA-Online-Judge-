#include<stdio.h>
#include<string.h>

int main()
{
    int lock,n,i,j,len1,len2,count;
    char line1[1000000],line2[1000000];
    while(scanf("%s%s",line1,line2)==2){
        len1=strlen(line1);
        len2=strlen(line2);
        for(i=0,j=0,n=0;i<len1;){
                if(j==len2)
                break;
            if(line1[i]==line2[j]){
                i++;
                j++;
                n++;
            }
            else
                j++;
        }
        if(n==len1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

