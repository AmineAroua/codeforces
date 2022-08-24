#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define vi vector<int>
#define pb push_back
#define ll long long
#define ld long double
#define nl '\n'
#define boost ios::sync_with_stdio(false)
//variables:

//functions:
ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;} // greatest common divisor (PGCD)
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);} // least common multiple (PPCM)
int compare(const void* a, const void* b)
{
   const int* x = (int*) a;
   const int* y = (int*) b;
   return (*x - *y);
}

//bsearch(&cible,arr,n,sizeof(int),compare);


int main()
{
    boost;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vi vBase;
        for(int i=1;i<=n;i++){
            vBase.push_back(i);
        }
        vi vCase;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            vCase.push_back(a);
        }
        if(n==1)cout<<-1<<nl;
        else
        {
            for(int i=0;i<n;i++){
                if(vBase[i]==vCase[i]&&i==0)
                {
                    swap(vBase[i],vBase[i+1]);

                }
                else if(vBase[i]==vCase[i]&&i==n-1)swap(vBase[i-1],vBase[i]);
                else if(vBase[i]==vCase[i]){
                    if(vBase[i]<vBase[i-1])
                        swap(vBase[i-1],vBase[i]);
                    else
                        swap(vBase[i],vBase[i+1]);
                }
            }

        for(int i=0;i<n;i++){
            cout<<vBase[i]<<" ";
        }
        cout<<nl;}
    }

}




/*
Test 1
INPUT:                              |OUTPUT:
                                    |
                                    |
                                    |
                                    |
                                    |
                                    |
				    |
Test 2                              |
INPUT:                              |OUTPUT:
                                    |
                                    |
                                    |
                                    |
                                    |
				    |
				    |
				    |
				    |
----------------------------------------------------------------------------------------

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


