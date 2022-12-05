#include <bits/stdc++.h>
using namespace std;

#define cl(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;

const int mod = 1e9 + 7;

void debug() {
	
}

string p1() {
  string line;
  cin >> line;
  stringstream ss(line);
  vector<string> crates;
  vector<string> instructions;
  while (getline(ss, line)) {
    if (line.empty()) {
      break;
    } else {
      crates.push_back(line);
    }
  }
  
  cout << crates.size() << '\n';
  
  // now sort crates into data structure that knows crate number and crates above
  vector<stack<char>> stacks = vector<stack<char>>();
  for (int i = 0; i < crates.size(); ++i) {
    for (int j = 0; j < crates[i].size(); ++j) {
      if (crates[i][j] != ' ') {
        stacks[i].push(crates[i][j]);
      }
    }
  }
  
  
  // print stacks
  for (int i = 0; i < stacks.size(); ++i) {
    cout << "stack " << i << ": ";
    while (!stacks[i].empty()) {
      cout << stacks[i].top() << ' ';
      stacks[i].pop();
    }
    cout << '\n';
  }

  return "";
}

int p2() {
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cout << p1() << '\n';
}