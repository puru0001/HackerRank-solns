#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
     char a,b[10],c[20];
     scanf("%c",&a);        //here we input a character. eg. h
     scanf("%s\n",&b);      //here we input a string.  eg. welcome
     scanf("%[^\n]s",&c);   //here we input a sentence eg. hello brother
     printf("%c",a);         
     printf("\n%s",b);
     printf("\n%s",c);
     return 0;
}

