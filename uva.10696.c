#include<stdio.h>

int main()
{
	long a;
	while(scanf("%ld",&a)==1){
		if(a==0)
		break;
		else if(a<=100)
		printf("f91(%ld) = 91\n",a);
		else if(a>=101)
		printf("f91(%ld) = %ld\n",a,a-10);
	}
	return 0;
}
