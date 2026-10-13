#include <stdio.h>
int main(){
    int nums[6]={2,3,4,5,6,7},x,temp;
    for(x=0;x<6;x++){
        if(nums[x+1]>nums[x]){
            temp=nums[x];
            nums[x]=nums[x+1];
            nums[x+1]=temp;
        }
    printf("%d",nums[x]);
    }
    return 0;
}