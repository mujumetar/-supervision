#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ofstream evens("even.txt");
  ofstream odds("odd.txt");

	for(int i=50; i <= 70;i++) 
	{
		if(i % 2 == 0) 
		{
			evens << i << " ";
		}
		else
		{
			odds << i << " ";
		}
	}

 	cout << "updated !!";

  evens.close();
  odds.close();
}