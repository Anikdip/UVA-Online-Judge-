#include<stdio.h>

int main()
{
    int a,b,c,d,an2,an3,an4,angle;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4){
        if(a==0&&b==0&&c==0&&d==0)
            break;

        if(b>a)
        an2=(a+40-b);
        else
        an2=(a-b);

        if(c<b)
        an3=(c+40-b);
        else
        an3=(c-b);

        if(d>c)
        an4=(40-d+c);
        else
        an4=(c-d);

        angle=1080+(an2+an3+an4)*9;
        printf("%d\n",angle);
    }

    return 0;
}
