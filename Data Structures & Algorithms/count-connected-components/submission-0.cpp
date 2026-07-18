class Solution {
    private:
    
public:
    
    int countComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);
        int num = edges.size();
        for(int i=0;i<num;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        int components = 0;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                components++;
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int node = q.front();
                    visited[node]=1;
                    q.pop();
                    for(auto &next : adj[node]){
                        if(!visited[next]){
                            visited[next]=1;
                            q.push(next);
                        }
                    }
                }
            }
        }
        return components;
    }
};
