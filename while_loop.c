#include <stdio.h>
int main(){
    int x=1, y, z;
    while(x<=5){
        y=1;
        z=1;
        while(z <= 5 - x){ //spaces loop(5-1),(5-2)......
            printf(" ");
            z++;
        }
        while(y <= x){        
            printf("*");
            y++;
            }
        printf("\n");
        x++;
    }
    return 0;
}