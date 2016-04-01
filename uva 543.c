 #include <stdio.h>
 #include <math.h>
 #include<memory.h>
int size = 1000000;
char ara[1000000];

 void sieve()
 {
     long long i, root,k;
     memset(ara,'1',sizeof(ara));
     root = sqrt(size);
     for(i = 2; i <= root; i++) {
           k=i;
         if(ara[i] == 49) {
             for(k+=i;k<= size;k+=i) {
                 ara[k]=48;
             }
         }
     }
 }


 int main()
 {
    sieve();
    int i,j,a,lock;
    while(scanf("%d",&a)==1&&a){
            lock=1;
        for(i=3;i<=a/2;i+=2){
            if(ara[i]==49){
                j=a-i;
                if(ara[j]==49){
                printf("%d = %d + %d\n",a,i,j);
                lock=0;
                break;
                }
            }
            else
                continue;

        }
        if(lock)
            printf("Goldbach's conjecture is wrong.\n");
    }
     return 0;
 }

