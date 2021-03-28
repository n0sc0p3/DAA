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

long long findLength(string str, long long int n)
{
    long long current_sum = 0;
    long long max_sum = 0;
    long long current_length = 0;
    long long max_length = 0;

    for (long long i = 0; i < n; i++) {
  
        current_sum += (str[i] == '0' ? 1 : -1);
  
        if (current_sum < 0){
            current_sum = 0;
            current_length = 0;
        }

        if(current_sum==max_sum){
        max_length = max(max_length,current_length);
        }
  
        if(current_sum>max_sum){
        max_sum = max(current_sum, max_sum);
        max_length = current_length;
        }
    }
}

  
int main()
{
    string s;
    long long n = 1000000;
    long long i;
    cout<<"N,t\n";

    for(long long j = 1000; j <= n; j+=1000){
        s="";
        for(i = 0; i <=j; i++)s+=('0'+rand()%2);
        chrono::high_resolution_clock::time_point start = high_resolution_clock::now();
        long long int length = findLength(s, s.length());
        chrono::high_resolution_clock::time_point stop = high_resolution_clock::now();
        chrono::microseconds duration = duration_cast<microseconds>(stop - start);
        cout<<j<<","<<(double)duration.count()/1e6<<"\n";
    }
    
    return 0;
}
