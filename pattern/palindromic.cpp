#include<iostream>
using namespace std;

int main() {

    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num-i; j++){
            cout<<"  ";
        }
        for(int k=i; k>=1; k--){
            cout<<k<<" ";
        }
        for(int l=2; l<=i;l++){
            cout<<l<<" ";
        }
    cout<<endl;
    }
    return 0;
}