#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int n, x;

	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		vector<int> numbers(n);
		for (int i = 0; i < n; i++) {
			cin >> numbers[i];
		}
		int num_min = numbers[0];
		int num_max = numbers[0];
		int res = 0;
		for (int i = 1; i < n; i++) {
			if (numbers[i] > num_max) {
				num_max = numbers[i];
			}
			if (numbers[i] < num_min) {
				num_min = numbers[i];
			}
			if (num_max - num_min > 2 * x) {
				res++;
				num_min = num_max = numbers[i];
			}
		}
		cout << res << endl;
	}
	return 0;
}
