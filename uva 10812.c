#include<stdio.h>

int main()
{
    int n,a,b,x,y;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&a,&b);
        if(b>a||(a+b)%2==1)
            printf("impossible\n");
        else {
            x=(a+b)/2;
            y=a-x;
            printf("%d %d\n",x,y);
        }
    }
    return 0;
}
