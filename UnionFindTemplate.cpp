#include <vector>
#include <algorithm>

using namespace std;

// Union-Find
int Find(vector<int>& L, int x){

    vector<int> sameRoot;
    while(x != L[x]){
        sameRoot.push_back(x);
        x = L[x];
    }
    for(int i=0;i<sameRoot.size();i++){
        L[sameRoot[i]] = x;
    }
    return x;
}

void Union(vector<int>& L, int x, int y){
    L[Find(L, x)] = Find(L, y);
}