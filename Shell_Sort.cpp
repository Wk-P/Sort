#include <iostream>
#include <time.h>

using namespace std;

void shellsort(int* arr, int size) {
	for (int step = size / 2; step > 0; step /= 2) {
		for (int i = step; i < size; i++) {
			int temp = arr[i];
			int j = i - step;
			while (j >= 0 && arr[j] > temp) {
				arr[j + step] = arr[j];
				j -= step;
			}
			arr[j + step] = temp;
		}
	}
}

int main() {

	int* arr = new int[10];
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 55 + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	shellsort(arr, 10);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
