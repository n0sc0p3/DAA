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

long long findLengthNaive(string str, long long int n)
{
    long long size = 0;
    long long count0 = 0;
    long long count1 = 0;
    long long length_max = 0;
    long long diff_max = 0;
    for (size = 2; size < n; size++) {
        for (long long int i = 0; i < n-size; i++){
            long long count0 = 0;
            long long count1 = 0;
            for (long long int j = i; j < size+i; j++){
                if(str[j]=='0')count0++;
                if(str[j]=='1')count1++;
            }
            // deb2(count0,count1);
            
            long long int temp = (count0-count1);
            // deb(i);
            // deb2(temp,size);
            if(temp>=diff_max){
                diff_max = temp;
                length_max=size;
            }
        }
    }
    return diff_max;
}
  
int main()
{
    string s;
    cin>>s;
    cout<<findLengthNaive(s, s.length())<<endl;
    return 0;
}
