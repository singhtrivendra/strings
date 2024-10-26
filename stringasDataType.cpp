#include<iostream>
using namespace std;
int main(){
    // String as DataType
    string str = "Triva";
    cout<<str<<endl;
    cout<<str[0]<<endl;
    
    // Taking string as input
    // string s;t
    // cin>>s;
    // cout<<s<<endl;

    // we use getline if string as _SPACE
    string st;
    getline(cin,st);
    cout<<st;
}