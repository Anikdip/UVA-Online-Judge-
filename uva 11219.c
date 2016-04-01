#include<stdio.h>


int main()
{
    int t,count;
    int year,mc,dc,yc,y,d,m;
    char c1,c2,c3,c4;
    scanf("%d",&t);
    count=1;

    while(t--){

        scanf("%d%c%d%c%d",&dc,&c1,&mc,&c2,&yc);
        scanf( "%d%c%d%c%d",&d,&c3,&m,&c4,&y);
        year=(yc-y);

        if(mc<m)
             year--;
        else if(mc==m){
                if(dc<d)
                 year--;
        }


        if(year<0)
            printf("Case #%d: Invalid birth date\n",count);
        else if (year>130)
            printf("Case #%d: Check birth date\n",count);
        else
            printf("Case #%d: %d\n",count,year);



        count++;
    }
    return 0;

}
