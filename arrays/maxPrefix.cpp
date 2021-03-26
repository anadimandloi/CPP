#include<iostream>
using namespace std;

int main() {
    
    int num,i=0, index;
    cin>>num;
    int arr[num], max = -1999999;
    
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    cout<<"index ";
    cin>>index;
    
    while(i<=index){
        if(arr[i]>max){
            max = arr[i];
        }
    cout<<max<<" ";

        i++;
    }
    
    
    
    
    return 0;
}