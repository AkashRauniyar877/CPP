#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

int main (){

 
    int N, E;
    cout<<"Enter the Number of Vertices:";
    cin>>N;
    cout<<"Enter the number of Edges:";
    cin>>E;
    vector<int> AdjList[N+1];
    for(int i =1; i<=E;i++){
        cout<<"Enter the end points of Edges "<<i<<":";
        int a, b;
        cin >> a >> b;
        AdjList[a].push_back(b);
        AdjList[b].push_back(a);

    }

    for(int i=0;i<N;i++){
        cout<<i<<":";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j]<<",";
        }
        cout<<endl;
    }




}