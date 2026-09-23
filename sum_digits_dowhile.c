#include <stdio.h>
int main(){
   int num=1234 ,sum=0,rem;
   do{
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    } while(num>0);
printf("the sum of the digits: %d",sum);
return 0;
}