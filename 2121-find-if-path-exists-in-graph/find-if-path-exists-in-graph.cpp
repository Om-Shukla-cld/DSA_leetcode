class Solution {
public:
    void dfs(vector<int>& visited, vector<vector<int>>& graph, int node) {
        visited[node] = 1;  // mark as visited
        for (int nbr : graph[node]) {
            if (!visited[nbr]) {
                dfs(visited, graph, nbr);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> visited(n, 0);
        vector<vector<int>> graph(n);

        // build adjacency list
        for (int i = 0; i < edges.size(); i++) {
            int a = edges[i][0], b = edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        dfs(visited, graph, source);

        return visited[destination]; // if destination is visited → true
    }
};