#include<stdio.h>

int main()
{
    float min,hour,angle,a,b;
    char ch;

    while(scanf("%f",&hour)==1){
        getchar();
        scanf("%f",&min);
            if(hour==0&&min==00)
            break;
        a=(30)*(hour);
        b=(5.5)*(min);
        if(a>=b){
            angle=a-b;

        }
        else{
            angle=b-a;

        }
        if(angle>180)
            angle=360-angle;

        printf("%0.3f\n",angle);
    }
    return 0;
}
