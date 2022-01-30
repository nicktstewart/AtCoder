#include <iostream>
#include <bitset>
#include <algorithm>
#include <tuple>
#include <list>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    list<int> retList = {0};
    auto it = retList.begin();

    for(int i=1;i<=s.size();i++){
        if(s[i-1] == 'L'){
            auto tempit = retList.insert(it, i);
            it = tempit;
        }else{
            advance(it, 1);
            auto tempit = retList.insert(it, i);
            it = tempit;
        }

    }

    for (auto i = retList.begin();
         i != retList.end();
         i++)
        cout << *i << " ";

    cout << "\n";
}





