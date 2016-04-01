#include<stdio.h>


int main()
{
    int t,term1,term2,finall,att;
    float sum,num;
    int i,j,h,s,high,count;
    float a1,a2,a3;
    scanf("%d",&t);
    count=1;
    while(t--){
    scanf("%d%d%d%d%f%f%f",&term1,&term2,&finall,&att,&a1,&a2,&a3);
    sum=0;
   if(a1>a2)
   {
   	sum+=a1;
   	if(a2>a3)
   		sum+=a2;
   	else
   		sum+=a3;
   }
   else if(a2>a3)
   {
   	 sum+=a2;
   	 if(a1>a3)
   	 sum+=a1;
   	 else
   	 sum+=a3;
   }
   else
   {
   	sum+=a3;
   	if(a1>a2)
   	sum+=a1;
   	else
   	sum+=a2;
   }

sum/=2.0;

     num=term1+term2+finall+att+sum;

      if(num>=90&&num<101)
        printf("Case %d: A\n",count);
     else if(num>=80&&num<90)
        printf("Case %d: B\n",count);
     else if(num>=70&&num<80)
        printf("Case %d: C\n",count);
     else if(num>=60&&num<70)
        printf("Case %d: D\n",count);
     else if(num<60)
        printf("Case %d: F\n",count);

       count++;
    }

    return 0;


}
