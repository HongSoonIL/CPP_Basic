#include <iostream>

using namespace std;

const int SIZE = 8;
int sumArray(int*, int = 1); //int = 1; -> ����Ʈ �Ű����� ����

//�ζ��� �Լ� ����
inline float square(float x) { return x * x; }

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

//�Լ� �����ε� ����� ���� �Լ�
int sumNumber(int, int);
float sumNumber(float, float);

//���ø� ����
template <class Any> //class�Ǵ� typeName���� �ۼ�����
Any sumTemplate(Any, Any);
template <class Any>
Any sumTemplate(int, Any);

int main() {
	//�ζ��� �Լ�
	/*
	�Ϲ����� �Լ� ȣ�� -> �Լ��� �ּҷ� �����ϴ� ����
	�ζ��� �Լ� -> �����ϵ� �Լ� �ڵ尡 ���α׷��� �ٸ� �ڵ忡 ����
	�����Ϸ��� �ζ����Լ� ȣ�� -> ������ �ƴ� �׿� �����ϴ� �Լ� �ڵ�� ��ü
	*/
	int side = 5;
	cout << "�� ���� ���̰� " << side << "�� ���簢���� ���̴�? ";
	float area = square(side);
	cout << area << endl;

	//����Ʈ �Ű����� -> �Լ��� ȣ���Ҷ�, �Ű������� �����ϸ� �⺻���� �Ű������� ����
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArray(arr); //sumArr�Լ��� �迭�� ũ�� �Ķ���͸� ���� -> 6��° �ٿ��� ������ ����Ʈ �Ű������� 1�� �����
	cout << "�Լ��� ������ " << sum << "�Դϴ�\n";
	
	//����(reference): �̸� ���ǵ� ������ ���� �̸� ��� ����� �� �ִ� ��� �̸�
	//�Լ��� �Ű������� ���
	int val;
	int& ref = val;

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "���� ����" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "������ �̿��� ���� ��ȯ\n";
	swapA(wallet1, wallet2);
	cout << "���� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "�����͸� �̿��� ���� ��ȯ\n";
	swapB(&wallet1, &wallet2);
	cout << "�����͸� �̿��� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "���� �̿��� ���� ��ȯ\n";
	swapC(wallet1, wallet2);
	cout << "���� �̿��� ��ȯ ���� ����\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	//�Լ� �����ε� -> ���� ���� �Լ��� ���� �̸����� ������
	//������ ���� �ٸ����� ���� �۾��� �ϴ� �Ϳ� ���
	/*
	<�Լ� �����ε��� ����� �� ���� ���>
	1. �Լ��� �������� �ٸ� ���
	2. �Լ��� ����� ��, �� �� �̻��� �Լ��� �����Ǵ� ���
	*/
	cout << "�� ������ �Է��Ͻʽÿ�. \n";
	int a, b;
	cin >> a >> b;
	cout << "�� ������ ���� " << sumNumber(a, b) << "�Դϴ�.\n";
	cout << "�� �Ǽ��� �Է��Ͻʽÿ�. \n";
	float c, d;
	cin >> c >> d;
	cout << "�� �Ǽ��� ���� " << sumNumber(c, d) << "�Դϴ�.\n";

	//�Լ� ���ø� -> ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����
	int e = 3;
	int f = 4;
	//cout << sumTemplate(a, b) << endl;

	float g = 3; 14;
	float h = 1.592;
	cout << sumTemplate(g, h) << endl;
	cout << sumTemplate(e, g) << endl;

	return 0;
}

int sumArray(int* arr, int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

//������ �����ϴ� ����
void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

//�����ͷ� �����ϴ� ���
void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//������ �����ϴ� ���
void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int sumNumber(int a, int b) {
	return a + b;
}

float sumNumber(float a, float b) {
	return a + b;
}

template <class Any>
Any sumTemplate(Any a, Any b) {
	return a + b;
}

template <class Any>
Any sumTemplate(int a, Any b) {
	return a + b;
}