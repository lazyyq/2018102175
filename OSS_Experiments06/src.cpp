#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 8; ++i) {
		for (int j = 1; j <= 9; ++j) {
			printf_s("%d x %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}
