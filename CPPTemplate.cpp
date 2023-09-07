#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")

#define endl '\n'
#define nl << endl
#define sp << " "
#define lend cout << endl;
#define ll long long int
#define ld long double
#define pb push_back
#define popb pop_back();
#define all(x) x.begin() , x.end()
#define rall(x) x.rbegin() , x.rend()
#define sortAll(x) sort(all(x));
#define rsort(x) sort(rall(x));
#define YES() cout << "YES" nl
#define NO() cout << "NO" nl
#define Yes() cout << "Yes" nl
#define No() cout << "No" nl
#define yes() cout << "yes" nl
#define no() cout << "no" nl
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vc vector<char>
#define vcc vector<vector<char>>
#define vb vector<bool>
#define vvb vector<vb>
#define HashMap unordered_map
#define HashSet unordered_set
using namespace std;

template<typename T> using MaxHeap = priority_queue<T>;
template<typename T> using MinHeap = priority_queue<T , vector<T> , greater<T> >;
template<typename T> istream & operator>>(istream & in , vector<T> & arr) {for (auto & it : arr) in >> it; return in;}
template<typename T> ostream & operator<<(ostream & out , vector<T> & arr) {for (auto & it : arr) out << it sp; return out;}
template<typename T> ostream & operator<<(ostream & out , set<T> & s) {for (auto & it : s) out << it sp; return out;}
template<typename T> ostream & operator<<(ostream & out , unordered_set<T> & s) {for (auto & it : s) out << it sp; return out;}
template<typename T> istream& operator>>(istream & in , vector<vector<T>> & arr) {for (auto & row : arr) in >> row; return in;}
template<typename T> ostream& operator<<(ostream & out , vector<vector<T>> & arr) {for (auto & row : arr) out << row nl; return out;}
template<typename T , typename Q> ostream & operator<<(ostream & out , unordered_map<T , Q> & mp) {for (auto & it : mp) out << it.first sp << it.second; return out;}

namespace HashFunc {
    struct Pair {
        template<typename T1 , typename T2> size_t operator() (const pair<T1 , T2> & p) const {
            auto hash_1 = hash<T1> {}(p.first);auto hash_2 = hash<T2> {}(p.second);
            if(hash_1 != hash_2) return hash_1 ^ hash_2;return hash_1;
        }
    };
    struct Vector {
        template<typename T> size_t operator() (const vector<T> & myVector) const {
            hash<T> hasher;size_t answer = 0;
            for (T i : myVector) answer ^= hasher(i) + 0x9e3779b9 + (answer << 6) + (answer >> 2);return answer;
        }
    };
};
namespace MathFunc {
    #define MOD 1000000007
    #define inf INT_MAX 
    #define neginf INT_MIN
    int max(vector<int> arr) {return *max_element(all(arr));}
    int min(vector<int> arr) {return *min_element(all(arr));}
    ll max(ll a , ll b) {return a >= b ? a : b;}
    ll min(ll a , ll b) {return a <= b ? a : b;}
    ll max(vll ele) {return *max_element(all(ele));}
    ll min(vll ele) {return *min_element(all(ele));}
    float max(float a , float b) {return a >= b ? a : b;}
    float min(float a , float b) {return a <= b ? a : b;}
    float max(vector<float> ele) {return *max_element(all(ele));}
    float min(vector<float> ele) {return *min_element(all(ele));}
    double max(double a , double b) {return a >= b ? a : b;}
    double min(double a , double b) {return a <= b ? a : b;}
    double max(vector<double> ele) {return *max_element(all(ele));}
    double min(vector<double> ele) {return *min_element(all(ele));}
    ll HCF(ll a , ll b) {return !b ? a : HCF(b , a % b);}
    ll LCM(ll a , ll b) {ll hcf = HCF(a , b); return (a * b) / hcf;}
    ll stoLL(string str) {ll num = 0; for (auto & it : str) num *= 10 + (it - '0'); return num;}
    ll add(ll a , ll b) {return ((a % MOD) + (b % MOD)) % MOD;}
    ll sub(ll a , ll b) {return ((a % MOD) - (b % MOD) + MOD) % MOD;}
    ll mul(ll a , ll b) {return ((a % MOD) * (b % MOD)) % MOD;}
    bool isPowerOf2(ll x) {if(x < 0) return false; return x && (!(x & (x - 1)));}
    ll digitCount(ll n) {return floor(log10(n) + 1);}
    ll binPower(ll a , ll b) {if(b == 0) return 1;ll tmp = binPower(a , b / 2);tmp = mul(tmp , tmp);if(b & 1) return mul(tmp , a);return tmp;}
    void precise(double num , int place) {cout << fixed << setprecision(place) << num;}
};
using namespace HashFunc;
using namespace MathFunc;
using namespace std :: chrono;
/***********************************************************************************************************/
/*


*/


inline void preProcess() {}


inline void getMeTheSolution(ll testCase) {
    
}


/***********************************************************************************************************/
int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("error.txt" , "w" , stderr);
        auto startTime = std :: chrono :: high_resolution_clock :: now();
    #endif        
    
    ll t = 1;
    // cin >> t;

    preProcess();
    for(ll testCase = 1 ; testCase <= t ; testCase++) {
        getMeTheSolution(testCase);
    }

    #ifndef ONLINE_JUDGE
        auto endTime = std :: chrono :: high_resolution_clock :: now();
        auto dur = std :: chrono :: duration_cast<duration<double>> (endTime - startTime);
        cerr << "[Finished in : " << dur.count() << " s]" << endl;
    #endif
}
