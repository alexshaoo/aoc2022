#include <bits/stdc++.h>
using namespace std;

#define cl(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;

const int mod = 1e9 + 7;

int one() {
  string line;
  int s = 0;
	while (getline(cin, line)) {
    int a = line[0] - 'A', b = line[2] - 'X';
    s += (b+1);
    if (a == b) {
    	s += 3;
    } else if (b == (a+1) % 3) {
    	s += 6;
    }
	}
	return s;
}

int two() {
  string line;
  ull score = 0;
  while (getline(cin, line)) {
    char a = line[0], b = line[2];
    if (b == 'X') {
      if (a == 'A') {
        score += 3;
      } else if (a == 'B') {
        score += 1;
      } else if (a == 'C') {
        score += 2;
      }
    } else if (b == 'Y') {
      if (a == 'A') {
        score += 1;
      } else if (a == 'B') {
        score += 2;
      } else if (a == 'C') {
        score += 3;
      }
      score += 3;
    } else if (b == 'Z') {
      if (a == 'A') {
        score += 2;
      } else if (a == 'B') {
        score += 3;
      } else if (a == 'C') {
        score += 1;
      }
      score += 6;
    }
  }
  return score;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string line;
	cout << two() << '\n';
}