#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array:";
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
     a.insert(a.end(), b.begin(), b.end());
     sort(a.begin(), a.end());
     cout<<a[n]+a[n-1];

}