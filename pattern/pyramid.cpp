#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j>=4-i){
            
            cout<<"*";
            
            }
            else {
                cout<<" ";
            }

        }
        cout<<endl;
    }


    return 0;
}