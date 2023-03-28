#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b;
    long int c,d;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    c=a+b;
    d=a-b;
    update(pa, pb);
    if(d>0)
    {
        d=d*(-1);
    }
    printf("%ld\n%ld", c, d*(-1));

    return 0;
}

