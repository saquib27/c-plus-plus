#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter N\t";
    cin>>N;
    int sum=0;
    for(int i=0;i<=N;i++){
        sum=sum+i;
    }
    cout<<"sum\t"<<sum<<"\n";
}