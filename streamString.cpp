
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){     

string str = "Trivendra is a App Developer";
stringstream ss(str);
string temp;
while(ss>>temp){
    cout<< temp << endl;
}
}