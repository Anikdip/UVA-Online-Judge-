#include<stdio.h>
int main()
{
    int a,b,i,j,m,n,x,y;
    char c;
    int  grid[10][10];

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            grid[i][j]=1;
        }
    }

    printf("enter the number of blocked cell : ");

    scanf("%d",&m);

    printf("enter the cell : ");
    for(i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        grid [a][b]=0;
    }

    printf("enter the initial position ");
    scanf("%d %d ",&x,&y);

    printf("give the direction : \n ");

    while(1){
        scanf("%c",&c);
        if(c=='s' ){
            break;
        }

        else if(c=='u'){
            x--;
            if(grid[x][y]==0){
                x++;
            }
        }
        else if(c=='d'){
            x++;
            if(grid[x][y]==0){
                x--;
            }
        }
        else if(c=='l'){
            y--;
            if(grid[x][y]==0){
                y++;
            }
        }
        else if(c=='r'){
            y++;
            if(grid[x][y]==0){
                y--;
            }
        }
    }
    printf("the final position of robot : %d %d",x,y);

    return 0;
}
