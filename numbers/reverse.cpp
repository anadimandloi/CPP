#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, reverse=0;
    cin>>num;
    while(num>0){
        int lastDigit = num%10;
        reverse = reverse * 10 + lastDigit;
        num = num/10;
    }
    
    cout<<reverse;

    return 0;
}
