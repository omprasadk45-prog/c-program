#include <stdio.h>
int main(){
    int rows,r,c,value,k;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(r=0;r<rows;r++){
        for(c=0;c<=r;c++){
            printf(" ");
            value=1;

            for(k=1;k<=c;k++){
                value = value*(r-k+1)/k;
            }
            printf("%d",value);
        }
    printf("\n");
    }
    return 0;
}