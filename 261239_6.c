#include <stdio.h>
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rotated[3][3],row,col;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            rotated[col][2-row]=matrix[row][col];
        }   
    }
    printf("rotated 90 deg\n");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d",rotated[row][col]);
        }
        printf("\n");
    }
    return 0;
}