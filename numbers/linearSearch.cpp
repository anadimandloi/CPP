#include <iostream>

using namespace std;

int linearSearch(int arr[], int num, int key ){
    
    for(int i=0;i<num;i++){
        if(key==arr[i]){
            return i+1;
        }
        else if(key!=arr[i] && i==num-1){
            return -1;
        }
    }
    
}

int main()
{
    int num,key;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<linearSearch(arr,num,key);
    
    return 0;
}
