#include<iostream>
using namespace std;

int main() {

    int num=5;
    //cin>>num;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num-i; j++){
            cout<<"  ";
        }
        for(int k=i; k>=1; k--){
            cout<<"*"<<" ";
        }
        for(int l=2; l<=i;l++){
            cout<<"*"<<" ";
        }
    cout<<endl;
    }
    
    for (int i=num; i>=1; i--){
        
        for(int j=1; j<=num-i; j++){
            cout<<"  ";
        }
        for(int k=i; k>=1; k--){
            cout<<"*"<<" ";
        }
        for(int l=2; l<=i;l++){
            cout<<"*"<<" ";
        }
    cout<<endl;
        
    }
    return 0;
}