#include<stdio.h>
int main()
{
    int n,i,c;
    freopen("in.txt","r",stdin);
    while(scanf("%d",&n)&&n)
    {
        c=0;
        while(n>=3)
        {
            i=n/3;
            c=c+i;
            n=n%3+i;
        }
        if(n==2)
            c++;
        printf("%d\n",c);
    }
    return 0;
}
