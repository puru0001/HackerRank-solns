#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h>
int main() 
{
	char s[100];
	scanf("%[^\n]%*c", &s);  //here we input a sentence eg. welcome to c language.
    printf("Hello, World!\n");
    printf("%s",s);return 0;
}

