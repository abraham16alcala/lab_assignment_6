int search(int numbers[], int low, int high, int value) {
    if (low > high){
	return -1;
}

    int mid = (low + high) / 2;  // calculate the midpoint index

    if (numbers[mid] == value) {  // value found at midpoint
        return mid;
    } else if (numbers[mid] < value) {  // value is in upper half of array
        return search(numbers, mid + 1, high, value);
    } else {  // value is in lower half of array
        return search(numbers, low, mid - 1, value);
    }
}
