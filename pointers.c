/*#include <stdio.h>
int main(){
    int u=1;
    int v;
    int *pu;
    pu=&u;
    v=*pu;
    printf("*pu=%d",v);
    return 0;
}*/


//strings with pointer
/*#include <stdio.h>
int main(){
    char name[]="venkat";
    char *ptr;
    ptr=name;
    while(*ptr!='\0'){
        printf("%c\n",*ptr);
        ptr++;
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    char name[]="hello";
    char *ptr;
    int i=0;
    ptr=name;
    while(name[i]!='\0'){
        printf("%c",*(ptr+i));
        i++;
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    printf("enter the number of integers");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("no memory allocated");
        exit(1);//stops the program here so it dosent crash on next lines
    }
    for(i=0;i<n;i++){
        printf("enter an integer");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    int *ptr;
    printf("enter the number of numbers");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter the number-%d:",i+1);
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("the number-%d-is%d:\n",i+1,*(ptr+i));
    }
    return 0;
}*/





