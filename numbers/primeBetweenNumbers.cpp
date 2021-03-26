#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    bool flag = 0;
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i;
        }
    }
   

    return 0;
}