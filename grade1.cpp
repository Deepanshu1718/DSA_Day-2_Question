#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the score: ";
    cin>>x;
    if(x >= 90){
        cout<<"Grade: A";
    }
    else if(x < 90 && x >=80){
        cout<<"Grade: B";
    }
    else if(x < 80 && x >= 70){
        cout<<"Grade: C";
    }
    else if(x < 70 && x >= 60){
        cout<<"Grade: D";
    }
    else{
        cout<<"Grade: F";
    }
}
