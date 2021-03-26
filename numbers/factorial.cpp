#include <iostream>

using namespace std;

int fact(int num){
    
    if(num == 1){
        return 1;
    }else{
        return num * fact(num-1);

    }
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
    //cout<<num;

    return 0;
}
