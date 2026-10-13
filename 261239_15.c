#include <stdio.h>

int main(){
    int nums[]={100,4,200,1,3,2};
    int n=sizeof(nums)/sizeof(nums[0]);
    int i,j;
    int longestLength=0;

    for(i=0;i<n;i++){
        int hasPrevious=0;
        int currentLength=1;
        long long nextValue=(long long)nums[i]+1;

        for(j=0;j<n;j++){
            if((long long)nums[j]==(long long)nums[i]-1){
                hasPrevious=1;
                break;
            }
        }

        if(hasPrevious){
            continue;
        }

        while(1){
            int found=0;

            for(j=0;j<n;j++){
                if((long long)nums[j]==nextValue){
                    found=1;
                    break;
                }
            }

            if(!found){
                break;
            }

            currentLength++;
            nextValue++;
        }

        if(currentLength>longestLength){
            longestLength=currentLength;
        }
    }

    printf("Longest consecutive sequence length: %d\n",longestLength);
    return 0;
}