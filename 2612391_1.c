#include <stdio.h>
int main(){
    int nums[10]={0,2,2,4,6,3,0,9,2},x,temp,pass;
    for(pass=0;pass<10;pass++){
        for(x=0;x<9;x++){
            if(nums[x]==0 && nums[x+1]!=0){
                temp=nums[x];
                nums[x]=nums[x+1];
                nums[x+1]=temp;
            }
        }
    }
    for(x=0;x<10;x++){
        printf("%d",nums[x]);
    }
    return 0;
}