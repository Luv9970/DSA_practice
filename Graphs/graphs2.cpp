#include <bits/stdc++.h>
using namespace std;

void printAdjList(vector<vector<int>>AdjList , int size){
    for(int i=0 ; i<size ; i++){
        cout << i << " -> ";
        for(int j=0 ; j<AdjList[i].size() ; j++){
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }
}

void printVector(vector<int> a){
    for(int i=0 ; i<a.size() ; i++){
        cout << a[i] << " ";
    }
}

void BFS_Traversal(int node, vector<vector<int>>&AdjList, vector<int>&BFS, vector<bool>&visited){
    visited[node] = 1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        BFS.push_back(front);
        for(int j=0 ; j<AdjList[front].size() ; j++){
            if(!visited[AdjList[front][j]]){
                visited[AdjList[front][j]] = 1;
                q.push(AdjList[front][j]);
            }
        }
    }
}

void DFS_Traversal(int node, vector<vector<int>>&AdjLsit, vector<int>&DFS, vector<bool>&visited){
    visited[node] = 1;
    DFS.push_back(node);
    for(int i=0 ; i<AdjLsit[node].size() ; i++){
        if(!visited[AdjLsit[node][i]]){
            DFS_Traversal(AdjLsit[node][i], AdjLsit, DFS, visited);
        }
    }
}


int main(){
    int V = 6;
    int E = 6;
    vector<vector<int>> edges = {{0,1},{1,2},{2,3},{3,5},{5,4},{4,0}};


    // Creation of the adjacency list:
    vector<vector<int>>AdjList(V);
    for(int i=0 ; i<edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    // printAdjList(AdjList , V);
    // cout << endl;


    // BFS TRAVERSAL:
    int start1 = 0;
    vector<bool> visited1(V,0);
    vector<int> BFS;
    for(int i=0 ; i<V ; i++){
        if(!visited1[i]){
            BFS_Traversal(start1 , AdjList , BFS , visited1);
        }
    }
    // cout << "The BFS traversal of Graph is: ";
    // printVector(BFS);
    // cout << endl;


    // DFS TRAVERSAL:
    int start2 = 0;
    vector<bool> visited2(V,0);
    vector<int> DFS;
    for(int i=0 ; i<V ; i++){
        if(!visited2[i]){
            DFS_Traversal(start2 , AdjList , DFS , visited2);
        }
    }
    // cout << "The DFS traversal of Graph is: ";
    // printVector(DFS);
    // cout << endl;


    // Cycle Detection in an Undirected Graph:
    // USING DFS:
    






    return 0;
}