#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){

    // vector<vector<int>>vv(10,vector<int>(5,100));
    // for(int i=0;i<10;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<vv[i][j]<<" ";
    //        // cout<<"\n";
    //     }
    //        cout<<"\n";
    // }

    //PAir
        //     pair<int,string>p;
        //     p={101,"Akash"};
        //     p = make_pair(101,"Akash");
        //     cout<<p.first<<" ";
        //     cout<<p.second;

    //vector of pair
        vector<pair<int,string>>vp;
        vp.push_back({1,"Akash"});
        vp.push_back({2,"Aditya"});
        vp.push_back({3,"Amit"});
        vp.push_back({4,"Vikash"});
        vp.push_back({5,"Ayush"});
    
        for(int i=0;i<vp.size();i++){
            pair<int,string>p;
            p = vp[i];
            cout<<p.first<<", "<<p.second<<"\n";
        }

        queue<pair<int,int>>q;
        q.push({0,5});
        q.push({1,4});
        q.push({2,3});
        q.push({3,2});
        q.push({4,1});
        q.push({5,0});
        q.push({0,5});
        while(!q.empty()){
            pair<int,int>p;
            p = q.front();
            q.pop();
            cout<<p.first<<", "<<p.second<<"\n";

        }



}