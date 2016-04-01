#include<stdio.h>

int main()
{
    int mem,bud,hotel,weeks,cost,bed,h,min;
    while(scanf("%d%d%d%d",&mem,&bud,&hotel,&weeks)==4){
        while(hotel--){
            scanf("%d",&cost);
            cost=cost*mem;
            h=0;
            while(weeks--){
                scanf("%d",&bed);
                if(bed>h)
                    h=bed;
            }
            min=100000;
            if(h>=mem){
            if(cost<=bud){
                if(cost<min)
                    min=cost;
            }
            }
        }
        if(min>bud)
            printf("stay home\n");
        else
            printf("%d\n",min);
    }
    return 0;
}
