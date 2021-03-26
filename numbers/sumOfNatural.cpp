#include <iostream>

using namespace std;

int sumOfN(int num){
    
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n,answer;
    cin>>n;

    cout<<sumOfN(n);
    //cout<<num;

    return 0;
}