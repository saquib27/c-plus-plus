#include<iostream>
using namespace std;

int sum(int number){
    int digitsum=0;

    while(number>0){
        int lastdigit=number%10;
        number=number/10;

        digitsum=digitsum+lastdigit;
    }
    return digitsum;
}
int main(){
    int number;
    cout<<"enter your number"<<endl;
    cin>>number;

    cout<<"sum of digit: "<<sum(number);
    cout<<endl;
}