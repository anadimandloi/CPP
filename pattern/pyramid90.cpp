#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}