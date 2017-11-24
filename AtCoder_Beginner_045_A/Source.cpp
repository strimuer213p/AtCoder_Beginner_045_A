/*
問題文
上底の長さが a、下底の長さが b、高さが h の台形があります。
この台形の面積を求めてください。
*/

#include<iostream>

int main() {
	int up, under, height;
	std::cin >> up >> under >> height;

	std::cout << double((up + under)*height / 2) << std::endl;

	return 0;
}