// reverse star with spaces
/* #include <stdio.h>
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

//pyramid pattern

#include <stdio.h>
int main(){
    int x=1, y, z;
    while("x<=4"){
        y=1;
        while(y=4-x){
            printf(" ");
            y++;
            z=1;
        }
        z=1;
        while(z<=2*x-1){
            printf("*");
            z++;
        }
        x++;
    } 
    return 0;
}


//number triangle

//incomplete
#include <stdio.h> 
int main(){
    int x=1, y;
    while(x<=5){
        y=1;
        while(y<x){
            printf("%d",y++);
            y++;
        }
    printf("\n");
    x++;    
    }
    return 0;
}*/




//factorial
#include <stdio.h>
int main(){
    int x=1,n, factorial=1;
    printf("enter the factorial to be calculated");
    scanf("%d",&n);
    while(x<=n){
        factorial=factorial*x;
        x++;
    } 
    printf("%d",factorial);
    return 0;
}