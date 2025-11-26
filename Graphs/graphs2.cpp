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

bool DetectCycle(int node, int parent, vector<vector<int>>&AdjList, vector<bool>&visited){
    visited[node]=1;
    for(int i=0 ; i<AdjList[node].size() ; i++){
        if(!visited[AdjList[node][i]]){
            bool b = DetectCycle(AdjList[node][i], node, AdjList, visited);
            if(b) return 1;
        }
        else if(AdjList[node][i] != parent){
            return true;
        }
    }
    return false;
}

bool BFS_Cycle(int node, vector<int>&parent, vector<vector<int>>&AdjList, vector<bool>&visited){
    visited[node]=1;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(int i=0 ; i<AdjList[front].size() ; i++){
            if(!visited[AdjList[front][i]]){
                visited[AdjList[front][i]] = 1;
                parent[AdjList[front][i]] = front;
                q.push(AdjList[front][i]);
            }
            else if(AdjList[front][i] != parent[front]){
                return true;
            }
        }
    }
    return false;
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


    cout << "Hello world!" << endl;


    // Cycle Detection in an Undirected Graph:
    // USING DFS TRAVERSAL:
    // vector<bool>visited3(V,0);
    // for(int i=0 ; i<V ; i++){
    //     if(!visited3[i]){
    //         bool a = DetectCycle(i,-1,AdjList,visited3);
    //         if(a){
    //         cout << "There is cycle present in the graph";
    //         return 0;
    //     }
    //     }
    // }
    // cout << "There is no cycle present in the graph";


    // USING BFS TRAVERSAL:
    vector<bool>visited4(V,0);
    vector<int> parent(V,-1);
    for(int i=0 ; i<V ; i++){
        if(!visited4[i]){
            bool b = BFS_Cycle(i , parent , AdjList , visited4);
            if(b){
                cout << "The cycle is present and checked throuh the BFS algo";
                return 0;
            }
        }
    }
    cout << "The cycle is not present :(";

    






    return 0;
}