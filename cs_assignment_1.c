//1)
/*#include <stdio.h>
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
}*/

//2)
/*#include <stdio.h>
int main(){
    int array1[]={1,2,3,3,5,6,2,23,9},array2[]={3,2,6,3,2,7,3,8},x,y,result[20]={0},k;
    int n1=9,n2=8,count=0;
    int used1[9]={0}, used2[8]={0};
    for(x=0;x<n1;x++){
        if(used1[x]) continue;
        for(y=0;y<n2;y++){
            if(used2[y]) 
                continue;
            if(array1[x]==array2[y]){
                result[count]=array1[x];
                count++;
                used1[x]=1;
                used2[y]=1;
                break;
            }
        }
    }
    for(k=0;k<count;k++){
        printf("%d\n",result[k]);
    }
    return 0;
}*/

/*//3)
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
}*/

//4)
/*#include <stdio.h>
int main(){
    int matrix[2][2],x,y,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(x=0;x<4;x++){
        printf("enter the element %d",x+1);
        scanf("%d",&matrix[x]);
    }
    for(y=0;y<=4;y++){
        printf("%d",matrix[y]);
    }
    return 0;

}
//8)pascals triangle
#include <stdio.h>
int main(){
    int rows,r,c,value,k;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(r=0;r<rows;r++){
        for(c=0;c<=r;c++){
            printf(" ");
            value=1;

            for(k=1;k<=c;k++){
                value = value*(r-k+1)/k;
            }
            printf("%d",value);
        }
    printf("\n");
    }
    return 0;
}*/

