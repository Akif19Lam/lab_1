#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout << "Before swapping"<<endl;;
    cout<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "After swapping"<<endl;
    cout<<a<<" "<<b<<endl;
}
