#include <stdio.h>
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
}