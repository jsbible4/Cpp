#include <iostream>


//int getTtal();
// int getTotal(int begin);
int getTotal(int begin = 1, int end = 100);
int getTotal(int* p, int maxSize);

/* 
값을 반환하는 함수 : int, float, char 등등을 사용해서 함수 선언
값을 반환하지 않는 함수 (출력하는 기능만 수행) : void로 선언한다.*/
//  void outDate(...) 함수는 단순히 화면에 출력만 할 뿐, 값을 반환하지 않음.

int main()
{
	std::cout << "1~100 : " << getTotal() << std::endl;
	std::cout << "50~100 : " << getTotal(50) << std::endl;
	std::cout << "30~70 : " << getTotal(30, 70) << std::endl;

	int arr[5] = { 1, 2, 3, 4, 5 };
	std::cout << "배열안의 모든 숫자의 합 : " << getTotal(arr, 5) << std::endl;
	return 0;
}

int getTotal(int begin, int end )
{
	int total = 0;
	for (int i = begin; i <= end; i++)
		total += i;
	return total;
}
// begin ~ end 까지의 합을 total에 출력 

int getTotal(int* p, int maxSize)
{
	int total = 0;
	for (int i = 0; i < maxSize; i++)
	{
		total += *(p + i); // total += p[i]
	}
	return total;

}