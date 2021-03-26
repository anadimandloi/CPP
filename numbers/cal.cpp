#include <iostream>
using namespace std;


int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif

    int a,b;
    char symbol;
    cin>>a>>b;
    cin>>symbol;
    switch(symbol) {
        case '+': 
            cout<<a+b;
            break;
        case '-': 
            cout<<a-b;
            break;
        case '*': 
            cout<<a*b;
            break;
        case '/': 
            cout<<a/b;
            break;
        default: 
            cout<<"wrong symbol";
    }
    return 0;
}