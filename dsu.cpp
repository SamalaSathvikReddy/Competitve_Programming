#include <bits/stdc++.h>
using namespace std;

using ii = long long;

class DSU{
    private:
        vector<int>parent, size;
        int components;
    public:
        DSU(int n) : parent(n), size(n, 1) {
            iota(parent.begin(), parent.end(), 0);
            components = n;
        }

        int find(int x) {
            if (x == parent[x]) return x;
            return (parent[x] = find(parent[x]));
        }

        bool unite(int x, int y) {
            int px = find(x);
            int py = find(y);
            if (px == py)return false;
            if (size[px] > size[py]) swap(px, py);
            parent[px] = py;
            size[py] += size[px];
            components--;
            return true;
        }

        bool connected(int x, int y) {
            return find(x) == find(y);
        }


};

int main(void){
    DSU A(100);
    return 0;
}
