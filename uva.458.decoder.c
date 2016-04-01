#include<stdio.h>
#include<string.h>

int main()
{
    char ara[1000];
    int i,m,l;

    while( gets(ara)){

          l=strlen(ara);

                for(i=0;i<l;i++){
                m=ara[i];
                m=m-7;
                ara[i]=m;
                printf("%c",ara[i]);
    }
  printf("\n");

    }

    return 0;
}
