#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b;
    int c,d;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    c=a+b;
    d=a-b;
    update(pa, pb);
    if(d>0)
    {
        d=d*(-1);
    }
    d=d*(-1);
    cout<<c<<"\n"<<d;
    return 0;
}

