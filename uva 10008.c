#include<stdio.h>
#include<string.h>
#include<memory.h>

int main()
{
    char line[500];
    int alpha[26];
    int alpha2[26];
    int alpha3[26];
    int i,high,k,p,t,len,j;
    memset(alpha,0,sizeof(alpha));
    memset(alpha2,0,sizeof(alpha2));
    memset(alpha3,0,sizeof(alpha3));
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(line);
        len=strlen(line);
        for(i=0;i<len;i++){
            if(line[i]>='A'&& line[i]<='Z')
            alpha[line[i]-65]++;

            else if(line[i]>='a'&&line[i]<='z')
            alpha[line[i]-97]++;
        }
    }


    for(i=0;i<26;i++){

        high=0;
        for(j=0;j<26;j++){
        if(alpha[j]>high){
            high=alpha[j];
            alpha2[i]=high;
            alpha3[i]=j;
            p=j;
        }
        }
       alpha[p]=0;
    }



    for(i=0;i<26;i++){
        if(alpha2[i]>0){
            printf("%c %d\n",65+alpha3[i],alpha2[i]);
        }
        else
            break;
    }
    return 0;
}
