#include<iostream>
#include<list>
#include<map>
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

int main(){
    Graph g;
    g.addEdge(1,2,4,1);
    g.addEdge(0,1,2,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,3,1,1);
    printGraph(4);
    return 0;
}
