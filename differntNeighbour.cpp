#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(n==1){
            break;
        }
        if(i==0){ // for 1st idx
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1){ // for last idx
            if(s[i]!=s[i-1]) count++;
        }
        else if(s[i]!=s[i-1] && s[i]!=s[i+1]){
            count++;
        }
    }

    cout<<count;
}