class Solution {
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();

        //created adj list 1 for old parent array
        vector<vector<int>> tree(n);
        for (int i = 0; i < n; i++) {
            tree[i] = vector<int>();
        }

        for (int i = 1; i < n; i++) {
            tree[parent[i]].push_back(i);
        }

        //creating visted array to store the prev indexes of the characters
        vector<int> last(26, -1);

        //new array for updating the tree
        vector<int> newP = parent;

        update(0, s, tree, last, newP);

    //new adj list for updated tree
        vector<vector<int>> newTree(n);
        for (int i = 0; i < n; i++) {
            newTree[i] = vector<int>();
        }
        for (int i = 1; i < n; i++) {
            newTree[newP[i]].push_back(i);
        }

        vector<int> subtreeSize(n, 0);
        solve(0, newTree, subtreeSize);
        return subtreeSize;
    }

private:
    void update(int node, const string& s, const vector<vector<int>>& tree, vector<int>& last, vector<int>& newP) {
        int charIndex = s[node] - 'a';

        if (last[charIndex] != -1 && last[charIndex] != node) {
            newP[node] = last[charIndex];
        }

        int prev = last[charIndex];
        last[charIndex] = node;

        for (int child : tree[node]) {
            update(child, s, tree, last, newP);
        }

        last[charIndex] = prev;
    }

    int solve(int node, const vector<vector<int>>& tree, vector<int>& subtreeSize) {
        int size = 1; 
        for (int child : tree[node]) {
            size += solve(child, tree, subtreeSize);
        }
        subtreeSize[node] = size;
        return size;
    }
};