#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{	
    int n,a,b,c,d,e,f;
    printf("Enter 5 digit number= ");
    scanf("%d", &n);
    a=n%10; 
	n=n/10;
    b=n%10; 
	n=n/10;
    c=n%10; 
	n=n/10;
    d=n%10; 
	n=n/10;
    e=n%10;
    printf("%d",a+b+c+d+e);
    return 0;
}
