#include<bits/stdc++.h>
using namespace std;

void printAdjList(vector<vector<int>>&AdjList , int size){
    for(int i=0 ; i<size ; i++){
        cout << i << " -> ";
        for(int j=0 ; j<AdjList[i].size() ; j++){
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }
}

void topologicalSortDFS(int node, vector<bool>&visited, stack<int>&st, vector<vector<int>>&AdjList){
    visited[node] = 1;
    for(int i=0 ; i<AdjList[node].size() ; i++){
        if(!visited[AdjList[node][i]]){
            topologicalSortDFS(AdjList[node][i],visited,st,AdjList);
        }
    }
    st.push(node);
}

int main(){
    int V = 4;
    int E = 4;
    vector<vector<int>>edges = {{0,1},{0,2},{1,3},{2,3}};

    // Creation of the adjacany List:
    vector<vector<int>>AdjList(V);
    for(int i=0 ; i<edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        AdjList[u].push_back(v);
    }

    printAdjList(AdjList,V);

    // TOPPLOGICAL SORT:
    // USING DFS:
    // vector<bool>visited1(V,0);
    // stack<int> st;
    // for(int i=0 ; i<V ; i++){
    //     if(!visited1[i]){
    //         topologicalSortDFS(i,visited1,st,AdjList);
    //     }
    // } 
    // vector<int>topo;
    // while(!st.empty()){
    //     topo.push_back(st.top());
    //     st.pop();
    // }

    // for(int i=0 ; i<topo.size() ; i++){
    //     cout << topo[i] << " ";
    // }


    // USING BFS(Kahn's Algorithm):
    // step1: Calculate the indegree of all the nodes
    // step2: Jiska indegree 0 hai push them in the queue
    // Step3: Traverse to that 0 indegree and usse connected jitne bhi vertex hai reduce their indegree by 1:
    
    vector<int> indegree(V,0);
    queue<int>q;
    vector<int> ans;
    for(int i=0 ; i<V ; i++){
        for(int j=0 ; j<AdjList[i].size() ; j++){
            indegree[AdjList[i][j]]++;
        }
    }
    for(int i=0 ;i<V ;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(int j=0 ; j<AdjList[front].size() ; j++){
            indegree[AdjList[front][j]]--;
            if(indegree[AdjList[front][j]] == 0){
                q.push(AdjList[front][j]);
            }
        }
    }
    for(int i=0 ; i<V ;i++){
        cout << ans[i] << " ";
    }

    return 0;
}