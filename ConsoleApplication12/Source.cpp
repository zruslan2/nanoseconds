#include <chrono>
#include <iostream>
#include <stdint.h>

using namespace std;

int main()
{
	auto start_time = std::chrono::steady_clock::now();
	int mas[25000];

	for (int i = 0; i <= 24999; i++)
	{
		mas[i] = i * 10;		
	}
		
	auto end_time = std::chrono::steady_clock::now();
	auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);
	std::cout << elapsed_ns.count() << " ns\n";
	system("pause");
}