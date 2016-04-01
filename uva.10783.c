#include<stdio.h>
int main()
{
    int a,b,c,i,p,count,m;
    while(scanf("%d",&a)==1){

           count=1;
        for(i=0;i<a;i++){
                m=0;
             scanf("%d%d",&b,&c);

             for(p=b;p<=c;p++){
            if(p%2==1)
            m=m+p;
        }
        printf("Case %d: %d\n",count,m);
        count++;

        }
    }

    return 0;

}
