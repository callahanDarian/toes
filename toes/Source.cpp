#include <iostream>
#include <string>
#include <windows.h>

int color1 = 7;
int color2 = 7;
int color3 = 7;
int color4 = 7;
int color5 = 7;
int color6 = 7;
int color7 = 7;
int color8 = 7;
int color9 = 7;
int baseColor = 7;

std::string space1 = "1";
std::string space2 = "2";
std::string space3 = "3";
std::string space4 = "4";
std::string space5 = "5";
std::string space6 = "6";
std::string space7 = "7";
std::string space8 = "8";
std::string space9 = "9";

int spaceOne = 4;
int spaceTwo = 4;
int spaceThree = 4;
int spaceFour = 4;
int spaceFive = 4;
int spaceSix = 4;
int spaceSeven = 4;
int spaceEight = 4;
int spaceNine = 4;

int selection;

void drawBoard()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, color1);

	std::cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n " << std::endl;

	std::cout << std::endl;
	SetConsoleTextAttribute(hConsole, color1);
	std::cout << "  " << space1;
	SetConsoleTextAttribute(hConsole, baseColor); 
	std::cout << " | ";
	SetConsoleTextAttribute(hConsole, color2); 
	std::cout << space2;
	SetConsoleTextAttribute(hConsole, baseColor); 
	std::cout << " | ";
	SetConsoleTextAttribute(hConsole, color3);
	std::cout << space3;
	SetConsoleTextAttribute(hConsole, baseColor); 
	std::cout << " " << std::endl;
	std::cout << " ---|---|---" << std::endl;
	SetConsoleTextAttribute(hConsole, color4);
	std::cout << "  " << space4;
	SetConsoleTextAttribute(hConsole, baseColor); 
	std::cout << " | ";
	SetConsoleTextAttribute(hConsole, color5);
	std::cout << space5;
	SetConsoleTextAttribute(hConsole, baseColor); 
	std::cout << " | ";
	SetConsoleTextAttribute(hConsole, color6);
	std::cout << space6;
	SetConsoleTextAttribute(hConsole, baseColor); 
	std::cout << " " << std::endl;
	std::cout << " ---|---|---" << std::endl;
	std::cout << "  ";
	SetConsoleTextAttribute(hConsole, color7);
	std::cout << space7;
	SetConsoleTextAttribute(hConsole, baseColor); 
	std::cout << " | ";
	SetConsoleTextAttribute(hConsole, color8); 
	std::cout << space8;
	SetConsoleTextAttribute(hConsole, baseColor);
	std::cout << " | ";
	SetConsoleTextAttribute(hConsole, color9);
	std::cout << space9;
	SetConsoleTextAttribute(hConsole, baseColor);
	std::cout << " " << std::endl;
	std::cout << std::endl;
}
void checkWin()
{
	//If player one wins
	if (spaceOne == 1 && spaceTwo == 1 && spaceThree == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceFour == 1 && spaceFive == 1 && spaceSix == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceSeven == 1 && spaceEight == 1 && spaceNine == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceOne == 1 && spaceFour == 1 && spaceSeven == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceTwo == 1 && spaceFive == 1 && spaceEight == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceThree == 1 && spaceSix == 1 && spaceNine == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceOne == 1 && spaceFive == 1 && spaceNine == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceThree == 1 && spaceFive == 1 && spaceSeven == 1)
	{
		std::cout << "Player One Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}

	//If player two wins
	else if (spaceOne == 2 && spaceTwo == 2 && spaceThree == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceFour == 2 && spaceFive == 2 && spaceSix == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceSeven == 2 && spaceEight == 2 && spaceNine == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceOne == 2 && spaceFour == 2 && spaceSeven == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceTwo == 2 && spaceFive == 2 && spaceEight == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceThree == 2 && spaceSix == 2 && spaceNine == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceOne == 2 && spaceFive == 2 && spaceNine == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
	else if (spaceThree == 2 && spaceFive == 2 && spaceSeven == 2)
	{
		std::cout << "Player Two Wins" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}

	//If tie
	else if (spaceOne != 4 && spaceTwo != 4 && spaceThree != 4 && spaceFour != 4 && spaceFive != 4 && spaceSix != 4 && spaceSeven != 4 && spaceEight != 4 && spaceNine != 4)
	{
		std::cout << "\n No One Wins \n" << std::endl;

		std::cout << std::endl;
		system("pause");
		exit(0);
	}
}

void playerOneTurn()
{
	std::cout << "P 1) select a space \n > ";
	std::cin >> selection;
	if (selection == 1 && spaceOne == 4)
	{
		space1 = "X";
		spaceOne = 1;
		color1 = 12;
	}
	else if (selection == 2 && spaceTwo == 4)
	{
		space2 = "X";
		spaceTwo = 1;
		color2 = 12;
	}
	else if (selection == 3 && spaceThree == 4)
	{
		space3 = "X";
		spaceThree = 1;
		color3 = 12;
	}
	else if (selection == 4 && spaceFour == 4)
	{
		space4 = "X";
		spaceFour = 1;
		color4 = 12;
	}
	else if (selection == 5 && spaceFive == 4)
	{
		space5 = "X";
		spaceFive = 1;
		color5 = 12;
	}
	else if (selection == 6 && spaceSix == 4)
	{
		space6 = "X";
		spaceSix = 1;
		color6 = 12;
	}
	else if (selection == 7 && spaceSeven == 4)
	{
		space7 = "X";
		spaceSeven = 1;
		color7 = 12;
	}
	else if (selection == 8 && spaceEight == 4)
	{
		space8 = "X";
		spaceEight = 1;
		color8 = 12;
	}
	else if (selection == 9 && spaceNine == 4)
	{
		space9 = "X";
		spaceNine = 1;
		color9 = 12;
	}
	else
	{
		std::cout << "\n Please choose a different space. \n" << std::endl;
		playerOneTurn();
	}

	drawBoard();
	checkWin();
}

void playerTwoTurn()
{
	std::cout << "P 2) select a space \n > ";
	std::cin >> selection;
	if (selection == 1 && spaceOne == 4)
	{
		space1 = "O";
		spaceOne = 2;
		color1 = 9;
	}
	else if (selection == 2 && spaceTwo == 4)
	{
		space2 = "O";
		spaceTwo = 2;
		color2 = 9;
	}
	else if (selection == 3 && spaceThree == 4)
	{
		space3 = "O";
		spaceThree = 2;
		color3 = 9;
	}
	else if (selection == 4 && spaceFour == 4)
	{
		space4 = "O";
		spaceFour = 2;
		color4 = 9;
	}
	else if (selection == 5 && spaceFive == 4)
	{
		space5 = "O";
		spaceFive = 2;
		color5 = 9;
	}
	else if (selection == 6 && spaceSix == 4)
	{
		space6 = "O";
		spaceSix = 2;
		color6 = 9;
	}
	else if (selection == 7 && spaceSeven == 4)
	{
		space7 = "O";
		spaceSeven = 2;
		color7 = 9;
	}
	else if (selection == 8 && spaceEight == 4)
	{
		space8 = "O";
		spaceEight = 2;
		color8 = 9;
	}
	else if (selection == 9 && spaceNine == 4)
	{
		space9 = "O";
		spaceNine = 2;
		color9 = 9;
	}
	else
	{
		std::cout << "\n Please choose a different space. \n" << std::endl;
		playerTwoTurn();
	}

	drawBoard();
	checkWin();
}
int main()
{
	drawBoard();

	playerOneTurn();
	playerTwoTurn();
	playerOneTurn();
	playerTwoTurn();
	playerOneTurn();
	playerTwoTurn();
	playerOneTurn();
	playerTwoTurn();
	playerOneTurn();

	std::cout << std::endl;
	system("pause");
	return(0);
}