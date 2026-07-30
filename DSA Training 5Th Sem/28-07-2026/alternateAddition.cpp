#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int diff = b-a;
    if(diff%3==0 || diff %3==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}