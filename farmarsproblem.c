#include<stdio.h>
int main()
{
    int i,j,a,b,area,animal,env;

    scanf("%d",&a);

    for(;a>0;a--){
        scanf("%d",&b);
           j=0;
        for(;b>0;b--){
            scanf("%d%d%d",&area,&animal,&env);

            i=area*env;
            j=j+i;

        }
        printf("%d\n",j);
    }

    return 0;
}
