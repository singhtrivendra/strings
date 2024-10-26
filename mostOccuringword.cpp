#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
string str = "I am a Trivendra Singh. I am a app devloper";
stringstream ss(str);
 string temp;
vector <string> v;      // to store the all words in vector for further counting
while (ss>>temp){
    v.push_back(temp);
}
cout<<endl;
sort(v.begin(),v.end());  // sorting arrange all same words order pattern
int count = 1;
int maxcount = 1;
 for(int i=1;i<v.size();i++){
  if(v[i] == v[i-1]) count++;
  else count =1;
maxcount = max(maxcount,count);
 }
count = 1;
for(int i=1;i<v.size();i++){
  if(v[i] == v[i-1]) count++;
  else count =1;
if(count==maxcount){
    cout<<v[i]<<" "<<maxcount<<endl;
}
 }
}