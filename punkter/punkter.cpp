// punkter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Swedish_Sweden"); //Svensk spr�k s� vi kan anv�nda �, � , �

	int value; //vi kommer l�ta anv�ndaren o skriva in antal rader
	string star = "*"; // Detta anv�nder vi f�r o kunna g�ra en output senare n�r vi vill printa ut *
	
	do{
	std::cout << "mata in antal rader (0 f�r avslut): ";  //fr�gan som vi vill st�llan anv�ndaren
	std::cin >> value; //inmatningen av anv�ndaren f�r antal rader

	for (int i = 0; i < value; i++) {   //f�rsta forloop f�r antal rader d� om value �r 5 ger den oss 5 rader
		for (int k = 0; k <= i; k++) { //printar ut antal stj�nor f�r antal rader om int i = 1 d� �r f�rsta raden en stj�rna om i = 2 d� �r n�sta rad 2 stj�nor etc.
			std::cout << star; //string print
		}
		std::cout << endl; // radbrytare skappar nya rader f�r varje loop som k�rs
		}
	} while (value != 0); // vi anv�nder en do while loop do om value �r 0 ska den avbryta programet om inte d� st�ller den fr�gan igen
	return 0;
}
