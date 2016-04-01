#include<stdio.h>

int main()
{

    int i,n,hour,min;
     char ch;
        while(scanf("%d",&n)==1){
         for(i=0;i<n;i++){
            scanf("%d%c%d",&hour,&ch,&min);
         if(hour==12&&min==0){

            }
            else if(hour==12){
                hour=hour-1;
                if(min>0)
                min=60-min;

            }
           else{
          if(hour<=11){
            hour=12-hour;
         }


          if(hour<12){
            if(min>0){
                min=60-min;
               hour=hour-1;
            }
          }
          else{
            if(min>0){
                min=60-min;
            }

          }
           }

        if(hour==0)
        hour=12;

         if(hour<10)
            printf("0%d%c",hour,ch);

         else
         printf("%d%c",hour,ch);
         if(min<10)
            printf("0%d\n",min);
         else
            printf("%d\n",min);
         }

    }


    return 0;
}
