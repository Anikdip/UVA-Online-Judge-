#include<stdio.h>
#include<math.h>

int main()
{
    long long a,i,count;
    while(1){
        scanf("%lld",&a);
        if(a==0)
            break;
        count=0;
        for(i=1;i<=a;i++){
            if(a%i==0)
                count++;
        }
        if(count%2==0)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}
