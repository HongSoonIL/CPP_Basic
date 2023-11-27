 
/********************�ҽ����� ���� �� �ʵ�!**********************
  - func.cpp���ϰ� StockFunc.cpp������ ���忡�� ���ܸ� �����ؾ� ��
  ****************************************************************/


/*
<��� ���Ͽ� ���ԵǴ� ����>
1. �Լ� ����
2. #define�̳� const�� ����ϴ� ��ȣ ���
3. ����ü ����
4. Ŭ���� ����
5. ���ø� ����
6. �ζ��� �Լ�
*/

/*   ***���ǻ���***
��� ������ ���� ���Ͽ� ���Խ�ų ��, �ݵ�� �� ���� ���Խ��Ѿ� �� */
#include "struct.h" //��� ���� �ҷ�����
#include "new.h" //���ο� ��� ���� �ҷ����� --> ���� �ذ��� ���� struct.h�� #ifndef�� ���
// new.h������ �ҷ��� ��, struct.h�� #ifndef���� #endif������ �ڵ带 �����ϰ� ����

#include "Stock.h"

int main() {
    //���� ������
    MyStruct PandaCoding = {
        "Panda",
        26,
    };

    display(PandaCoding);


    //�߻�ȭ�� Ŭ����
    /*
    �߻�ȭ: ����� Ư¡�� ������ �������, �����ϱ� ���� ǥ���ϴ� ��
    Ŭ����: �߻�ȭ�� ����� ���� ������������ ��ȯ���ִ� ���� 
    */
    Stock temp;
    temp.acquire("Panda", 100, 1000);
    temp.show();
    temp.buy(10, 1200);
    temp.show();
    temp.sell(5, 800);
    temp.show();
    return 0;
}