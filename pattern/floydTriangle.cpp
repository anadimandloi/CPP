#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int num,count=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            count++;
            cout<<count<<" ";
        }
    cout<<endl;
    }

    return 0;
}