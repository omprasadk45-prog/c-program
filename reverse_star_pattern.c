#include <stdio.h>
int main(){
    int x, y, z;
    printf("enter the number of rows");
    scanf("%d",&z);
    while(x>=z){
        y=1;
        while(y<=x){
            printf("*");
            y++;
        }
        printf("\n");
        x--;
    }
    return 0;
}