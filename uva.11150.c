#include<stdio.h>

int main()
{
    int a;
  while(scanf("%d",&a)==1){
    if(a%2==1){
        printf("%d\n",a+(a-1)/2);
    }
    else{
        printf("%d\n",a+a/2);
    }
  }

    return 0;
}
