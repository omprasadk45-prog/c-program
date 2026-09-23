//for loop programs
/*#include <stdio.h>
int main(){
    int i;
    for(i=0;i<=10;i=i+1){
        printf("%d\n",i);
    }
return 0;
}*/


//* laddder
/*#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
// alphabet ladder


/*#include <stdio.h>
int main(){
    int i=1,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%c",'A'+ j); //i controls the letter j controls the number of times the lettr repeats
        }
        printf("\n");
    }
return 0;
}

// reverse pattern with spaces
#include <stdio.h>
int main(){
    int stars,spaces,rows=1;
    for(rows;rows<=5;rows++){
        for(spaces=1;spaces<=5-rows;spaces++){
            printf(" ");
        }
        for(stars=1;stars<=rows;stars++){
                printf("*");
            
        }
        printf("\n");
    }
    return 0;
}*/


