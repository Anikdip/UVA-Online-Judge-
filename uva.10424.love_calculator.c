#include<stdio.h>
#include<string.h>

int main()
{
    char ara1[30],ara2[30];
    int v,m,n,i,p,rem,rem2;
    float love;
    char z='%';

    while(gets(ara1)){
            gets(ara2);
            m=0;
            n=0;

        for(i=0;i<strlen(ara1);i++){
            if(ara1[i]>='a' && ara1[i]<='z'){
                m=ara1[i];
                m=m-96;

                n+=m;
            }
            else if(ara1[i]>='A' && ara1[i]<='Z'){
                m=ara1[i];
                m=m-66;

                n+=m;
            }

        }
        p=0;
        v=0;
        for(i=0;i<strlen(ara2);i++){
            if(ara2[i]>='a' && ara2[i]<='z'){
                v=ara2[i];
                v=v-96;

                p+=v;
            }
            else if(ara2[i]>='A'&& ara2[i]<='Z'){
                v=ara2[i];
                v=v-66;

                p+=v;
            }


        }
        rem=0;
        while(1){
            rem+=(n%10);
            n=n/10;
            if(n==0 && rem/10==0)
                break;
            else if (n==0){
                n=rem;
                rem=0;
            }

        }
        rem2=0;
          while(1){
            rem2+=(p%10);
            p=p/10;
            if(p==0 && rem2/10==0)
                break;
            else if (p==0){
                p=rem2;
                rem2=0;
            }

        }
        if(rem>rem2){
           love=(float)(rem2)/(float)(rem);
           printf("%0.2f %c\n",love*100,z);
        }
        else{
             love=(float)(rem)/(float)(rem2);
           printf("%0.2f %c\n",love*100,z);
        }
    }

    return 0;
}
