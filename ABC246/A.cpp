#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <cmath>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>

using namespace std;

/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;

/* define short */
#define pb push_back
#define mp make_pair
#define all(obj) (obj).begin(), (obj).end()
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)

//aをbで割る時の繰上げ,繰り下げ
ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}

int main() {
    int x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int x4 = 0;
    int y4 = 0;
    if(x1 == x2){
        x4 = x3;
    }if(x2 == x3){
        x4 = x1;
    }if(x1 == x3){
        x4 = x2;
    }
    if(y1 == y2){
        y4 = y3;
    }if(y2 == y3){
        y4 = y1;
    }if(y1 == y3){
        y4 = y2;
    }
    cout << x4 << " " << y4 << "\n";
}





