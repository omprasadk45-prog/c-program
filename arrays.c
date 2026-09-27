/*#include <stdio.h>
int main(){
    int iarray[5] = {0,1,2,3,4},x,n;
    n=sizeof(iarray)/sizeof(iarray[0]);
    for(x=0;x<n;x++){
        printf("%d\n",iarray[x]);
    }
    return 0;
}*/

#include <stdio.h>
int main(){
    int nums[10]={0,0,3,4,5,2,5,8,3,7},x,n,temp,last=0;
    for(x=0;x<10;x++){
        if(nums[x]==0){
            temp=nums[x];
            nums[x]=nums[9-x];
            nums[9-x]=temp;
        }
        printf("%d",nums[x]);
    }
    return 0;
}