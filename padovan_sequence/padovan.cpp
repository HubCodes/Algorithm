#include <iostream>
#include <vector>

unsigned long long padovan(int n) {
	std::vector<unsigned long long> result;
	result.push_back(1);
	result.push_back(1);
	result.push_back(1);

	if (n >= 0 && n <= 2) return 1;

	for (int i = 3; i <= n; i++) {
		result.push_back(result[i-2] + result[i-3]);
	}
	return result[n - 1];
}
int main(void) {

	int n;
	std::cin >> n;

	std::vector<int> cases;
	int temp;

	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		cases.push_back(temp);
	}
	for (int i = 0; i < n; i++) {
		std::cout << padovan(cases[i]) << '\n';
	}

		
	return 0;
}
