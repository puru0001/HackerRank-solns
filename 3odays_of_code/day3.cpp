#include<iostream>
using namespace std;
int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    if (N%2==0) 
    {
        if (2<=N<=5) {
        cout<<"Not Weird";
        }
        else if (6<=N<=20) {
        cout<<"Weird";
        }
        else if (N>20) {
        cout<<"Not Weird";
        }
    }
    if (N%2==1) {
        cout<<"Weird";
    }

    return 0;
}
