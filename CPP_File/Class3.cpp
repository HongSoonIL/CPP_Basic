#include <iostream>

using namespace std;

int main() {

	/*
	* <for�� �۵� ����>
	1. �ݺ����� ����� ī������ ���� �ʱ�ȭ
	2. �ݺ����� ������ ������ '���� �˻�'
	3. �ݺ��� ��ü�� ����
	4. ī������ �� ��ȭ
	*/

	/*
	for (int i = 0; i < 5; i++) {
		cout << i << "��°�Դϴ�" << endl;
	}
	*/

	//���� ������, ���� ������
	int a = 10;
	int b = 10;
	cout << "a++: " << a++ << endl; //a��� ��, 1�� ����
	cout << "++b: " << ++b << endl; //1�� ���� ��, b�� ��� ��
	cout << "after a++: " << a << endl; 

	//while
	string str = "hong";
	int j = 0;
	while (str[j] != '\0') {
		cout << str[j] << endl;
		j++;
	}

	int k = 0;
	do {
		cout << "while���Դϴ�\n";
		k++;
	} while (k < 3);

	//�迭 ��� �ݺ���
	int arr[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << arr[i];
	}
	cout << "\n";
	for (int i : arr) {
		cout << i;
	}
	cout << "\n";

	//��ø ���� --> 2���� �迭
	int temp[4][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	return 0;
}