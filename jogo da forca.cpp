#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(void)
{
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto = false;
	
	chances = 6;
	tam = 0;
	acerto = false;
	acertos = 0;
	
	cout << "Digite a palavra secreta: ";
	cin >> palavra;
	system("cls");
	
	for(i = 0; i < strlen(palavra); i++)
	{
		if(palavra[i] == '\n')
		{
			palavra[i] == '\0';
		}
	}
	
	tam = strlen(palavra);
	
	for(i = 0; i < tam; i++)
	{
		secreta[i] = '-';
	}
	
	while((chances > 0) && (acertos < tam))
	{
		cout << "Chances: " << chances << "\n\n";
		
		cout << "Palavra: ";
		
		for(i = 0; i < tam; i++)
		{
			cout << secreta[i];
		}
		
		cout << "\n\nDigite uma letra: ";
		cin >> letra[0];
		
		for(i = 0; i < tam; i++)
		{
			if(palavra[i] == letra[0])
			{
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		
		if(!acerto)
		{
			chances--;
		}
		
		acerto = false;
		
		system("cls");	
	}
	
	cout << "A palavra era: ";
	for(i = 0; i < tam; i++)
	{
		cout << palavra[i];
	}
	cout << "\n";
	
	if(chances == 0)
	{
		cout << "VOCE PERDEU\n";
	}
	else
	{
		cout << "VOCE GANHOU\n";
	}
	
	system("pause");
	
	
	return 0;
}
