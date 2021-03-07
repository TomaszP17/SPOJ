#include<iostream>
#include<string>

using namespace std;

inline int sprawdz(char znak)
{
	if (znak >= 'A' && znak <= 'Z') return 1;
	return 2;
}

void szyfruj(string& tab)
{
	int pom;
	char a, z;

	for (int i = 0; i < tab.size(); i++)
	{
		pom = sprawdz(tab[i]);
		if (pom < 2)
		{
			if (pom == 0)
				a = 'a', z = 'z';
			else
				a = 'A', z = 'Z';

				if (tab[i] + 3 <= z)
					tab[i] += 3;
				else
					tab[i] = tab[i] + 3 - 26;
		}
	}
}

int main()
{
	string tab;
	while (getline(cin, tab))
	{
		if (cin.eof()) return 0;
		szyfruj(tab);
		cout << tab << endl;
	}
	return 0;
}