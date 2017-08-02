#include <iostream>

int find, count;

void search(int num) {
	while (1) {
		if (num / 10 > 0 && num % 10 == find) count++;
		if (num > 10) num /= 10;

		else if (num <= 10) {
			if (num == find) {
				count++;
			} else if (num / 10 == find && find != 0) {
				count++;
			}
			break;
		}
		else break;
	}
}

int main(void) {
	int a, b, k;
	std::cin >> a >> b >> k;

	find = k;
	count = 0;

	for (; a <= b; a++) {
		search(a);
	}
	std::cout << count << '\n';
}

