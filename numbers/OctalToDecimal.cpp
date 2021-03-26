
#include <iostream>
using namespace std;

int convertFromOctal(int num){
    int x = 1;
    int ans=0;
    while(num>0){
        int y = num%10;
        ans += x*y;
        x *= 8;
        num /= 10;
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<convertFromOctal(num);
    return 0;
}