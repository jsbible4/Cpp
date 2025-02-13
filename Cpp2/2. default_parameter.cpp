#include <iostream>


//int getTtal();
// int getTotal(int begin);
int getTotal(int begin = 1, int end = 100);
int getTotal(int* p, int maxSize);

/* 
���� ��ȯ�ϴ� �Լ� : int, float, char ����� ����ؼ� �Լ� ����
���� ��ȯ���� �ʴ� �Լ� (����ϴ� ��ɸ� ����) : void�� �����Ѵ�.*/
//  void outDate(...) �Լ��� �ܼ��� ȭ�鿡 ��¸� �� ��, ���� ��ȯ���� ����.

int main()
{
	std::cout << "1~100 : " << getTotal() << std::endl;
	std::cout << "50~100 : " << getTotal(50) << std::endl;
	std::cout << "30~70 : " << getTotal(30, 70) << std::endl;

	int arr[5] = { 1, 2, 3, 4, 5 };
	std::cout << "�迭���� ��� ������ �� : " << getTotal(arr, 5) << std::endl;
	return 0;
}

int getTotal(int begin, int end )
{
	int total = 0;
	for (int i = begin; i <= end; i++)
		total += i;
	return total;
}
// begin ~ end ������ ���� total�� ��� 

int getTotal(int* p, int maxSize)
{
	int total = 0;
	for (int i = 0; i < maxSize; i++)
	{
		total += *(p + i); // total += p[i]
	}
	return total;

}