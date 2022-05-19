int find_pivot(int *arr, int left, int right) {
	int pivot = arr[left];
	while (left < right) {
		while (arr[right] > pivot && left < right) {
			right--;
		}
		arr[left] = arr[right];
		while (arr[left] <= pivot && left < right) {
			left++;
		}
		arr[right] = arr[left];
	}
	arr[left] = pivot;
	return left;
}

void quick_sort(int *arr, int left, int right) {
	if (right <= left) {
		return;
	}
	int pivot = find_pivot(arr, left, right);
	quick_sort(arr, left, pivot - 1);
	quick_sort(arr, pivot + 1, right);
}
