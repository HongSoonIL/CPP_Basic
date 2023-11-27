 
/********************소스파일 실행 전 필독!**********************
  - func.cpp파일과 StockFunc.cpp파일을 빌드에서 제외를 해제해야 함
  ****************************************************************/


/*
<헤더 파일에 포함되는 내용>
1. 함수 원형
2. #define이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 클래스 선언
5. 템플릿 선언
6. 인라인 함수
*/

/*   ***주의사항***
헤더 파일을 여러 파일에 포함시킬 때, 반드시 한 번만 포함시켜야 함 */
#include "struct.h" //헤더 파일 불러오기
#include "new.h" //새로운 헤더 파일 불러오기 --> 오류 해결을 위해 struct.h에 #ifndef를 사용
// new.h파일을 불러올 때, struct.h에 #ifndef부터 #endif까지의 코드를 무시하고 실행

#include "Stock.h"

int main() {
    //분할 컴파일
    MyStruct PandaCoding = {
        "Panda",
        26,
    };

    display(PandaCoding);


    //추상화와 클래스
    /*
    추상화: 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것
    클래스: 추상화를 사용자 정의 데이터형으로 변환해주는 수단 
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
