class Solution {
public:
    bool dfs(long long source,unordered_map<long long,vector<long long>>& graph,long long n, vector<long long>&visited,long long destination){
        visited[source]=1;
        if(source==destination){
            return true;
            
        }
            
        
        for(long long nbr:graph[source]){
            if(!visited[nbr]){
                if(dfs(nbr,graph,n,visited,destination)){
                    return true;
                }
            }
        }

        
        return false;
    }
    bool validPath(long long n, vector<vector<int>>& edges, long long source, long long destination) {
        unordered_map<long long,vector<long long>>graph;
        for(long long i =0; i<edges.size(); i++){
            long long a=edges[i][0];
            long long b=edges[i][1];

            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        vector<long long> visited(n);
        return dfs(source,graph,n,visited,destination);
        
    }
};
