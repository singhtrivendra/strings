#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdef";
    cout<<s.substr(1,3)<<endl;  // where 1 is idx and 3 is len  if len==0 take complete string
     cout<<s.substr(3)<<endl;

// reverse the second half
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int n = str.size();
    cout<<str.substr(n/2);
}