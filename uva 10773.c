# include <stdio.h>
# include <math.h>
int main()
{
    int t,i;
    double min_time,min_dist,d,v,u,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
           if(v>=u)
           printf("Case %d: can't determine\n",i);
           else
           {
        min_time = d/u;
        min_dist = d/sqrt(u*u-v*v);

        if(min_dist==min_time )
        printf("Case %d: can't determine\n",i);
        else
        printf("Case %d: %.3lf\n",i, fabs(min_dist-min_time)+1e-12);
           }
    }
    return 0;

}

