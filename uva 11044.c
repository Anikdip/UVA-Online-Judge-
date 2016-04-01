#include<stdio.h>

int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        c=(a/3)*(b/3);
        printf("%d\n",c);

    }
    return 0;
}
