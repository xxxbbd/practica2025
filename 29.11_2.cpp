#include <iostream> 
#include <fstream>

int main() {
	const int N = 5;
	int arr[N] = { 12345678, 87654321, 12348765, 43215678, 43218765 };
	// 1 text output
	std::ofstream out("out.txt");
	for (int i = 0; i < N; i++) {
		out << arr[i] << ' ';
	}
	out.close();
	// 2 read text input
	int dest[N];
	std::ifstream in("in.txt");
	for (int i = 0; i < N; i++) {
		in >> dest[i];
	}

	// 3 bin output
	std::ofstream out_bin("out_bin.txt", std::ios::binary);
	// this would be still text
	//for (int i = 0; i < N; i++) {
	//	out_bin << arr[i] << ' ';
	//}
	out_bin.write(reinterpret_cast<char*>(arr), N * sizeof(arr[0]));
	out_bin.close();

	// 4 bin input
	std::ifstream in_bin("out_bin.txt", std::ios::binary);
	int in_buf[N] = {};
	in_bin.read(reinterpret_cast<char*>(in_buf), N * sizeof(arr[0]));
	for (int i = 0; i < N; i++) {
		std::cout << in_buf[i] << ' ';
	}

	/*
	char str[32] = {};
	std::ifstream in("in.txt", std::ios::binary);
	if (!in) {
		return 1;
	}
	//read until the first separator
	//in >> str;

	in.get(str, 31);
	std::cout << str << '\n';
	// explicit newline read
	in.get();
	in.get(str, 31);
	std::cout << str;

	in.getline(str, 31);
	std::cout << str << '\n';
	in.getline(str, 31);
	std::cout << str << '\n';
	return 0;

	//read symbol by symbol
	int count = 0;
	while (!in.eof() && count < 31) {
		str[count++] = in.get();
	}

	//read any character
	in.read(str, 31);
	std::cout << strlen(str) << '\n';
	*/


	return 0;
} 