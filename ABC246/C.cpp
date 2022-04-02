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
    long long n,k,x;
    cin >> n >> k >> x;
    vector<long long> nums(n);

    for(long long i=0;i<n;i++){
        cin >> nums[i];
    }

    for(long long i=0;i<n;i++){
        long long div = (nums[i] - (nums[i]%x)) / x;
        if(k>=div){
            k -= div;
            nums[i] -= div * x;
        }else{
            k = 0;
            nums[i] -= k * x;
            break;
        }
    }

    sort(nums.begin(),nums.end());
    reverse(nums.begin(),nums.end());

    if(k > 0){
        for(long long i=0;i<n;i++){
            if(k <= 0)
                break;
            if(nums[i] == 0)
                continue;
            k -= 1;
            nums[i] -= x;
            if(nums[i] < 0)
                nums[i] = 0;

        }
    }


    long long total = 0;
    for(long long i=0;i<n;i++){
        total += nums[i];
    }
    cout << total << "\n";
}





