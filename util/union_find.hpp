class UnionFind {
    private:
        vector<int> parent;

    public:
        UnionFind(int n):parent(n) {
            for (int i = 0; i < n; i++) {
                parent[i] = i;
            }
        }

    public:
        int find(int x) {
            while (x != parent[x]) {
                parent[x] = parent[parent[x]];
                x = parent[x];
            }
            return x;
        }
        void merge(int x, int y) {
            int rootX = find(x);
            int rootY = find(y);
            parent[rootX] = rootY;
            
           
        }

        bool isConnected(int x, int y) {
            return find(x) == find(y);
        }
};