/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "bits/stdc++.h"

using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int pd = arr[1]-arr[0];
    int j = 2;
    int ans = 2;
    int current = 2;
    
    while(j<num){
        if(pd == arr[j]-arr[j-1]){
            current++;
            
        }
        else {
            pd = arr[j] - arr[j-1];
            current = 2;
        }
        ans = max(ans,current);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
