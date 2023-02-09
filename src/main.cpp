#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto as = vi(10);
	for (auto i = 0; i < 10; ++i) {
		cin >> as[i];
	}

	auto bs = vi(10);
	for (auto i = 0; i < 10; ++i) {
		cin >> bs[i];
	}

	auto aw = int{ 0 };
	auto bw = int{ 0 };
	for (auto i = 0; i < 10; ++i) {
		if (bs[i] < as[i]) {
			++aw;
		}
		else if (as[i] < bs[i]) {
			++bw;
		}
	}

	if (bw < aw) {
		cout << "A";
	}
	else if (aw < bw) {
		cout << "B";
	}
	else {
		cout << "D";
	}

	return 0;
}