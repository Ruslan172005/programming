#include <iostream>

using namespace std;
int main() {

	setlocale(LC_ALL, "UKR");

	// ���������� ����� ��� ���������� ����� 27
	int number = 27;

	// ���������� �������� ����� 27 � ���������� ���� � ����� square
	int square = number * number;

	// ���������� ���� ����� 27 � ���������� ���� � ����� cube
	int cube = number * number * number;

	// ��������� ���������� �� �����
	std::cout << "������� ����� 27: " << square << std::endl;
    std::cout << "��� ����� 27: " << cube << std::endl;

	return 0;
}