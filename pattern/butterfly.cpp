#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int num;
    cin>>num;
    for(int i=1; i<=num;i++){
        for(int j=1;j<=2*num;j++){
            if(j<=i || j>2*num-i){
                cout<<"*";
            }else {
                cout<<" ";
            }

        }
        cout<<endl;

        }
    for(int i=num;i>0;i--){
        for(int j=1; j<=2*num;j++){
           if(j<=i || j>2*num-i){
                cout<<"*";
           }else {
               cout<<" ";
           }
        }
        cout<<endl;

    }
    



    return 0;
}