#include<stdio.h>
#include<math.h>
int main()
{
       int h1,h2,m1,m2,h,m;
       while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
      {
            if(h1==0 && m1==0 && h2==0 && m2==0) break;
            else
               {
                h=h2-h1;
                m=m2-m1;
                if(m<0)
                  {
                    m=m+60;
                    h=h-1;
                   }
                if(h<0)
                 h=h+24;
               }
            printf("%d\n",h*60+m);
             }
        return 0;
}
