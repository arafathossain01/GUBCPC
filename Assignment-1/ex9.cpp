#include<iostream>
using namespace std;

int main()
{
    int D,N;
    float pi = 3.1416;
    cout<<"input: ";
    cin>>D>>N;

    float C = pi * D;
    float result = C*N;

    cout<<"Output: "<<result;
    return 0;
}