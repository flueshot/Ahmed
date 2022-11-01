// punkter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Swedish_Sweden"); //Svensk språk så vi kan använda ä, å , ö

	int value; //vi kommer låta användaren o skriva in antal rader
	string star = "*"; // Detta använder vi för o kunna göra en output senare när vi vill printa ut *
	
	do{
	std::cout << "mata in antal rader (0 för avslut): ";  //frågan som vi vill ställan användaren
	std::cin >> value; //inmatningen av användaren för antal rader

	for (int i = 0; i < value; i++) {   //första forloop för antal rader då om value är 5 ger den oss 5 rader
		for (int k = 0; k <= i; k++) { //printar ut antal stjänor för antal rader om int i = 1 då är första raden en stjärna om i = 2 då är nästa rad 2 stjänor etc.
			std::cout << star; //string print
		}
		std::cout << endl; // radbrytare skappar nya rader för varje loop som körs
		}
	} while (value != 0); // vi använder en do while loop do om value är 0 ska den avbryta programet om inte då ställer den frågan igen
	return 0;
}
