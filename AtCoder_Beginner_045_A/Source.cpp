/*
��蕶
���̒����� a�A����̒����� b�A������ h �̑�`������܂��B
���̑�`�̖ʐς����߂Ă��������B
*/

#include<iostream>

int main() {
	int up, under, height;
	std::cin >> up >> under >> height;

	std::cout << double((up + under)*height / 2) << std::endl;

	return 0;
}