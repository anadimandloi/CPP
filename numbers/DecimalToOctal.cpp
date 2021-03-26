
#include <bits/stdc++.h>

using namespace std;


int decimalToOctal(int num){
    int x=1, ans=0;
    while(x<=num){
        x*=8;
    }
    x/=8;


    while(x>0){
        int lastDigit = num/x;
        num -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;

    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<decimalToOctal(num);
    return 0;
}