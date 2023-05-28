#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
	cout << endl << " Juego del gato " << endl;
	char matriz[3][3] = { {'0','1','2'},
						{'3','4','5'},
						{'6','7','8',} };
	char op;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matriz[i][j];
		}
		cout << "\n";
	}

	cout << "Presiona Y para jugar o N para salir" << endl;
	cin >> op;

	int fila, columna, ganador = 0, turno = 1;

	if (op == 'Y' || op == 'y')
	{
		do
		{
			if (turno % 2 == 1)
			{
				do
				{
					cout << "Jugador 1 eligue tu fila y columna numeros" << endl;
					cout << "Fila " << endl;
					cin >> fila;
					cout << "Columna " << endl;
					cin >> columna;
					if (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || fila > 2 || columna > 2)
					{
						cout << "Ese valor no es valido" << endl;
					}
				} while (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || fila > 2 || columna > 2);
				matriz[fila][columna] = 'x';

				system("cls");
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						cout << matriz[i][j];
					}
					cout << "\n";
				}
				turno++;
			}
			else if (turno % 2 == 0)
			{
				do
				{
					cout << "Jugador 2 eligue tu fila y columna numeros" << endl;
					cout << "Fila " << endl;
					cin >> fila;
					cout << "Columna " << endl;
					cin >> columna;
					if (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || fila > 2 || columna > 2)
					{
						cout << "Ese valor no es valido" << endl;
					}
				} while (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || fila > 2 || columna > 2);
				matriz[fila][columna] = 'o';

				system("cls");
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						cout << matriz[i][j];
					}
					cout << "\n";
				}
				turno++;
			}
			if (matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] ||
				matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] ||
				matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] ||
				matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] ||
				matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] ||
				matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] ||
				matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] ||
				matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]) {
				ganador = 1;
				cout << "Jugador 1 haz ganado" << endl;
			}

			if (matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] ||
				matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] ||
				matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] ||
				matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] ||
				matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] ||
				matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] ||
				matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] ||
				matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]) {
				ganador = 1;
				cout << "Jugador 2 haz ganado" << endl;
			}
		} while (ganador != 1);
	}
	else
	{
		system("cls");
		cout << "TA BIEN, VETE TnT" << endl;
	}
	return 0;
}