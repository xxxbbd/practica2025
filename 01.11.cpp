#include <iostream>
#include <cstring>

int main() {

	int n = 10;
	int* ptr = &n;
	*ptr = 20;
	int arr[] = { 1, 2, 3 };
	std::cout << arr[1] << " " << *(arr + 1) << "\n";
	std::cout << 1[arr] << "\n";

	*(arr + 1) = 10;
	int num = 333;

	for (int i = -20; i < 20; ++i) {
		std::cout << *(arr + i) << " ";
	}
	std::cout << "\n";

	char* bytes = (char*)&n;


	//int* ptr = &num;
	//*ptr = 300;
	//std::cout << num << "\n";
	//
	// 1) *()
	// 2) = присваивание
	// 3) -, + (type*, int) сдвиг -> *(type +- int)
	// 4) ++, --, +=, -=
	// 5) - (type*, type*)
	// 6) сравнение <, >, ==, !=, <=, >=


	// # 3 task 
	//unsigned long long n;
	//std::cin >> n;
	//char bin_str[65] = {};
	//int idx = 0;
	//while (n > 0) {
	//	bin_str[idx++] = (n % 2) + '0';
	//	n /= 2;
	//}

	//for (int i = 0; i < idx / 2; ++i) {
	//	char tmp = bin_str[idx - i - 1];
	//	bin_str[idx - i - 1] = bin_str[i];
	//	bin_str[i] = tmp;
	//}
	//std::cout << bin_str << "\n";

	//char bin_str[65] = {};
	//std::cin >> bin_str;
	//int n = strlen(bin_str);
	//unsigned long long result = 0;
	//int x_deg = 1;
	//for (int idx = n - 1; idx >= 0; --idx) {
	//	result += (bin_str[idx] - '0') * x_deg;
	//	x_deg *= 2;
	//}
	//std::cout << result << "\n";

	// char str[] = "Hello"; // '\0' in the end
	// sizeof(str) = 6
	// 'H' 'e' 'l' 'l' 'o' 0 ('\0')
	// char str = {'H', 'e', 'l', 'l', 'o'} - no '\0' in the end (it's bad)
	// char str[] = {'H', 'e', 'l', 'l', 'o', 0} - ok
	// char str[6] = {'H', 'e', 'l', 'l', 'o'} - ok


    // # 2 task
	//int coef[] = { 1, 2, 1 };
	//int n = sizeof(coef) / sizeof(coef[0]);
	//int x;
	//std::cin >> x;
	//int sum = 0;

	//int x_deg = 1;
	//for (int idx = 0; idx < n; ++idx) {
	//	sum += coef[idx] * x_deg;
	//	x_deg *= x;
	//}

	//best solution
	// a_3 * x^3 + a_2 * x^2 + a_1 * x^1 + a_0
	// ((a_3 * x + a_2) * x + a_1) * x + a_0
	// sum = (...(coef[n - 1] * x + coef[n - 2]) * x + coef[n - 3]) * x + ...) * x + coef[0];
	//sum = coef[n - 1];
	//for (int idx = n - 2; idx >= 0; --idx) {
	//	sum = sum * x + coef[idx];
	//}
	//std::cout << sum << "\n";


	// # 1 task
	//int N;
	//std::cin >> N;
	//int num_copy = N;
	//int sum = 0;
	//int deg10 = 1;
	//while (N != 0) {
	//	sum += N % 10;
	//	N /= 10;
	//	deg10 *= 10;
	//}
	//deg10 /= 10;

	//N = num_copy;
	//while (deg10 != 0) {
	//	int digit = N / deg10;
	//	std::cout << digit << ", ";
	//	N %= deg10;
	//	deg10 /= 10;
	//}

	//std::cout << "\n";

	return 0;
}