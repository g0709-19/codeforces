#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, l;
	cin >> n >> l;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	sort(a.begin(), a.end());
	int d = max(a[0] - 0, l - a[n - 1]);
	int last = a[0];
	long double answer = d;
	for (int i = 1; i < n; ++i) {
		long double temp = (a[i] - last) * 0.5;
		if (temp >= d && temp > answer)
			answer = temp;
		last = a[i];
	}
	cout << fixed;
	cout << answer << '\n';
	return 0;
}
