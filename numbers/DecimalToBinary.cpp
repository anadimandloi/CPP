
#include <bits/stdc++.h>

using namespace std;


int decimalToBinary(int num){
    int x=1, ans=0;
    while(x<=num){
        x*=2;
    }
    x/=2;


    while(x>0){
        int lastDigit = num/x;
        num -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;

    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<decimalToBinary(num);
    return 0;
}
