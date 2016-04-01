#include<stdio.h>
#include<math.h>

int main()
{
     long long a,c;
     double b;


    while(scanf("%lld",&a)==1){
        if(a==0)
        break;
    else{
        b=sqrt(a);
        c=(long long)(b);
        if(b==c)
           printf("yes\n");
        else
            printf("no\n");
    }
    }
    return 0;

}
