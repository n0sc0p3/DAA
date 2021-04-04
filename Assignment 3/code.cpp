#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <chrono>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iterator>
#include <unordered_set>
using namespace std;
using namespace std::chrono;
#define fo(i, n) for (i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

bool allones(string s, long long int n)
{
    long long int co = 0;
    for (long long int i = 0; i < s.size(); i++)
        co += (s[i] == '1');
  
    return (co == n);
}

long long int findlength(vector<long long int> arr, string s, long long int n, 
              long long int ind, long long int st, vector < vector<long long int> > &dp)
{
    if (ind >= n)
        return 0;
    if (dp[ind][st] != -1)
        return dp[ind][st];
  
    if (st == 0)
        return dp[ind][st] = max(arr[ind] + 
          findlength(arr, s, n, ind + 1, 1, dp),
          findlength(arr, s, n, ind + 1, 0, dp));
  
    else
        {
            dp[ind][st] = max(arr[ind] + findlength(arr, s, n, ind + 1, 1, dp), (long long int)0);
            return dp[ind][st];
        }
}

long long int maxLen(string s, long long int n)
{
    if (allones(s, n)) 
        return -1;
    vector<long long int> arr(n+1,0);
    for (long long int i = 0; i < n; i++) 
        arr[i] = (s[i] == '0' ? 1 : -1);    
  
    vector < vector<long long int> > dp (n+1,vector<long long int>(3,-1));
    return findlength(arr, s, n, 0, 0, dp);
}


int main()
{
    string s;
    long long n;
    cin>>s;
    n = s.length();
    cout<<maxLen(s, s.length())<<endl;
    return 0;
}

