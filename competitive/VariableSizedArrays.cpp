#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::string;

int main(void) {
	int n, q;
	cin >> n;
	cin >> q;
	vector<vector<int>>arr(n);

	for (int i = 0; i < n; i++) {
		int how_many;
		cin >> how_many;
		arr[i].resize(how_many);
		for (int j = 0; j < how_many; j++) {
			cin >> arr[i][j];
		}
	}

	vector<int> query(q);
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		query[i] = arr[a][b];
	}
	for (const auto& ans : query) {
		cout << ans << '\n';
	}
	return 0;
}
