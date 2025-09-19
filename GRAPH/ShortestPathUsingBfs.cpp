#include<iostream>
#include<map>
#include<queue>
#include<list>
using namespace std; 

class Graph{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v,bool direction){
        if(direction == 0){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        else{
             adj[u].push_back(v);
        }
    }

    void printGraph(int n){
        for(int i = 0 ; i < n ;i++){
            cout << i << " : " << "{";
            for(auto val : adj[i]){
                cout << val << ", ";
            }
            cout << " }" << endl;;
        }
    }

    vector<int> shortestDistanceUsingBfs(int src,int dest){
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        queue<int> q;

        visited[src] = true;
        parent[src] = -1;
        q.push(src);

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto val : adj[front]){
                if(!visited[val]){
                    visited[val] = true;
                    parent[val] = front;
                    q.push(val);
                }
            }
        }

        vector<int> ans;
        int node = dest;
        while(node != -1){
            ans.push_back(node);
            node = parent[node];
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }

};

int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(2,4,0);
    g.addEdge(4,5,0);
    g.addEdge(5,3,0);
    g.printGraph(6);

    vector<int> finalAns = g.shortestDistanceUsingBfs(0,3);
    
    cout << "Shortest Path Using BFS : " << endl;
    for(auto val : finalAns){
        cout << val <<  " ";
    }
    return 0;
}