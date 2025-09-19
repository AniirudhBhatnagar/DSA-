#include<iostream>
#include<stack>
#include<map>
#include<list>
#include<vector>
using namespace std;

class graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;
    void addEdge(int u,int v,int weight,bool direction){
        if(direction == 0){
             adj[u].push_back({v,weight});
             adj[v].push_back({u,weight});
        }
        else{
            adj[u].push_back({v,weight});
        }
    }

    void printGraph(int n){
        for(int i = 0 ; i< n;i++){
            cout << i << " : " << "{";
            for(auto val : adj[i]){
                cout << "(" << val.first << "," << val.second << ")";
                cout << ",";
            }
            cout << "}";
            cout << endl;
        }
    }

    void topoSort(int src,unordered_map<int,bool> &visited,stack<int> &s){
        visited[src] = true;

        for(auto val : adj[src]){
            if(!visited[val.first]){
                visited[val.first] = true;
                topoSort(val.first,visited,s);
            }
        }
        s.push(src);
    }

    vector<int> shortestPathUsingDfs(){
        unordered_map<int,bool> visited;
        stack<int> s;
        topoSort(0,visited,s);

        int n = s.size();
        vector<int> distance(n,INT_MAX);
        int src = s.top();
        s.pop();

        distance[src] = 0;

        for(auto val : adj[src]){
            int node = val.first;
            int nodeweight = val.second;

            if(distance[src] + nodeweight < distance[node]){
                distance[node] = distance[src] + nodeweight;
            }
        }

        while(!s.empty()){
            int top= s.top();
            s.pop();

             for(auto val : adj[top]){
            int node = val.first;
            int nodeweight = val.second;

            if(distance[top] + nodeweight < distance[node]){
                distance[node] = distance[top] + nodeweight;
            }
        }
    }
    return distance;
    }
};

int main(){
    graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,13,1);
    g.addEdge(0,4,3,1);
    g.addEdge(1,2,7,1);
    g.addEdge(1,4,1,1);
    g.addEdge(4,3,6,1);
    g.addEdge(3,2,2,1);

    g.printGraph(7);
    vector<int> distance = g.shortestPathUsingDfs();
    cout << "Printing Single Source Shortest Path : " ;
    for(auto val : distance){
        cout << val << " ";
    }
    return 0;
}