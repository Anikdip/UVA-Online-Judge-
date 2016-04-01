#include<stdio.h>

int main()
{
    float h,u,d,f;
    float h2;
    int i;

   while(scanf("%f%f%f%f",&h,&u,&d,&f)==4){
         if(h==0)
            break;
   float p=(u*f)/100;
    h2=0;
    i=1;
    while(1){
        h2=h2+u;
        if(h2>h){
            printf("success on day %d\n",i);
            break;
        }


        u=u-p;
        if(u<0)
            u=0;
        h2=h2-d;
        if(h2<0){
            printf("failure on day %d\n",i);
            break;
        }

        i++;
    }
   }
   return 0;

}
