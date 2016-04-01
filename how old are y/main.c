#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,count;
    int year,mc,dc,yc,y,d,m;
    char c1,h1,c,h;
    scanf("%d",&t);
    count=1;

    while(t--){
        printf("\n");
        scanf("%d%c%d%c%d",&dc,&c,&mc,&h,&yc);
        scanf("%d%c%d%c%d",&d,&c1,&m,&h1,&y);
        year=yc-y;

        if(mc<m &&year>0)
             year--;
        else if(mc==m && year>0&&dc<d)
                year--;
        else if(mc<m&& year==0)
               year--;
        else if(mc==m && dc<d && year==0)
               year--;

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
