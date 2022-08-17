//cpp는 매개변수의 형태만 다르다면 함수의 명칭이 같아도 컴파일된다. 이를 함수 오버로딩이라 한다. c와의 차이점이다.
//반환형이 다른 경우는 오버로딩이 되지 않는다. 반환형에 따라 출력이 달라진다. void 제외 return이 필요하다.

#include <iostream>

void MyFunc()
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main()
{
	MyFunc();
	MyFunc('A');//char 형의 경우 ''가 필요하다.
	MyFunc(12, 13);
	return 0;
}