#include<iostream>
#include<vector>
 using namespace std;

 int main (){
    int V,E;
    cout<<"Enter the Vertices:";
    cin>>V;
    cout<<"Enter the Edges:";
    cin>>E;
    int i;
    vector<int>Adj[V+1];
    for(i=1; i <= E; i++){
      int a,b;
      cout<<"Enter the end point of the Edges"<<i<<":";
      cin>> a >> b;
      Adj[a].push_back(b);
        //Adj[b].push_back(a); //for undirected graph


    }

    for(i = 0; i < V; i++){
        cout<<i<<":";
        for(int j =0; j<Adj[i].size(); j++){
            cout<<Adj[i][j]<<" ";


        }
        cout<<endl;
    }


 }
