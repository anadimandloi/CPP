#include <iostream>

using namespace std;

int fact(int num){
    
    if(num == 1 || num == 0){
        return 1;
    }else{
        return num * fact(num-1);

    }
}

int main()
{
    int n,answer;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            answer = fact(j)*fact(i-j);
            cout<<fact(i)/answer<<" ";

        }
        cout<<endl;
    }

    //cout<<num;

    return 0;
}