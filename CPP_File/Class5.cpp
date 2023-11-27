#include <iostream>

using namespace std;

const float PIE = 3.14;
const int SIZE = 8;
const int minsPerHr = 60;

//����ü ����
struct Time {
	int hours;
	int mins;
};

//����ϴ� �Լ� ���� ����
void cheers(int n);
float circle(int x);
void helloCPP(int n, int m);
int sumArr(int[], int);
int sumArrPt(int*, int*);
void showTime(Time);
void countDown(int);
int func(int);


//����ü �Լ� ����
Time sumTime(Time*, Time*);

int main() {
	int a;
	cout << "�ϳ��� ���� �Է��Ͻÿ�: ";
	cin >> a;
	cheers(a); //�Լ� ȣ��

	int b;
	cout << "���� �������� �Է��Ͻÿ�: ";
	cin >> b;
	float c = circle(b); //�Լ� ȣ��
	cout << "\n���� ���̴� " << c << "�Դϴ�" << endl;

	int times, times2;
	cout << "������ �Է��Ͻÿ�: ";
	cin >> times;
	cout << "\n������ �� �� �� �Է��Ͻÿ�: ";
	cin >> times2;
	helloCPP(times, times2);

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArr(arr, SIZE);
	cout << "�Լ��� ������ " << sum << "�Դϴ�\n";

	int sumPt = sumArrPt(arr, arr + SIZE);
	cout << "�Լ��� " << SIZE << "������ ���� " << sumPt << "�Դϴ�\n";
	int n = 0;
	cout << "�ε��� ���ڸ� �Է��Ͻÿ�: ";
	cin >> n;
	sumPt = sumArrPt(arr, arr + n);
	cout << "�Լ���" << n << "��° �ε��� ������ ���� " << sumPt << "�Դϴ�\n";

	Time day1 = { 5, 45 };
	Time day2 = { 4, 55 };

	Time totalTime = sumTime(&day1, &day2);

	cout << "��Ʋ�� �ҿ� �ð� : ";
	showTime(totalTime);

	//��� ȣ��: �Լ��� �ڱ� �ڽ��� ȣ��
	countDown(5);

	//�Լ��� �����ϴ� ������
	//��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ���, �����ϰ� ��밡��
	/*
	* <������>
	1. �Լ��� �ּҸ� ���� (�Ķ���ʹ� �����ϰ� �Լ� �̸��� �ۼ��ϸ� �� )
	2. �Լ��� �����ϴ� �����͸� ����
	3. �Լ��� �����ϴ� �����͸� ����Ͽ� �� �Լ��� ȣ��
	*/
	int(*pf)(int);
	pf = func;
	cout << (*pf)(3) << endl;
	
	return 0;
}

//�Լ� ����
void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

void helloCPP(int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "hello c++\n";
	}
	for (int j = 0; j < m; j++) {
		cout << "C++\n";
	}
}

int sumArr(int arr[], int n) { //�迭�� ���ҵ��� ���ϴ� �Լ�
	int total = 0; 
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

int sumArrPt(int* begin, int* end) { //�����͸� �̿��Ͽ� �Լ��� n��° �ε��� ������ ���� ���ϴ� �Լ�
	int totalPt = 0;
	int* pt;

	for (pt = begin; pt != end; pt++) {
		totalPt += *pt;
	}

	return totalPt;
}


	Time sumTime(Time* t1, Time* t2) {
		Time totalTime;
		//������ �ɹ��� ������ ��: .
		//�ּҿ��� �ɹ��� ������ ��(������ �̿�): ->

		totalTime.mins = (t1->mins + t2->mins) % minsPerHr;
		totalTime.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;

		return totalTime;
	}

	void showTime(Time t1) {
		cout << t1.hours << "�ð� " << t1.mins << "�� �Դϴ�." << endl;
	}

	void countDown(int n) {
		cout << "Counting..." << n << endl;
		if (n > 0) { //countDown(0)�� �ɶ����� �ݺ�����
			countDown(n - 1);
		}
		cout << "n��° ����Լ� " << endl;
	}

	int func(int n) {
		return n + 1;
	}