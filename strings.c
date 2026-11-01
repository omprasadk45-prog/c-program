//printing a string(depends on length)
/*#include <stdio.h>
int main(){
    char mystring[]="mike";
    int i=0;
    while(i<4){
        printf("%c",mystring[i]);
        i++;
    }
    return 0;
}*/

//printing a string(not depending on length)(most general)
/*#include <stdio.h>
int main(){
    char mystring[]="mike";
    int i=0;
    while(mystring[i]!=0){
        printf("%c",mystring[i]);
        i++;
    }
    return 0;
}*/

//printing using %s
/*#include <stdio.h>
int main(){
    char name[25];
    printf("enter the name\n");
    scanf("%s",&name);
    printf("hello %s!",name);
    return 0;
}*/


/*#include <stdio.h>
int main(){
    char name[25];
    printf("hello\n");
    gets(name);
    puts("hello!");
    puts(name);
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>
int main(){
    char str[]="simbu";
    int len1;
    len1=strlen(str);
    printf("the length of %s is %d",str,len1);
    return 0;
}*/

/*#include <stdio.h>
#include <strings.h>
int main(){
    char str1[]="jerry";
    char str2[]="ferry";
    int i,j,k;

    i=strcmp(str1,"gerry");
    printf("%d",i);
    return 0;

}*/
/*
#include <stdio.h>
#include<strings.h>
int main(){
    char name[25];
    printf("enter the player name\n");
    scanf("%s",name);
    if(strcmp(name,"messi")==0){
        printf("goat");
    }
    else{
        printf("gain some knowledge bro");
    }
return 0;
}*/
/*
#include <stdio.h>
int main(){
    char name[25];
    char a;
    printf("enter the name below");
    gets(name);
    puts(name);
}*/


//sting reversal
/*#include <stdio.h>
#include <strings.h>
int main(){
    char name[]="messi";
    printf("the reversed word is\n%s",strrev(name));
    return 0;
}*/
/*#include <stdio.h>
int main(){
    char c[]="A";
    printf("%c",c[0]);
    return 0;
}
#include <stdio.h>

int main(void) {
    char c[2] = "A";
    printf("\n%c", c[0]);
    printf("\n%s", c);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    char s[]="get organised and learn c";
    printf("%s",&s[2]);
    return 0;
    
}*/
//string to integer using loop
/*#include <stdio.h>
int main(){
    char str[]="123";
    int i,num=0;
    for(i=0;str[i]!='\0';i++){
            num=num*10+(str[i]-'0');
    }
    printf("%d",num+2);
    return 0;
}*/
// best way of getting input!
/*#include <stdio.h>
#include <strings.h>
int main(){
    char str[50];
    printf("enter the word");
    fgets(str,sizeof(str),stdin);
    printf("\nUPPERCASE=%s",strupr(str));
    return 0;
}*/

//removing the extra spaces

/*#include <stdio.h>
int main(){
   char input[100];
   char output[100];
   int i=0;
   int j=0;
   printf("enter the word\n");
   fgets(input,sizeof(input),stdin);
   while(input[i]!='\0'){
    output[j]=input[i];
    j++;
    if(input[i]==' '){
        while(input[i+1]==' '){
            i++;
        }
    }
    i++;
   }
   output[j]='\0';
   printf("Modified string\n%s",output);
   return 0;
}*/

#include <stdio.h>
int main(){
    char str[]="HELLO";
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]+32);
        i++;
    }
    return 0;
}