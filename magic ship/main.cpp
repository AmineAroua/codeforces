#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vl vector<long long>
#define vii vector<pair<int,int>>
#define vll vector<pair<long long,long long>>
#define pb push_back
#define ll long long
#define ld long double
#define nl '\n'
#define boost ios::sync_with_stdio(false)
#define mp make_pair
#define se second
#define fi first
#define forr(i, x, y) for(ll i = x; i <= y; i++)
#define forn(i, x, y) for(ll i = x; i >= y; i--)

const ll MOD = 1e9 + 7;
const ll INF = 1e18 + 1;

//variables:


//functions:

ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;} // greatest common divisor (PGCD)
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);} // least common multiple (PPCM)
ll xI,yI,xF,yF,xM,yM;
string s;
bool check(ll mid)
{
    ll k = mid%s.size();
    ll Y = (mid/(ll)s.size())*yM+yI;
    ll X = (mid/(ll)s.size())*xM+xI;
    for(int i=0;i<k;i++)
    {
        char c = s[i];
        if(c=='U')
            Y++;
        if(c=='D')
            Y--;
        if(c=='R')
            X++;
        if(c=='L')
            X--;
    }
    ll cost = abs(X-xF)+abs(Y-yF);
    if(cost<=mid)
    {
        return true;
    }
    return false;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    boost;
    cin>>xI>>yI>>xF>>yF;
    xM = 0;
    yM = 0;
    int n;
    cin>>n;
    cin>>s;
    for(auto c:s)
    {
        if(c=='U')
            yM++;
        if(c=='D')
            yM--;
        if(c=='R')
            xM++;
        if(c=='L')
            xM--;
    }
    ll l = 0,r = 20000000000000000;
    while(l+1<r)
    {
        ll mid = l+(r-l)/2;
        if(check(mid))
            r = mid;
        else
        {
            l = mid;
        }
    }
    if(r==20000000000000000)
        cout<<-1<<nl;
    else
        cout<<r<<nl;
}




/*

1/2 half of the contest:
 Read the subject in ~2 min
 Reformulate the topic
 solve examples
 Think of the solution 3 min
 Implement the solution for 20 min
 Pseudo-code your algorithm
 Verify your solution
 Code your solution
 Test your solution
 Debug your code
2/2 half of the contest:
 find the easiest subtasks and try to solve them or give up
 if there are many subtasks, the problem is easy
 if the first subtask is difficult with no much points, the problem is difficult
----------------------------
!(: remember, you are the king of competitive programming
*/


