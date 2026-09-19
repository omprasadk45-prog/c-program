#include <stdio.h>
int main(){
    int x=10, y, z;
    printf("enter the number of rows");
    scanf("%d",&z);
    x = z;
    while(x>=1){
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