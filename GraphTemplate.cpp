#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// graph
using Graph = vector<vector<int>>;


int main() {
    int n,m;
    cin >> n >> m;
    Graph g(n+1); // indices start at 0 but don't use 0
    int ai, bi;
    for(int i=0;i<m;i++){
        cin >> ai >> bi;
        g[ai].push_back(bi); // dual direction
        g[bi].push_back(ai); // if it is one-way delete one of these
    }
}
