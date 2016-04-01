#include<stdio.h>

int main()
{
    int row,collum,i,count;
    while(scanf("%d%d",&row,&collum)==2){
        count=0;
        if(row==0&&collum==0)
            break;
        if(row==1 || collum==1)
        printf("%d knights may be placed on a %d row %d column board.\n",row*collum,row,collum);
        else if(row==2||collum==2){
            if(row<=collum){
               for(i=0;i<row;i++){
                  if(collum%2==1)
                 count+=collum/2+1;
                 else
                  count+=collum/2;
               }
            }
            else{
                for(i=0;i<collum;i++){
                    if(row%2==1)
                    count+=row/2+1;
                    else
                    count+=row/2;
                }
            }
            printf("%d knights may be placed on a %d row %d column board.\n",count,row,collum);
        }
        else{
            for(i=0;i<row;i++){
                if(i%2==0){
                if(collum%2==1)
                count+=collum/2+1;
                else
                    count+=collum/2;
                }
                else
                    count+=collum/2;
            }
             printf("%d knights may be placed on a %d row %d column board.\n",count,row,collum);
        }
    }
    return 0;
}
