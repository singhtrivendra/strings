#include<iostream>
#include<string>

using namespace std;
int main(){
    // String as DataType
    string str = "Trivendra";
    int count =0;
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        count++;
        }
        i++;
    }

    cout<< count;

}