/*
		������� 
1. �����
2. ����������.
3. 1 ��� ������

4. ���� ������ (?)
*/

#include <iostream>
#include <ctime>

int main() {

	const int N = 8;
	int arr[] = { 5, 8, 3, 3, 4, 0, 7, 1 };
	for (int k = 0; k < N / 2; ++k) {
		int tmp;
		tmp = arr[k];
		arr[k] = arr[N - k - 1];
		arr[N - k - 1] = tmp;
	}
	

	/*
	srand(time(nullptr));
	const int N = 7;
	int a, b;
	std::cout << "Input a b:\n";
	std::cin >> a >> b;
	int arr[N] = {};
	// fill with random numbers
	for (int k = 0; k < N; ++k) {
		arr[k] = rand() % (b - a + 1) + a;
		std::cout << arr[k] << " ";
	}

	std::cout << "\n";
	//task print
	for (int k = 0; k <= N / 2; ++k) {
		std::cout << arr[k] << ' ';
		if (k == N / 2) break;
		std::cout << arr[N - k - 1] << ' ';
	}
	*/

	return 0;
	
	/*
	int matrix[3][2] = {
		{0, 1},
		{1, 1},
		{1, 0}
	};

	//matrix[0, 1]; --> not a compilation error, but
	// 

	int tensor[2][3][4] = {
		{
			{0, 1, 2, 3},
			{2, 1, 2, 3},
			{0, 1, 2, 3}
		},

		{
			{0, 1, 2, 3},
			{0, 1, 2, 3},
			{0, 1, 2, 3}
		}
	};

	*/

	/*
	int arr[3] = { 1, 2, 3 };
	int arr[3]; // - ����� � �������
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	int arr[] = { 1, 2, 3 };
	int arr[3] = {}; // - � ������� ����� ���� {0, 0, 0}
	int arr[3] = { 1, 2 }; // - � ������� ����� {1, 2, 0}
	int arr2[3];
	*/


	//1) arr = arr2; -> error! ��� ������
	//2) arr[100] = 10; - ����� �� ��������� ����� �� ������� �������!
	//   arr[-100] = 200; 
	//3) ������ �� ������ � ���� ���������� � �������. ������ - ����� ������.
	// ���, ��� ��������� � ������ ����� ������ - ������� ���������. � ������� ��������� ����� ������������ sizeof(arr)
	// ����� ������ ������� = sizeof(arr)/sizeof(arr[0])
	// ��������� ������ � ������� ��� ����-�� ���, ����� ���������� ��� ������.
	//4) const int N = 2;
	//   int arr[N] = {1, 2, 3}; - ������ ������� ����� ���� ������ ����������� ����������, ���� ������ ����.
	//
	//	 int N = 2;
	//	 int arr[N] = {1, 2, 3}; - ��� ������ ������!!!

}