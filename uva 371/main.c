#include<stdio.h>
#include<stdlib.h>
int main()
{

    long long m,n,count,output,a,k,p,l,r,i,g,s,t;
     while(scanf("%lld%lld",&m,&n)==2){
            if(m==0&&n==0)
               break;
           l=m;
           r=n;
           g=0;

           output=0;
           if(m>n){
                s=n;t=m;
           k=m;
           p=n;
           m=p;
           n=k;
         }
         else
         {s=m;t=n;}

          long long ara[n- m+1];
          k=m;
           for(i=0;m<=n;m++,i++){
             count=0;a=m;
              while(a>=1){
                 if(a%2==0)
                  a=a/2;

                   else
                  a=3*a+1;
                  count++;
               if(a==1)
                break;
             }
             ara[i]=count;
            if(count>output)
               output=count;

        }
        for(i=0;i<n-k+1;i++){
            if(ara[i]==output){
                g=(i+k);
                break;
            }
        }
           printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",s,t,g,output);
      }

        return 0;
}
