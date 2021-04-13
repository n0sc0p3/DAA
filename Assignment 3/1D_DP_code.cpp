#include<bits/stdc++.h>
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
        current_length++;
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
    return max_length;
}

  
int main()
{
    string s;
    long long n;
    cin>>s;
    n = s.length();
    cout<<findLength(s, s.length())<<endl;
    return 0;
}
