#include <stdio.h>
#include <math.h>
int main()
{
    int num,ans,i;
    int kase=0;
    while(scanf("%d",&num)==1)
    {

    if(num<0)
    break;
    else
        {

            for(i=0;i<num;i++)
            {
            if(pow(2,i)>=num)
              {
               ans=i;
               break;
               }
            }
                kase++;
        printf("Case %d: %d\n",kase,ans);

        }
    }

}
