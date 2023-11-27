#include <iostream>
#include <climits>
//#define PIE 3.1415926535 //���� ��� ���� (c��� ��Ÿ��)

using namespace std;

int main() {
	//����
	int var;
	var = 5;

	/* <���� �̸� ���� ��>
	1. ���ڷ� ���� �Ұ�
	2. c++���� ����ϰ� �ִ� Ű����� ����� �� ����
	3. white space�� ����Ҽ� ����
	*/

	//������
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�" << endl;
	cout << "int����Ʈ�� �ִ밪�� " << n_int << "����Ʈ�̴�" << endl;
	cout << "short�� " << sizeof n_short << "����Ʈ�̴�" << endl;
	cout << "short����Ʈ�� �ִ밪�� " << n_short << "����Ʈ�̴�" << endl;
	cout << "long�� " << sizeof n_long << "����Ʈ�̴�" << endl;
	cout << "long����Ʈ�� �ִ밪�� " << n_long << "����Ʈ�̴�" << endl;
	cout << "long long�� " << sizeof n_llong << "����Ʈ�̴�" << endl;
	cout << "long long����Ʈ�� �ִ밪�� " << n_llong << "����Ʈ�̴�" << endl;

	//unsinged �ڷ��� -> ���� ������ �������� �ʰ� ����κ� ����Ʈ�� �ִ밪�� 2�谡 ��
	unsigned short unsignedVar = -1; //���� b�� -1�� ������
	cout << unsignedVar << endl; //unsigend short����Ʈ�� �ִ밪�� 65535�� ���´�

	//�Ǽ���
	float floatC = 3.14;
	int intD = 3.14;
	cout << floatC << " " << intD << endl;

	//���� ������
	char arr[] = {'x', 'y', 'z', '\0'};
	cout << arr << endl;
	//null���� '\0' -> char�迭�� �������� ��Ȯ�ϰ� ǥ���ϱ� ����
	//"" -> ��������� null�� ���� (string �ڷ���)

	//bool: 0 �Ǵ� 1
	bool a1 = 0;
	bool b1 = 1;
	bool c1 = 10; //0�̿��� ���� 1�� ���
	cout << a1 << b1 << c1 << endl;

	//���� ���̸� ���ϴ� ���α׷�
	//���� ���� = ������ * ������ * PIE

	const float PIE = 3.1415926535; //��� ����

	//�������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/

	int p = 3.14;
	cout << p << endl; //�����κи� ���

	//���������� ������ ��ȯ
	char ch = 'M';
	//typeName(a) (typeName)a
	cout << (int)ch << " " << int(ch) << endl; //�ƽ�Ű�ڵ忡�� �ش�Ǵ� ���� ���
	//static_cast<int>(ch)
	cout << static_cast<int>(ch) << endl; //�ƽ�Ű�ڵ忡�� �ش�Ǵ� ���� ���

	//���������
	/*
	+:���ϱ� -:���� *:���ϱ� /:������
	>>: �� ���� �ǿ����ڰ� ��� �����̸� ������� '��'
	%: ù ��° �ǿ����ڸ� �� ��° �ǿ����ڷ� �������� ������
	*/
	int a = 10;
	int b = 3;

	cout << "������� " << a + b << endl;
	cout << "������� " << a - b << endl;
	cout << "�������" << a * b << endl;
	cout << "��������� " << a / b << endl;
	cout << "������ " << a % b << endl;

	//auto
	//�ڵ����� �ڷ����� ���� (�� ���� �ʴ´�)
	auto x = 100; //x�� int
	auto y = 1.5; //y�� float
	auto z = 1.3e12L; //z�� long long

	return 0;
}