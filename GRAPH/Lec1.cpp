#include<iostream>
#include<list>
#include<map>
using namespace std;

unordered_map<int,list<int>> adjList;
class Graph{
    public:
      void addEdge(int u,int v,bool direction){
        if(direction == 0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else{
            adjList[u].push_back(v);
        }
      }
};
void printGraph(int n){
    for(int i = 0; i < n;i++){
        cout << i << " : ";
        cout << "{";
        list<int> temp = adjList[i];
        for(auto val : temp){
            cout << val << ",";
        }
        cout << "}";
        cout << endl;
    }
}

int main(){
    Graph g;
    g.addEdge(1,2,1);
    g.addEdge(0,1,1);
    g.addEdge(0,2,1);
    g.addEdge(2,3,1);
    printGraph(4);
    return 0;
}
