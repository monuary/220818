//cpp�� �Ű������� ���¸� �ٸ��ٸ� �Լ��� ��Ī�� ���Ƶ� �����ϵȴ�. �̸� �Լ� �����ε��̶� �Ѵ�. c���� �������̴�.
//��ȯ���� �ٸ� ���� �����ε��� ���� �ʴ´�. ��ȯ���� ���� ����� �޶�����. void ���� return�� �ʿ��ϴ�.

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
	MyFunc('A');//char ���� ��� ''�� �ʿ��ϴ�.
	MyFunc(12, 13);
	return 0;
}