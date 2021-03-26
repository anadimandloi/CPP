#include<iostream>
 
using namespace std;
 
string reverse(string str)
{
    int i = str.length() - 1;
    int start, end = i + 1;
    string temp = "";
     
    while(i >= 0)
    {
        if(str[i] == ' ')
        {
            start = i + 1;
            while(start != end)
                temp += str[start++];
             
            temp += ' ';
             
            end = i;
        }
        i--;
    }
    start = 0;
    while(start != end)
        temp += str[start++];
     
    return temp;
}
 
int main()
{
    string str;
    cin>>str;
     
    cout << reverse(str);
     
    return 0;
}