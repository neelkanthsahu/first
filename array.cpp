#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        cout<<"Enter values";
        cin>>arr[i];
    }
     for(int i=0; i<10; i++){
        cout<<arr[i];
    }
    cout<<"this is new line";


    return 0;
}