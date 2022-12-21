#include <iostream>
using namespace std;

int main() {
    int ucty = 0;
	int menu = 0;
	int vyber = 0;
	int vklad = 0;
	int pin1;
	int pin2;
	int pin3;


ucty:
	cout << "Vitejte v bankomatu" "\n" "\n";
    cout << "Jaky ucet chcete pouzit?" "\n";
    cout << "1 - Pepe" "\n";
    cout << "2 - Jarmila" "\n";
    cout << "3 - Jamal" "\n";
    cout << "4 - Konec" "\n";
	cin >> ucty;

	if (ucty <= 4)
	{
		switch (ucty)
		{
		case 1:
			system("cls");
			goto pin1;
			return 0;
			break;
		case 2:
			system("cls");
			goto pin2;
			return 0;
			break;
		case 3:
			system("cls");
			goto pin15;
			return 0;
			break;
		case 4:
			system("cls");
			cout << "\n" "s panem bohem" "\n";
			return 0;
			break;
		}
		return 0;
	}
	else
	{
		system("cls");
		cout << "Zadal/a jste spatnou hodnotu!" "\n" "\n";
		goto ucty;
		return 0;
	}

pin1:
    cout << "Zadejte pin:" "\n";
    cin >> pin1;

    if (pin1==1234){
        system("cls");
        goto menu;
        return 0;
    }
    else{
        system("cls");
        cout << "Spatny pin" "\n" "\n";
        goto pin1;
        return 0;
    }

pin2:
    cout << "Zadejte pin:" "\n";
    cin >> pin2;

    if (pin2==5678){
        system("cls");
        goto menu;
        return 0;
    }
    else{
        system("cls");
        cout << "nespravny" "\n" "\n";
        goto pin2;
        return 0;
    }

pin15:
    cout << "Zadejte pin:" "\n";
    cin >> pin3;

    if (pin3==6666){
        system("cls");
        goto menu;
        return 0;
    }
    else{
        system("cls");
        cout << "nespravny pin" "\n" "\n";
        goto pin15;
        return 0;
    }


menu:
	cout << "Menu:" "\n";
	cout << "1 - Vybrat penize" "\n";
	cout << "2 - Vlozit penize" "\n";
	cout << "3 - Vas zustatek" "\n";
	cout << "4 - Konec" "\n";
	cin >> menu;

	if (menu <= 3)
	{
		switch (menu)
		{
		case 1:
			system("cls");
			goto vyber;
			return 0;
			break;
		case 2:
			system("cls");
			goto vklad;
			return 0;
			break;
		case 3:
			system("cls");
			cout << "\n" "Nashledanou" "\n";
			return 0;
			break;
		}
		return 0;
	}
	else
	{
		system("cls");
		cout << "Zadal/a jste spatnou hodnotu!" "\n" "\n";
		goto menu;
		return 0;
	}


vyber:
	cout << "Kolik chcete vybrat penez?" "\n";
	cout << "1 - 100 Kc" "\n";
	cout << "2 - 500 Kc" "\n";
	cout << "3 - 1000 Kc" "\n";
	cout << "4 - 2000 Kc" "\n";
	cout << "5 - 5000 Kc" "\n";
	cout << "6 - Zpet" "\n";
	cin >> vyber;
	cout << "\n";

	if (vyber <= 6)
	{
		switch (vyber)
		{
		case 1:
			system("cls");
			cout << "Gratulujeme, vybral/a jste 100 Kc " "\n" "\n";
			goto menu;
			break;
		case 2:
			system("cls");
			cout << "Gratulujeme, vybral/a jste 500 Kc " "\n" "\n";
			goto menu;
			break;
		case 3:
			system("cls");
			cout << "Gratulujeme, vybral/a jste 1000 Kc" "\n" "\n";
			goto menu;
			break;
		case 4:
			system("cls");
			cout << "Gratulujeme, vybral/a jste 2000 Kc" "\n" "\n";
			goto menu;
			break;
		case 5:
			system("cls");
			cout << "Gratulujeme, vybral/a jste 5000 Kc " "\n" "\n";
			goto menu;
			break;
		case 6:
			system("cls");
			goto menu;
			break;
		}
	}
	else
	{
		system("cls");
		cout << "Zadal/a jste spatnou hodnotu!" "\n" "\n";
		goto vyber;
		return 0;
	}

vklad:
	cout << "Kolik chcete vlozit penez?" "\n";
	cout << "1 - 100 Kc" "\n";
	cout << "2 - 500 Kc" "\n";
	cout << "3 - 1000 Kc" "\n";
	cout << "4 - 2000 Kc" "\n";
	cout << "5 - 5000 Kc" "\n";
	cout << "6 - Zpet";
	cout << "\n";
	cin >> vklad;

	if (vklad <= 6)
	{
		switch (vklad)
		{
		case 1:
			system("cls");
			cout << "Gratulujeme, vlozil/a jste 100 Kc" "\n" "\n";
			goto menu;
			break;
		case 2:
			system("cls");
			cout << "Gratulujeme, vlozil/a jste 500 Kc" "\n" "\n";
			goto menu;
			break;
		case 3:
			system("cls");
			cout << "Gratulujeme, vlozil/a jste 1000 Kc" "\n" "\n";
			goto menu;
			break;
		case 4:
			system("cls");
			cout << "Gratulujeme, vlozil/a jste 2000 Kc" "\n" "\n";
			goto menu;
			break;
		case 5:
			system("cls");
			cout << "Gratulujeme, vlozil/a jste 5000 Kc " "\n" "\n";
			goto menu;
			break;
		case 6:
			system("cls");
			goto menu;
			break;
		}
	}
	else
	{
		system("cls");
		cout << "Zadal/a jste spatnou hodnotu!" "\n" "\n";
		goto vklad;
		return 0;
	}
}
