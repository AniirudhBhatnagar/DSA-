#include<iostream>
#include<list>
#include<map>
#include<queue>
using namespace std;

unordered_map<int,list<pair<int,int>>> adjList;
class Graph{
    public:
      void addEdge(int u,int v,int weight,bool direction){
        int w = weight;
        if(direction == 0){
            adjList[u].push_back({v,w});
            adjList[v].push_back({u,w});
        }
        else{
            adjList[u].push_back({v,w});
        }
      }
};
void printGraph(int n){
    for(int i = 0; i < n;i++){
        cout << i << " : ";
        cout << "{";
        list<pair<int,int>> temp = adjList[i];
        for(auto val : temp){
            cout << "(" << val.first << "," << val.second << ")" << ",";
        }
        cout << "}";
        cout << endl;
    }
}
void BFS(int src){
    queue<int> q;
    unordered_map<int,bool> visited;

    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int front = q.front();
        q.pop();
        cout << front << ", ";

        for(auto val : adjList[front]){
            int data = val.first;

            if(!visited[data]){
                q.push(data);
                visited[data] = true;
            }
        }
    }
}

void dfsHelper(int src, unordered_map<int,bool> &visMap){
    visMap[src] = true;
    cout << src << ", ";

    for(auto val: adjList[src]){
        int node = val.first;
        if(!visMap[node]){
            dfsHelper(node,visMap);
        }
    }
}

void DFS(int n){
    unordered_map<int,bool> visMap;
    for(int src = 0 ; src < n;src++){
        if(!visMap[src]){
            dfsHelper(src,visMap);
        }
    }
}
int main(){
    Graph g;
    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,5,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,4,3,1);
    g.addEdge(5,6,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(6,1,3,1);
    printGraph(9);
    cout << endl;
    cout << "BFS : " ;
    BFS(0);
    cout << endl;
    cout << "DFS : " ;
    DFS(7);
    return 0;
}
