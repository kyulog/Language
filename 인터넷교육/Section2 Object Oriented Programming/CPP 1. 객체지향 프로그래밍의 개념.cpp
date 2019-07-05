https://github.com/codenuri/CPP1/tree/master/SECTION2/01_OOP
=============객체 지향 프로그래밍의 개념=============
1. "현실 세계에 존재"하는 것들
2. "어떠한 데이터 타입이 있다면"편리하지 않을까?
--> C언어의 "구조체를 사용하면 새로운 타입"을 만들 수 있다.

1. 프로그램에서 필요한 타입을 먼저 설계한다.
2. 현실세계에 존재하는 사물은 "상태"와 "동작"이 있다.
3. 타입을 설계할때
--> 상태와 동작을 표현할 수 있어야 한다.
--> "상태는 변수" "동작은 함수"로 표현한다.
4. C의 구초제와 C++의 구조체
--> C : 데이터 만 포함 할 수 있다.
--> C++ : 데이터 뿐 아니라 "함수도 포함 할 수" 있다.

struct Complex
{
    double real;
    double image;
};

Complex add(const Complex& c1, const Complex& c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.image = c1.image + c2.image;
    
    return temp;
}

int main()
{
    Complex c1 = { 1, 1}; // 1 + 1i
    Complex c2 = { 2, 2}; // 2 + 2i
    
    Complex ret = add(c1, c2);    
}

=============예제로 배우는 OOP #1=============
1. "상태를 나타내는 데이터와 상태를 조작하는 함수를 묶는다."
--> C++언어는 "구조체가 함수를 포함"할 수 있다.
--> 멤버 함수와 멤버 데이터
--> 멤버 함수에서는 멤버 데이터에 접근할 수 있다.
2. 접근 지정자
private
public
2. 정보 은닉( Information hiding) encapsulation, 
--> 멤버 변수를 외부에서 직접 접근할 수 없게 하고, 멤버 함수를 통해서만 멤버 변수에 접근하게 한다.
--> 외부의 잘못된 사용으로 객체의 상태가 불안정 해지는 것을 막는다.

3. struct vs class
--> struct : 접근지정자 생략시 디폴트가 public
--> class : 접근지정자 생략시 디폴트가 private

=============예제로 배우는 OOP #2=============
자동 초기화 : 
1. 생성자
--> 클래스 이름과 동일한 이름을 가지는 함수
--> 리턴 타입을 표기하지 않는다.
-->변수(객체)를 생성하면 자동으로 생성자를 호출한다.

2. 소멸자
--> ~클래스 이름()의 모양의 함수
--> 리턴 타입을 표기하지 않으며 인자도 가질 수 없다.
--> 객체가 파괴 될때 자동으로 호출
--> 객체가 생성자에서 자원을 할당한 경우 소멸자에서 자원을 반납한다.
    1. 사용자가 스택의 버퍼 크기를 변경 할 수 있도록
    --> 배열이 아닌 메모리 동적 할당 사용
    int * a, a = new int[size];

3. 파일 분할
    1. 클래스를 만드는 일반적인 방법
        --> 클래스의 선언 안에는 멤버 데이터와 멤버 함수의 선언만 포함 한 후 헤더 파일에 넣는다.
        --> 멤버 함수의 구현부는 변도의 소스파일로 제공한다.
    주의사항
    --> 클래스를 켐플릿으로 만들 시 함수의 구현부도 반드시 헤더 파일에 있어야 한다.
    --. 멤버함수를 클래스 외부에 구현할 수 있지만 외부구현 자체도 헤더에 놓아야 한다.

=============Programming Paradigm=============
변수과 객체
1. 변수
--> 변수를 사용하면 메모리에 값을 읽거나 쓸 수 있다.
--> 언어가 제공하는 "기본타입 primitive type의 인스턴스"

객체
--> 메모리를 할당하고 "자신을 스스로 초기화"한다.
--> 상태와 동작을 가지고 있는 존재
--> 객체를 사용하면 해당 "객체가 제공하는 다양한 서비스를 사용"할 수 있다.
--> "사용자 정의 타입 (User Define Type)으로 만든 변수"

프로그램이란 무엇인가?
1. 명령형(절차적)프로그래맹 패러다임
--> "컴퓨터가 수행할 명령어들의 나열"
--> 순차적으로 실행
--> 제어문 반복문 함수 등을 사용해서 실행 흐름을 변경 할 수 있다.

2. 객체지향 프로그램이 패러다임
--> "객체들과 객체들 사이의 메시지"
--> 문제를 해결하기 위해 "필요한 타입을 찾아내고, 설계" 한 후
--> "객체를 생성"하고 "객체끼리 메시지를 주고 받으면서 문제 해결"

3. C++은 다중 패러다임 언어이다
--> 명령형(절차적)프로그래밍 패러다임 지원
--> 객체 지향 프로그래밍 패러다임 지원
--> 일반화 포르그래밍 패러다임 지원 - 템블릿
--> 함수형 프로그래밍 패러다임 지원


=============STL/ Stack/ Vector=============
C++ 표준과 stack
1. STL : Standard Template Library
2. STL에서 제공하는 stack
--> <stack>헤더
--> 클래스 켐플릿으로 되어있다.

C++ 표준과 vector
--> 배열과 유사하게 연속된 메모리를 사용하는 컨테이버
--> 배열과 동일한 방법을 사용가능 - []
--> 크기를 조절할 수 있다. - resize 멤버함수
x.resize(20);