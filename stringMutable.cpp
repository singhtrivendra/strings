#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
cin>>str;
int count= 0;
if(str[0]!=str[1]){
count++;
}
for(int i =1;i<str.size()-1;i++){
  if(str[i] !=str[i+1] && str[i] !=str[i-1]){
  count++;
  }
}
 if(str[str.size()-1] != str[str.size()-2]){
  count++;
 }
cout<<count;
}


