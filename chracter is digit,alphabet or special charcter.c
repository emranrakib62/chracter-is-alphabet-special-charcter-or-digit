#include<stdio.h>
int main()
{
    char ch;
    printf("enter the chracter :");
    scanf("%c",&ch);
    if(ch>=65&& ch<=90|| ch>=97&& ch<=122){
        printf("this is an alphabet");
    }
    else if(ch>=48&&ch<=57){

        printf("this is digit");
    }else{
    printf("this is special character");
    }
    return 0;
}

