#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter your character\t";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<" your character is lower case\n";
    }
        else if (ch>='A' && ch<='Z'){
            cout<<"your character is upper case\n";
        }
        else {
            cout<<"enter valid character\n";
        }
    return 0;
}