#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){

    // Cycle detection in an undirected graph:
    // n->Number of vertices;
    vector<vector<int>> adjList;
    int n=6, node=0; 
    vector<int> parent(n,0);
    vector<bool>visited(n,0);
    queue<int>q;
    visited[node] = 1;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(int i=0 ; i<adjList[node].size() ; i++){
            if(!visited[adjList[node][i]]){
                visited[adjList[node][i]]=1;
                q.push(adjList[node][i]);
                parent[adjList[node][i]] = front;
            }
            else if(adjList[front][i] != parent[front]){
                cout << "Cycle is present" << endl; 
            }
        }
    }





    return 0;
}