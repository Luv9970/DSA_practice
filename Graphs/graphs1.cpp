#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS_Traversal(int node , vector<int>&ans , vector<vector<int>>& adjList , vector<bool>&visited){
    queue<int>q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(int j=0 ; j<adjList[front].size() ; j++){
            if(!visited[adjList[front][j]]){
                visited[adjList[front][j]] = 1;
                q.push(adjList[front][j]);
            }
        }
    }

}

void DFS_Traversal(int node , vector<int>&ans , vector<vector<int>>& adjList , vector<bool>&visited){
    visited[node] = 1;
    ans.push_back(node);
    for(int i=0 ; i<adjList[node].size() ; i++){
        if(!visited[adjList[node][i]]){
            DFS_Traversal(adjList[node][i] , ans , adjList , visited);
        }
    }
}


int main(){

    // // *******************Creation of adjacency list of an unweighted graph:*************
    // int nodes = 5;
    // int edge = 6;
    // vector<vector<int>> edges={{0,1},{1,2},{0,2},{2,4},{1,3},{3,4}};
    // vector<vector<int>> adjacancyList(nodes);

    // // Creation of the adjacany list:
    // for(int i=0 ; i<edge ; i++){
    //     int u = edges[i][0];
    //     int v = edges[i][1];

    //     adjacancyList[u].push_back(v);
    //     adjacancyList[v].push_back(u);
    // } 

    // // Printing of the adjacancy List;
    // for(int i=0 ; i<nodes ; i++){
    //     cout << i << " " << "-> ";
    //     for(int j=0 ; j<adjacancyList[i].size() ; j++){
    //         cout << adjacancyList[i][j] << " ";
    //     }
    //     cout << endl;
    // }





    // //************ */ Creation of the adjacancy list of a weighted graph:**********
    // int nodes = 5;
    // int edges = 6;
    // vector<vector<int>> vertices = {{0,1,6},{0,2,8},{1,2,7},{1,3,5},{2,4,9},{3,4,10}};
    // vector<vector<pair<int,int>>>adjacancyList(nodes);

    // // creation of adjacancy list:
    // for(int i=0 ; i<edges ; i++){
    //     int u = vertices[i][0];
    //     int v = vertices[i][1];
    //     int w = vertices[i][2];

    //     adjacancyList[u].push_back(make_pair(v,w));
    //     adjacancyList[v].push_back(make_pair(u,w));
    // }

    // // Printing of the adjacancy list:
    // for(int i=0 ; i<adjacancyList.size() ; i++){
    //     cout << i << " " << "-> ";
    //     for(int j=0 ; j<adjacancyList[i].size() ; j++){
    //         cout << adjacancyList[i][j].first << " " << adjacancyList[i][j].second << "   ";
    //     }
    //     cout << endl;
    // }





    // //******************** */ BFS/DFS Traversal of a Graph:**************************
    // int V = 8;
    // int E = 9;
    // vector<vector<int>> adjList = {{1,2},{0,5,7},{0,3,4},{2},{2},{1,6},{5,8},{1,8},{6,7}}; 
    // vector<bool>visited(V,0);
    // vector<int>ans;
    
    // for(int i=0 ; i<V ; i++){
    //     if(!visited[i]){
    //         // BFS_Traversal(0 , ans , adjList , visited);
    //         DFS_Traversal(0 , ans , adjList , visited);
    //     }
    // }
    // // Printing the BFS-Traversal array:
    // for(int j=0 ; j<ans.size() ; j++){
    //     cout << ans[j] << " ";
    // }





    //******************* */ Cycle Detection in an Undirected Graph:******************

























    
    // // Cycle detection in an undirected graph:
    // // n->Number of vertices;
    // vector<vector<int>> adjList;
    // int n=6, node=0; 
    // vector<int> parent(n,0);
    // vector<bool>visited(n,0);
    // queue<int>q;
    // visited[node] = 1;
    // while(!q.empty()){
    //     int front = q.front();
    //     q.pop();
    //     for(int i=0 ; i<adjList[node].size() ; i++){
    //         if(!visited[adjList[node][i]]){
    //             visited[adjList[node][i]]=1;
    //             q.push(adjList[node][i]);
    //             parent[adjList[node][i]] = front;
    //         }
    //         else if(adjList[front][i] != parent[front]){
    //             cout << "Cycle is present" << endl; 
    //         }
    //     }
    // }





    return 0;
}