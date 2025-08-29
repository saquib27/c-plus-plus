#include<iostream>
using namespace std;
int main(){
    int lines;
    cout<<"enter number of lines:  ";
    cin>>lines;
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=lines;j++){
        cout<<"*";
        }
        cout<<endl;
    }

}