using namespace std;
#include <iostream>
#include <math.h>

float pole_kola(int user_input)
{
	float pi = 3.14159265359;
	return pi * (user_input^2);
}


int main()
{
	int user_input;
	cout << "Podaj promien kola: ";
	cin >> user_input;

	float pole = pole_kola(user_input);

	float pole_kola_array[10][10];

	int incrementation = 0;


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			pole_kola_array[i][j] = pole + incrementation;
			incrementation += 3;
		}
	}
	
	cout << endl;
	
	for (int g = 0; g < 10; g++)
	{
		for (int h = 0; h < 10; h++)
		{
			cout << pole_kola_array[g][h] << "   ";
		}
		cout << endl;
	}

}