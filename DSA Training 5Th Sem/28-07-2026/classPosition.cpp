#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>position(n);
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=0;j<n;j++){
            if(a[j]>a[i]){
                count++;
            }
        }
        position[i] = count;
    }
    for(int i=0;i<n;i++){
        cout<<position[i]<<" ";
    }
    
}