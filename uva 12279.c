#include<stdio.h>

int main()
{
    int n,a,due,given,cases;
    cases=0;
    while(scanf("%d",&n)==1){
            if(n==0)
            break;
            given=0;
            due=0;
        while(n--){
            scanf("%d",&a);
            if(a==0)
             given++;
            else if (a>0 && a<100)
            due++;
        }
        printf("Case %d: %d\n",++cases,due-given);
    }
    return 0;
}
