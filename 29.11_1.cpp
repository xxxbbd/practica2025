#include <iostream>
#include <fstream>

int** create2dArray(int rows, int cols) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	return arr;
}

void delete2dArray(int** arr, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void print2dArray(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}

void read2dArrayFromFile(std::ifstream& in, int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			in >> arr[i][j];
		}
	}
}

void square2dArray(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] *= arr[i][j];
		}
	}
}

void print2dArrayToFile(std::ofstream& out, int** arr, int rows, int cols) {
	out << rows << ' ' << cols << '\n';
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			out << arr[i][j] << ' ';
		}
		out << '\n';
	}
}

void output2dArray(int** arr, int rows, int cols, std::ostream& out = std::cout) {
	out << rows << ' ' << cols << '\n';
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			out << arr[i][j] << ' ';
		}
		out << '\n';
	}
}

int read2dArrayFromFile(const char* path) {
	std::ifstream in(path);
	if (!in) {
		return 1;
	}
	return 0;
}

int foo_errcode(double x) {
	if (x == 0.0) {
		return 1;
	}
	return 0;
}

void foo_exception(double x) {
	if (x == 0.0) {
		throw 1;
	}
	double y = x * 2;
}

//int some_actions(double x) {
//	//...
//	int res = foo_errcode(x);
//	if (res != 0) {
//		return res;
//	}
//}


void some_actions(double x) {
	foo_errcode(x);
}

//int thirdFunction(double x) {
//	int res = some_actions(x);
//	if (res != 0) {
//		return res;
//	}
//}

void thirdFunction(double x) {
	some_actions(x);
}


int main() {
	std::ifstream in("in.txt");
	if (!in) {
		std::cerr << "Failed to open the input file\n";
		return 1;
	}
	int rows;
	int cols;
	in >> rows >> cols;
	//Allocate array
	int** arr = create2dArray(rows, cols);
	//Read array from file
	read2dArrayFromFile(in, arr, rows, cols);
	//Print array
	output2dArray(arr, rows, cols);
	//print2dArray(arr, rows, cols);

	std::ofstream out("out.txt");
	if (!out) {
		std::cerr << "Failed to open the output file\n";
		return 2;
	}
	output2dArray(arr, rows, cols, out);
	//print2dArrayToFile(out, arr, rows, cols);

	//Delete array
	delete2dArray(arr, rows);
	std::cout << '\n';

	double x;
	std::cin >> x;
	int res = foo_errcode(x);
	if (res == 1) {
		std::cerr << "Error\n";
		return 1;
	}

	try {
		some_actions;
	}
	catch(int ex) {
		std::cerr << "Error\n";
		return 1;
	}
	return 0;
}