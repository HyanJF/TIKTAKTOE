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
	string op;
	string filaP, columnaP;
	int fila = 3, columna = 3, ganador = 0, turno = 1, Break = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matriz[i][j];
		}
		cout << "\n";
	}

	do
	{
		cout << "Presiona Y para jugar o N para salir" << endl;
		cin >> op;

		if (op == "N" || op == "n" || op == "Y" || op == "y")
		{
			Break = 1;
		}
	} while (Break != 1);

	if (op == "Y" || op == "y")
	{
		do
		{
			if (turno % 2 == 1)
			{
				do
				{
					cout << "Jugador 1 eligue tu fila y columna numeros" << endl;
					do
					{
						cout << "Fila " << endl;
						cin >> filaP; 
						if (filaP == "0" || filaP == "1" || filaP == "2")
						{
							fila = stoi(filaP);
						}
						else
						{
							cout << "Valor incorrecto" << endl;
						}
					} while (fila != 0 && fila != 1 && fila != 2 );
					do
					{
						cout << "Columna " << endl;
						cin >> columnaP;
						if (columnaP == "0" || columnaP == "1" || columnaP == "2")
						{
							columna = stoi(columnaP);
						}
						else
						{
							cout << "Valor incorrecto" << endl;
						}
					} while (columna != 0 && columna != 1 && columna != 2);

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
				fila = 3;
				columna = 3;
			}
			else if (turno % 2 == 0)
			{
				do
				{
					cout << "Jugador 2 eligue tu fila y columna numeros" << endl;
					do
					{
						cout << "Fila " << endl;
						cin >> filaP;
						if (filaP == "0" || filaP == "1" || filaP == "2")
						{
							fila = stoi(filaP);
						}
						else
						{
							cout << "Valor incorrecto" << endl;
						}
					} while (fila != 0 && fila != 1 && fila != 2);
					do
					{
						cout << "Columna " << endl;
						cin >> columnaP;
						if (columnaP == "0" || columnaP == "1" || columnaP == "2")
						{
							columna = stoi(columnaP);
						}
						else
						{
							cout << "Valor incorrecto" << endl;
						}
					} while (columna != 0 && columna != 1 && columna != 2);

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
				fila = 3;
				columna = 3;
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
				cout << "Jugador 1 haz ganado >W<" << endl;
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
				cout << "Jugador 2 haz ganado OwO" << endl;
			}

			if (turno == 10)
			{
				ganador = 1;
				cout << "Empate ninguno gana XD" << endl;
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