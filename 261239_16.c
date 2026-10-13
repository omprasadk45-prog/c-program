#include <stdio.h>
int main(){
    int array[10]={1,2,2,3,3,3,4,4,4,4};
    int i,j,count;
    int highestFrequency=0;
    int lowestFrequency=10;

    for(i=0;i<10;i++){
        int alreadyCounted=0;

        for(j=0;j<i;j++){
            if(array[i]==array[j]){
                alreadyCounted=1;
                break;
            }
        }

        if(alreadyCounted){
            continue;
        }

        count=0;
        for(j=0;j<10;j++){
            if(array[i]==array[j]){
                count++;
            }
        }

        if(count>highestFrequency){
            highestFrequency=count;
        }
        if(count<lowestFrequency){
            lowestFrequency=count;
        }
    }

    printf("Sum of highest and lowest frequencies: %d\n",
           highestFrequency+lowestFrequency);
    return 0;
}