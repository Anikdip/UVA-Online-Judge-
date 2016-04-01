#include <stdio.h>
#include<string.h>

int main()
{
     char line[105];
    int k,i,a,j,c,m,count;
    while(scanf("%d",&a)==1)
        {
         getchar();

            c=1;
        for(j=0;j<a;j++){
             gets(line);
            count=0;
            k=strlen(line);
            for(i=0;i<k;i++){



                m=0;
                m=line[i];
                if(m==32){
                    count+=1;
                    continue;
                }

                m=m-96;


                if(line[i]=='a'||line[i]=='b'||line[i]=='c'){
                    count+=m;
                }
                else if(line[i]=='d'||line[i]=='e'||line[i]=='f'){
                    m=m-3;
                    count+=m;
                }
                else if(line[i]=='g'||line[i]=='h'||line[i]=='i'){
                    m=m-6;
                    count+=m;
                }
                else if(line[i]=='j'||line[i]=='k'||line[i]=='l'){
                    m=m-9;
                    count+=m;
                }
                else if(line[i]=='m'||line[i]=='n'||line[i]=='o'){
                    m=m-12;
                    count+=m;
                }
                else if(line[i]=='p'||line[i]=='q'||line[i]=='r'||line[i]=='s'){
                    m=m-15;
                    count+=m;
                }
                else if(line[i]=='t'||line[i]=='u'||line[i]=='v'){
                    m=m-19;
                    count+=m;
                }
                else if(line[i]=='w'||line[i]=='x'||line[i]=='y'|| line[i]=='z'){
                    m=m-22;
                    count+=m;
                }

            }
            printf("Case #%d: %d\n",c,count);
            c++;

        }
    }
    return 0;
}


