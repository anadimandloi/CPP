#include<iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    int arr[num];
    
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    
    for(int i=1; i<num; i++){
        int current = arr[i];
        int j = i-1;
        

        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}