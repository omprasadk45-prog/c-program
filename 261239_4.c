#include <stdio.h>
int main(){
    int matrix[2][2],x,y,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(x=0;x<4;x++){
        printf("enter the element %d",x+1);
        scanf("%d",&matrix[x]);
    }
    for(y=0;y<=4;y++){
        printf("%d",matrix[y]);
    }
    return 0;

}