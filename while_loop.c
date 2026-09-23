// reverse star with spaces
/* #include <stdio.h>
int main(){
    int x=1, y, z;
    while(x<=5){
        y=1;
        z=1;
        while(z <= 5 - x){ //spaces loop(5-1),(5-2)......
            printf(" ");
            z++;
        }
        while(y <= x){        
            printf("*");
            y++;
            }
        printf("\n");
        x++;
    }
    return 0;
}

//pyramid pattern

#include <stdio.h>
int main(){
    int x=1, y, z;
    while("x<=4"){
        y=1;
        while(y=4-x){
            printf(" ");
            y++;
            z=1;
        }
        z=1;
        while(z<=2*x-1){
            printf("*");
            z++;
        }
        x++;
    } 
    return 0;
}


//number triangle

//incomplete
#include <stdio.h> 
int main(){
    int x=1, y;
    while(x<=5){
        y=1;
        while(y<x){
            printf("%d",y++);
            y++;
        }
    printf("\n");
    x++;    
    }
    return 0;
}




//factorial
#include <stdio.h>
int main(){
    int x=1,n, factorial=1;
    printf("enter the factorial to be calculated");
    scanf("%d",&n);
    while(x<=n){
        factorial=factorial*x;
        x++;
    } 
    printf("%d",factorial);
    return 0;
}

//alphabet ladder
#include <stdio.h>
int main(){
    int x = 1,y;
    char ch;
    while(x<=5){
        y=1;
        ch= 'a';// this declaration gives a ab abc.....
        while(y<=x){
            printf("%c",ch);
            y++;
            ch++;
        }
        printf("\n");
        x++;
    }
    return 0;
}


// alphabet ladder 2
#include <stdio.h>
int main(){
    int x = 1,y;
    char ch='a'; //this declaration gives a bc def...
    while(x<=5){
        y=1;
        while(y<=x){
            printf("%c",ch);
            y++;
            ch++;
        }
        printf("\n");
        x++;
    }
    return 0;
}*/

//fibonacci sequence
/*// incomplete
#include <stdio.h>
int main(){
    int x=0,n,y=1;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("0\n");
    while(x==0){
    printf("%d\n",++x);
    x++;
        while(y<=n){
            printf("%n",x+y);
            y++;
        }
    }
return 0;
}


// palindrome number(number same when it is reversed)
#include <stdio.h>
int main(){
    int n,rev=0,rem,temp;
    printf("enter the number ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        printf("it is a palindrome");
        }
    else{
        printf("it is not a palindrome");
        }
    return 0;
}

//reversing a number
#include <stdio.h>
int main(){
    int original,rem,rev=0;
    printf("enter the original number");
    scanf("%d",&original);
    while(original!=0){
        rem=original%10;
        rev=rev*10+rem;
        original=original/10;
    }
    printf("the reversed number is %d",rev);
    return 0;
}*/

//prime number

//prime number logic is:-if any number between 2-(n-1)divides n then its not prime

/*#include <stdio.h>
int main(){
    int num,i,isprime=1;
    printf("enter the number to check; ");
    scanf("%d",&num);
    if(num<=1){
        isprime=0;
    }
    else{
        i=2;    //start checking from 2
        while(i*i<=num-1){
            if (num%i==0){
                isprime=0;
                break;
        }
            i++;
    }
    if(isprime==0) //0 means got he divisor 
        printf("it is not a prime number");
    
    else // 1 means still prime
        printf("it is a prime number");
    }
return 0;    
}*/

// prime number logic 2 (INCORRECT LOGIC)
/*#include <stdio.h>
int main(){
    int num,i;
    printf("enter the number to be checked");
    scanf("%d",&num);
    if(num<=1)
        printf("it is neither prime nor composite");
    else{
        i=2;
        while(i<num){
            if(num%i!=0)
                printf("it is a prime number");
                break;
        i++;
        }
    if(i==num)
        printf("prime number");
    }
return 0;
}*/



//problems
//a)
/*#include <stdio.h>
int main(){
    int j;
    while(j<=10){
        printf("\n%d",j);
        j++;
    }
    return 0;
}*/

//b)
/*#include <stdio.h>
int main(){
    int x=1;
    while(x==1){
        x--;
        printf("\n%d",x);
    }
return 0;
}


//alphabet ladder

#include <stdio.h>
int main(){
    int i=0,j;
    while(i<5){
        j=0;
        while(j<=i){
            printf("%c",'A'+i);  //i gives one row one alphabet
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}*/

// armstrong number
/*#include <stdio.h>
int main(){
    int sum=0,rem,num,temp;
    printf("enter the number to be verfied");
    scanf("%d",&num);
    temp=num;
    while(num>=1){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==temp){
        printf("it is a armstraong number");
}
else{
    printf("it is not a armstrong number");
}
    return 0;
    }
*/

#include <stdio.h>
