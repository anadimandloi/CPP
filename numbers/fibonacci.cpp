#include <iostream>

using namespace std;

int fibo(int num){
    int a=0, b=1;
    int nextTerm;
    for(int i = 1; i<=num; i++){
        cout<<a<<endl;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}

int main()
{
    int num;
    cin>>num;
    fibo(num);
    //cout<<num;

    return 0;
}
