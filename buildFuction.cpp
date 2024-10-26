#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Trivendra Singh";
    // cout<<str.size()<<endl;
    // str.push_back(' ');
    // str.push_back('Y');
    // cout<<str;
    // cout<<endl;
    // str.pop_back();
    // cout<<str<<endl;

    // string s = "abd";
    // cout<<s<<endl;
    // s = s+str;
    // cout<<s<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;

}