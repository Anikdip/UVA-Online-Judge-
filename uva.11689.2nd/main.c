#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,m=0,n,i,count;
    while(scanf("%d",&a)==1){
        for(i=0;i<a;i++){
            scanf("%d%d%d",&b,&c,&d);
            count=0;
            n=0;

                m=(b+c)/d;
                count=m;
                m=m+(b+c)%d;

                while(m>=d){
                        n=m%d;
                    m=m/d;

                    count=count+m;
                     m=m+n;
                    if(m<d)
                        break;



                }

            printf("%d\n",count);
        }
    }
    return 0;
}
