#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){

    // Creation of adjacency list:
    int nodes = 5;
    int edge = 6;
    vector<vector<int>> edges={{0,1},{1,2},{0,2},{2,4},{1,3},{3,4}};
    vector<vector<int>> adjacancyList(nodes);

    // Creation of the adjacany list:
    for(int i=0 ; i<edge ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjacancyList[u].push_back(v);
        adjacancyList[v].push_back(u);
    } 

    // Printing of the adjacancy List;
    for(int i=0 ; i<nodes ; i++){
        cout << i << " " << "-> ";
        for(int j=0 ; j<adjacancyList[i].size() ; j++){
            cout << adjacancyList[i][j] << " ";
        }
        cout << endl;
    }













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