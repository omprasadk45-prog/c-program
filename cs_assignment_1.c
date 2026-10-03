//1)
/*
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
*/

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
//9)pascals triangle
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
}

//4) 
#include <stdio.h>
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rotated[3][3],row,col;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            rotated[col][2-row]=matrix[row][col];
        }   
    }
    printf("rotated 90 deg\n");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d",rotated[row][col]);
        }
        printf("\n");
    }
    return 0;
}*/

//5)
/*#include <stdio.h>
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,0,6},
        {5,8,9}
    };
    int row,col;
    int rowHasZero[3]={0};
    int colHasZero[3]={0};

    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            if(matrix[row][col]==0){
                rowHasZero[row]=1;
                colHasZero[col]=1;
            }
        }
    }

    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            if(rowHasZero[row] || colHasZero[col]){
                matrix[row][col]=0;
            }
        }
    }

    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}*/

//16)

/*#include <stdio.h>
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
}*/

//15)
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