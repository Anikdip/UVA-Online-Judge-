#include<stdio.h>
#include<memory.h>

int main()
{
    int i,j,pn,day,count,t;
    scanf("%d",&t);
    while(t--){
         scanf("%d%d",&day,&pn);
         int ara[pn];
         for(i=0;i<pn;i++)
            scanf("%d",&ara[i]);
        int allday[day];
        memset(allday,0,sizeof(allday));
        for(i=0;i<pn;i++){
        	for(j=ara[i];j<=day;j+=ara[i]){
        		if(j%7!=0&&j%7!=6)
        		allday[j-1]=1;
			}
		}
		count=0;
        for(i=0;i<day;i++){
        	if(allday[i]==1)
        	count++;
		}



         printf("%d\n",count);
    }
    return 0;

}
