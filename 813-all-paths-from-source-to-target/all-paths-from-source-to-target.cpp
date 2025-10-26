class Solution {
public:
    void dfs(vector<vector<int>>& graph, int node, vector<int>& path, vector<vector<int>>& result) {
        path.push_back(node);

        if (node == graph.size() - 1) {
            result.push_back(path);  // If we reach the last node, store the path
        } else {
            for (int neighbor : graph[node]) {
                dfs(graph, neighbor, path, result);
            }
        }

        path.pop_back();  // Backtrack
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(graph, 0, path, result);
        return result;
    }
};