#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
typedef string St;
typedef vector<int> vi;
typedef vector<float> vd;
typedef set<int> si;
typedef set<ll> sll;
typedef multiset<int > mlsi;
typedef multiset<ll > mlsl;

typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define pb push_back
#define is insert
#define F first
#define S second
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()


const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;


#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fastIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield); //dosomik er por koy ghor ta dekhabe

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
    cerr << arg << ' ';
    faltu(rest...);
}

int main() {
    fastIO;
    optimize();

   int n;
   cin>>n;
   char a[n];
   vector<char> c1,c2,c3;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i] =='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
       {
           c1.pb(a[i]);
       }
       else if(a[i] >='A' && a[i] <='Z')
       {
           c2.pb(a[i]);
       }
       else
       {
           c3.pb(a[i]);
       }
   }


   cout<<"Consonants"<<endl;
   for(auto u:c2)
   {
       cout<<u<<" ";
   }
   cout<<endl;
   cout<<"Vowels"<<endl;
    for(auto u1:c1)
    {
        cout<<u1<<" ";
    }
    cout<<endl;

    cout<<"Digits"<<endl;
    for(auto u2:c3)
    {
        cout<<u2<<" ";
    }
    cout<<endl;
}
