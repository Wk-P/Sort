#include <iostream>
#include <time.h>

using namespace std;

void InsertSort(int *arr, int size) {
	for (int i = 1; i < size; i++) {
		int temp = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > temp) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

int main() {

	int* arr = new int[10];
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 41 + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	InsertSort(arr, 10);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
