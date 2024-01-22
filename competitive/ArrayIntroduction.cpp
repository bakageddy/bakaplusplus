#include <iostream>

int main(void) {
	int n = 0;
	std::cin >> n;
	std::cout << "Variable is " << n << '\n';
	int arr[n];

	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}

	for (size_t i = 0; i < n; i++) {
		std::cout << arr[n - 1 - i] << " ";
	}
	std::cout << std::endl;
	std::cout << "What the fuck?\n";

	return 0;
}
