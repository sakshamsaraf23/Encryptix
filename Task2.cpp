#include<iostream>
using namespace std;
int main(){
    int a,b;//integer input
//arithmetic input    
    char c;
    //Input of two numbers
    cout<<"Enter the first no.:";
    cin>>a;
    cout<<"Enter the second no.:";
    cin>>b;
    //Input of arithmetic operation
    cout<<"Enter the arithmetic operation You want to perform: ";
    cin>>c;
    if(c=='+'){
        cout<<"The Sum is:"<<a+b;//Sum
    }
    else if(c=='-'){
        cout<<"The Difference is:"<<a-b;//Difference
    }
    else if(c=='*'){
        cout<<"The Multiplication is:"<<a*b;//Multiplication
    }
    else if(c=='/'){
        cout<<"The Quotient is:"<<a/b;//Quotient
    }
    else if(c=='%'){
        cout<<"The Remainder is:"<<a%b;//Remainder
    }
    else{
        cout<<"Please enter a valid opertion";
    }
    return 0;
}