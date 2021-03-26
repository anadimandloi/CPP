
#include <iostream>

using namespace std;

int binarySearch( int arr[], int num, int key){
    int s=0;
    int e= num;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return -1;
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
    cout<<binarySearch(arr,num,key);
    
    return 0;
}