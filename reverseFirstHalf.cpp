#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    // string s;
        // getline(cin,s);
    // reverse first half
    // int len = s.size();
    // reverse(s.begin(),s.begin()+len/2);
        // cout<<s;
    string str = "raghav";
    reverse(str.begin()+1,str.begin()+5);
    cout<<str;
}