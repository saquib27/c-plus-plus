#include<iostream>
using namespace std;
int main(){
    int lines;
    cout<<"enter number of lines:  ";
    cin>>lines;
    int number=1;
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=lines;j++){
            cout<<number<<"\t";
            number=number+1;
           
        }
         cout<<endl;
    }
}