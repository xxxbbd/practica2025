#include <iostream>

int count_words(char* str) {
	char* ptr = str;
	int count = 0;
	bool flag = false;
	while (*ptr != 0) {
		if (!flag && *ptr != ' ') {
			flag = true;
			++count;
		}
		else if (flag && *ptr == ' ') {
			flag = false;
		}
		++ptr;
	}
	return count;
}


void reverse_substr(char* str, int n) {
	for (int idx = 0; idx < n / 2; ++idx) {
		std::swap(str[idx], str[n - idx - 1]);
	}
}

void reverse_array(int* arr, int sz) {
	for (int idx = 0; idx < sz / 2; ++idx) {
		std::swap(arr[idx], arr[sz - idx - 1]);
	}
}

void reverse_letters(char* str) {
	char* ptr = str;
	char* start = str;
	int count = 0;
	bool flag = false;
	while (*ptr != 0) {
		if (!flag && *ptr != ' ') {
			flag = true;
			start = ptr;
		}
		else if (flag && *ptr == ' ') {
			flag = false;
			reverse_substr(start, count);
			count = 0;
		}
		if (flag) {
			++count;
		}
		++ptr;
	}
}

void shift_array(int* arr, int size, int shift) {
	shift %= size;
	reverse_array(arr, size);
	reverse_array(arr, shift);
	reverse_array(arr + shift, size - shift);
}

double mean(int* arr, int sz) {
	int sum = 0;
	int count = 0;
	for (int k = 0; k < sz; ++k) {
		sum += arr[k];
		++count;
	}
	return sum / count;
}

void snake_array(int** arr, int N, int M) {
	int x = 1;
	for (int k = 0; k < N; ++k) {
		if (k % 2 == 0) {
			for (int j = 0; j < M; ++j) {
				arr[k][j] = x;
				++x;
			}
		}
		else {
			for (int j = M - 1; j >= 0; --j) {
				arr[k][j] = x;
				++x;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	int x = 5;
	const int* ptr = &x;
	const_cast<int*>(ptr); // так можно, но в крайнем случае
	// const_cast работает только с указателями или ссылками
	// const int x = 5;
	// int* ptr = &x - нельзя
	//char str[] = "one two  three ";
    //std::cout << count_words(argv[1]) << '\n';
	//reverse_letters(str);

	//const int SZ = 6;
	//int arr[SZ] = {5, 8, 1, 0, 6, 4};
	//shift_array(arr, SZ, 2);
	//for (int k = 0; k < 6; ++k) {
	//	std::cout << arr[k] << ' ';
	//}

	//int size;
	//std::cin >> size;
	//int* arr = new int[size];
	//for (int k = 0; k < size; ++k) {
	//	arr[k] = rand() % 100;
	//}
	//for (int k = 0; k < size; ++k) {
	//	std::cout << arr[k] << ' ';
	//}
	//std::cout << '\n';
	//std::cout << mean(arr, size) << '\n';
	//delete[] arr;

	int N, M;
	std::cin >> N >> M;
	int** arr = new int* [N];
	for (int k = 0; k < N; ++k) {
		arr[k] = new int[M];
	}
	snake_array(arr, N, M);
	for (int k = 0; k < N; ++k) {
		for (int j = 0; j < M; ++j) {
			std::cout << arr[k][j] << ' ';
		}
		std::cout << '\n';
	}
	for (int k = 0; k < N; ++k) {
		delete[] arr[k];
	}
	delete[] arr;
	return 0;
}