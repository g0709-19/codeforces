#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int w;
	cin >> w;
	int start = 1;
	int end = w - 1;
	int answer = 0;
	while (end - start >= 0) {
		if (start % 2 == 0 && end % 2 == 0) {
			cout << "YES\n";
			return 0;
		}
		++start; --end;
	}
	cout << "NO\n";
	return 0;
}
