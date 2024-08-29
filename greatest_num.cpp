#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter the third number: ";
    cin>>z;
    if(x > y && x > z){
        cout<<"The largest number is: "<<x;
    }
    else if(y > x && y > z){
        cout<<"The largest number is: "<<y;
    }
    else{
        cout<<"The largest number is: "<<z;
    }
    return 0;
}