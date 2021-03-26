#include <bits/stdc++.h>

using namespace std;
string decimalToHexadecimal(int num){
    int x=1;
    string ans="";
    while(x<num){
        x*=16;
    }
    x/=16;
    while(x>0){
        int lastDigit = num/x;
        num -= lastDigit*x;
        x/=16;
        if(lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit -10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    cout<<decimalToHexadecimal(num);
    return 0;
}