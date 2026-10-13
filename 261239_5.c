#include <stdio.h>
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,0,6},
        {5,8,9}
    };
    int row,col;
    int rowHasZero[3]={0};
    int colHasZero[3]={0};

    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            if(matrix[row][col]==0){
                rowHasZero[row]=1;
                colHasZero[col]=1;
            }
        }
    }

    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            if(rowHasZero[row] || colHasZero[col]){
                matrix[row][col]=0;
            }
        }
    }

    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}