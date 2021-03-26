#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<num; i++){
        int current = 0;
        for(int j=i; j<num; j++){
            current += arr[j];
            cout<<current<<" ";
        }
    }
    return 0;
}
