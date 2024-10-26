// string are basically char arry
#include<iostream>
#include<string>
using namespace std;
int main(){
 string arr[]= {"0123","0123","19799","237","0000357","000836221"} ;
   int max = stoi(arr[0]);
   string maxS = arr[0];
  for(int i = 1; i<=5;i++){
    int x = stoi(arr[i]);
    if(x>max) {
        max =x;
        maxS =arr[i]; // to preserve the actual string
    };
  }
  cout<<max<<endl;
  cout<<maxS;
}