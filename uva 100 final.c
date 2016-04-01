#include<stdio.h>
int main()
{

    int m,n,count,output,a,b,k,p;
while(scanf("%d%d",&m,&n)==2)
{
printf("%d %d",m,n);
output=0;
if(m>n){
      k=m;
      p=n;
      m=p;
      n=k;
}

for(;m<=n;m++){
count=1;a=m;
while(a!=1){
if(a%2==0)
a=a/2;

else
a=3*a+1;
count++;
}
if(count>output)
output=count;
}
printf(" %d\n",output);
}

return 0;
}

