#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter value of y:";
    cin>>y;
    if(x<=y){
        cout<< y-x;
    }
    else{
        int diff = x -y;
        if(diff %2 ==0) cout<< diff/2;
        else cout<<(diff/2)+2;
    }


}