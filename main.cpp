#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, x;
	cin >> n >> x;

	auto ts = vector<int>(n);
	for (auto i = 0; i < n; ++i) {
		cin >> ts[i];
	}

	for (auto i = 0; i < 200; ++i) {
		auto j = i % n;

		if (ts[j] < x) {
			cout << j + 1;
			return 0;
		}

		++x;
	}

	return 0;
}