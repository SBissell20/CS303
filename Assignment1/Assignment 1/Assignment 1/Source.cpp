#include <iostream>
using namespace std;
int main() {
	int y1, y2;

	for (int n = 0; n < 100; n += 10) {
		y1 = 100 * n + 10;
		y2 = 5 * n * n + 2;
		cout << "y1 = " << y1 << "\ty2 = " << y2 << endl;
	}

	return 0;
}
