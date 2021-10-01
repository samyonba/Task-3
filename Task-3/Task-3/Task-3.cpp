
#include <iostream>
#include <list>

void append_average(std::list<double>& list)
{
	if (list.empty())
		return;
	double sum = 0;
	for (auto a : list)
	{
		sum += a;
	}
	//list.push_back(sum/static_cast<double>(list.size()));
	list.push_back(sum / list.size());
}

int main()
{
//---------- Задание 1 ----------

    std::list<double> myDoubleList = { 2.2, 3.3, 4.4, 5.5 };

	for (auto i : myDoubleList)
		std::cout << i << " ";
	std::cout << std::endl;

    append_average(myDoubleList);

	for (auto i : myDoubleList)
		std::cout << i << " ";
	std::cout << std::endl;

//-------------------------------

//---------- Задание 2 ----------


//-------------------------------

//---------- Задание 3 ----------


//-------------------------------
}
