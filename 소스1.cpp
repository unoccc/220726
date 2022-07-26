#include <iostream>
using namespace std;
int arr[5] = { 4,2,9,1,5 };
void run(int x) {
	if (x == 5) {
		return;
	}
	cout << arr[x] << " ";
	run(x + 1);
	cout << arr[x] << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	run(0);

	return 0;
}