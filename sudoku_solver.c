#include<stdio.h>
#include<stdlib.h>
void print(int arr[9][9]){

    for (int i = 0; i < 9; i++){
     for (int j = 0; j < 9; j++){
        printf("|%d|",arr[i][j]);
        }
        printf("\n");
    }
}
int issafe(int grid[9][9],int row,int col,int num){
    for(int i=0;i<9;i++)
        if(grid[i][col] == num) return 0;
    for(int i=0;i<9;i++)
        if(grid[row][i] == num) return 0;
    int srow=row-row%3,scol=col-col%3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i+srow][j+scol] == num)
                return 0;
    return 1;
}
int solve(int grid[9][9],int row,int col){
    if(row == 8 && col == 9)
        return 1;
    if(col == 9){
        row += 1;
        col = 0;
    }
    if(grid[row][col] > 0){
        return solve(grid,row,col+1);
    }
    for(int i=1;i<10;i++){
        if(issafe(grid,row,col,i)) {
            grid[row][col] = i;
            if(solve(grid,row,col+1)) return 1;
        }
        grid[row][col] = 0;
    }
    return 0;
}
int main()
{
    int grid[9][9]= { 
    { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
    { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
    { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
    { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
    { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
    { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
    { 0, 0, 5, 2, 0, 6, 3, 0, 0 }
    };
    if (solve(grid, 0, 0))
        print(grid);
    else
        printf("Can't find solution");
    return 0;
}