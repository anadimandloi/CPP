
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num+1];
    arr[num] = -1;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    
    if(num==1){
        cout<<"1";
        return 0;
    }
    
    int ans = 0;
    int mx = -1;
    
    for(int i=0; i<num; i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    
    cout<<ans<<endl;
    return 0;
}