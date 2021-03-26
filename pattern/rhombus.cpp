#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int num;
    cin>>num;
    for(int i=num; i>=1; i--){
        for(int j=1; j<i; j++){

            cout<<" ";
        }
        for(int j=num;j>=1;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
    



    return 0;
}