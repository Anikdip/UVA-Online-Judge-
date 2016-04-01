#include<stdio.h>
#include<string.h>

int main()
{
    char in[14];
    int n=1;

    while(scanf("%s",in)==1){

         if(strcmp(in,"#")==0)
            break;
         else if(strcmp(in,"HELLO")==0)
            printf("Case %d: ENGLISH\n",n);
         else if(strcmp(in,"HOLA")==0)
            printf("Case %d: SPANISH\n",n);
         else if(strcmp(in,"HALLO")==0)
            printf("Case %d: GERMAN\n",n);
         else if(strcmp(in,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",n);
        else if(strcmp(in,"CIAO")==0)
            printf("Case %d: ITALIAN\n",n);
         else if(strcmp(in,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",n);
         else
            printf("Case %d: UNKNOWN\n",n);

        n++;
    }
    return 0;
}
