#include<stdio.h>												//4 4 4 4|4 4 4
#include<conio.h>												//4 3 3 3|3 3 4
int main()														//4 3 2 2|2 3 4
{																//4 3 2 1|2 3 4
																//- - - - - - -
	int n,i,j,k;												//4 3 2 2|2 3 4
	printf("Enter thre limit = ");								//4 3 3 3|3 3 4
	scanf("%d",&n);												//4 4 4 4|4 4 4
	for(i=n;i>=1;i--){
		for(j=n;j>i;j--)										//2| 4 4 4 4
			printf("%d ",j);									//1| 4\3 3 3
		for(k=1;k<=i;k++)										//1| 4 3\2 2
			printf("%d ",i);									//1| 4 3 2\1
		printf("%\n");
	}
	
	return 0;
}
