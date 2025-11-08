#include <iostream>

bool startswith(char* src, char* str) {
	//int count = 0;
	while (*str != 0) {
		if (*src == 0 || *src != *str) {
			return false;
		}
		++str;
		++src;
		//++count;
	}
	//str -= count;
	return true;
}

int substring(char* src, char* str) {
	int idx = 0;
	while (*src != 0) {
		if (*str = *str) {
			if (startswith(src, str)) {
				return idx;
			}
		}
		++src;
		++idx;
	}
	return -1;
}

void replace_one(char* str) {
	char one[] = "one";
	while (*str != 0) {
		if (startswith(str, one)) {
			*str = '1';
			for (int k = 1; k < strlen(str); ++k) {
				str[k] = str[k + 2];
			}
		}
		++str;
	}
	return;
}
	//int len_str = 0;
	//while (*str != 0) {
	//	++len_str;
	//	++str;
	//}
	//str -= len_str;
	//while (*src != 0) {
	//	if (*src == *str) {
	//		for (int k = 0; k < len_str; ++k) {
	//			if (*src != *str) {
	//				break;
	//			}
	//			++src;
	//			++str;
	//		}
	//		return true;
	//	}
	//}

int main(int argc, char* argv[]) {
	if (argc == 2) {
		replace_one(argv[1]);
		std::cout << argv[1] << '\n';
	}
	else {
		std::cout << "Not enough args\n";
	}

	//if (argc == 3) {
	//	std::cout << substring(argv[1], argv[2]);
	//}
	//else {
	//	std::cout << "Not enough args\n";
	//}

	//if (argc > 1) {
	//	int idx = 0;
	//	while (argv[1][idx] != 0) {
	//		char c = argv[1][idx];
	//		if (c >= 'a' && c <= 'z') {
	//			std::cout << (char) (c - 'a' + 'A');
	//		}
	//		else {
	//			std::cout << c;
	//		}
	//		++idx;
	//	}
	//}
	//else {
	//	std::cout << "Error" << '\n';
	//}

	return 0;
}