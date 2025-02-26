#include <iostream>

using namespace std;
using namespace System;
char matrix[3][3] = { '1','2','3','4' ,'5','6' ,'7','8','9' };
char player = 'X';
int n;
void Dibujar()
{
	system("cls");
	Console::ForegroundColor = ConsoleColor::Red;
	cout << "TIC TAC TOE v1.0" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Input()
{
	int a;
	cout << " Presiona el n�mero del campo : ";
	cin >> a;

	if (a == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
	}
	else if(a == 2)
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
	}
	else if (a == 3)
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
	else if (a == 4)
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
	else if (a == 5)
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
	else if (a == 6)
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
	else if (a == 7)
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
	else if (a == 8)
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
	else if (a == 9)
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "El espacio ya esta en uso intenta otra vez!" << endl;
			Input();
		}
		
}

void CambiarJugador()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

char Win()
{
	//first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
		return 'X';

	//second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
		return 'O';

	return '/';
}

int main()
{
	n = 0;
	Dibujar();
	while (1)
	{
		n++;
		Input();
		Dibujar();
		if (Win() == 'X')
		{
			Console::ForegroundColor = ConsoleColor::Green;
			cout << "X wins! "<<endl;
			break;
		}
		else if (Win() == 'O')
		{
			Console::ForegroundColor = ConsoleColor::Blue;
			cout << "O wins! " << endl;
			break;
		}
		else if (Win() == '/' && n==9)
		{
			Console::ForegroundColor = ConsoleColor::Yellow;
			cout << "It's a draw!" << endl;
			break;
		}
		CambiarJugador();
	}

	system("pause");
	return 0;
}