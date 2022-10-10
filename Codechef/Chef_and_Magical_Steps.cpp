#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
 
//start_of_debug
template <class T>
void _vals(T a){cerr << a << " ";}
template <class T>
void _vals(vector <T> a){
 cerr << " [ ";
 for(auto i : a)
  cerr << i << " ";
 cerr << "] ";
}
template <class T, class V>
void _vals(map <T, V> a){
 cerr << " [";
 for(auto i : a)
  cerr << " [ " << i.first << " , " << i.second << " ] ";
 cerr << "] ";
  
}
#ifndef ONLINE_JUDGE
  #define debug(x) cerr << #x << " "; _vals(x); cerr << "\n"
#else
  #define debug(x)
#endif
#define test cout << "Working\n"
//end_of_debug
 
#define start() lli x; cin >> x; while(x--)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
#define lb "\n" 
#define pb push_back

const int max_limit = 1000;
vector <int> primes(max_limit + 1, 1);

void solution()
{
    int x, y; cin >> x >> y;
    cout << y - x - primes[y] + primes[x + 1] << lb;
}
int main()
{

IO;
 #ifndef ONLINE_JUDGE
   freopen("error.txt", "w", stderr);
 #endif

 primes[0] = primes[1] = 0;
 for(int i = 2; i * i < max_limit; i++)
 {
    if(primes[i] == 1)
    {
     for(int j = i * i; j <= max_limit; j += i)
        primes[j] = 0;
    }
 }

 for(int i = 1; i < max_limit; i++)
    primes[i] += primes[i - 1];

    debug(primes);

start()
 solution();
return 0;
}