#include <bits/stdc++.h>
#define let long long
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define endl "\n"
#define vi vector<let>
#define vvi vector<vector<let>>
#define vs vector<string>
#define vpii vector<pair<let, let>>
using namespace std;

int main()
{
  let T;
  cin >> T;
  while (T--)
  {
    let n;
    cin >> n;
    vi a(n);
    unordered_map<let, let> freq;
    for (let i = 0; i < n; i++)
    {
      cin >> a[i];
      freq[a[i]]++;
    }
    let score = 0;
    for (auto [key, val] : freq)
    {
      score += val / 2;
    }
    cout << score << endl;
  }
  return 0;
}
