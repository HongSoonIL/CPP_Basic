/********CPP_Inflearn_Project********
 - 이 프로젝트는 C++에 기본적인 요소들을 학습하기 위해 만들었습니다.
 - 아래의 강의를 바탕으로 제작하였습니다.
 강의 출처: https://www.inflearn.com/course/%ED%95%98%EB%A3%A8-10%EB%B6%84-%EC%94%A8%EC%81%A0%EC%81%A0

 chapter1
  - 변수 선언과 규칙
  - 정수, 실수, 문자, bool형 자료형
  - const 제한자와 데이터형
  - C++ 산술연산자와 auto

 chapter2
  - 배열과 문자열
  - 사용자 입력과 string
  - 구조체
  - 공용체와 열거체
  - 포인터와 메모리 해제, 연산

 chapter3
  - 반복문 for문, 증감연산자, 관계표현식
  - while루프와 do while루프
 
 chapter4
  -	if구문과 if else구문
  - 논리표현식
  - switch구문과 break continue구문

 chapter5
  - 함수
  - 매개변수와 전달인자
  - 함수와 배열, 구조체
  - 재귀함수와 지시하는 포인터

 chapter6
  - 인라인함수, 디폴트 매개변수
  - 참조변수, 함수 오버로딩, 함수 템플릿

 chapter7
  - 분할 컴파일, 추상화, 클래스
  - 클래스 생성자와 파괴자
  - this포인터, 클래스 객체배열

 chapter8
  - 연산자 오버로딩
  - 프렌드, << 연산자 오버로딩

 chapter9
  - 상속
  - public 다형상속
  - 동적결합
*/


#include <iostream> //전처리 지시자

/* c++에서 함수를 사용하고자 하면 
반드시 그 함수의 원형을 미리 정의해야한다 */

using namespace std; //함수 앞에 붙어야 하는 std를 생략

int main() { //main의 이름의 함수가 있어야 한다
	cout << "hello, world!" << endl; // << : 데이터의 방향을 나타냄
}