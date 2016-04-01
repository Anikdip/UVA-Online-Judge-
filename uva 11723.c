#include<stdio.h>

int main()
{
    int r,n,count,cases;
    cases=1;
    while(scanf("%d%d",&r,&n)==2){
        if(r==0&&n==0)
        break;
        else if(r<=n){
            printf("Case %d: 0\n",cases);
            cases++;
        }
        else if(r>(n*26+n)){
            printf("Case %d: impossible\n",cases);
            cases++;
        }
        else if(r>n){
            count=0;
               r=r-n;
            while(1){
                r=r-n;
                count++;
                if(r<n){
                 if(r>0){
                 count++;
                 }
                 break;
            }
            }

        printf("Case %d: %d\n",cases,count);
        cases++;
    }
    }
    return 0;
}
