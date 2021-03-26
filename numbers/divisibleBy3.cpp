#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "a",stdout);
    #endif

    int a,b,i,n;
    cin>>a>>b;
    
    while(a<=b){
        n=a;
        a++;

        for(i=2;i<n;i++) {
            if(n%i==0){
                break;
            }
        
        }
       if(i==n){
            cout<<n<<endl;
        }        
    }
    return 0;
}