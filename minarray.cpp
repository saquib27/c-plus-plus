#include<iostream>
#include <climits> 
using namespace std;
int main(){
    int size;
    cout<<"enter number of elements: ";
    cin>>size;


    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
       smallest=min(arr[i],smallest);
       largest=max(arr[i],largest);
        }
         cout<<"smallest value: "<<smallest<<endl;
           cout<<"largest value: "<<largest<<endl;
}
       
    
   