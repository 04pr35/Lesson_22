#include "Events.h"

int main() {
	int menu = 0, submenu = 0;
	Events myEv;
	Date date; Time_ time; string str1, str2; int a = 0;

	do	{
		cout << "=========================================\n";
		cout << "\t\t MENU:\n";
		cout << "=========================================\n";
		cout << "\t 1 - add new event\n";
		cout << "\t 2 - show all events\n";
		cout << "\t 0 - Exit\n";
		cout << "=========================================\n";
		cout << "\t >>> "; cin>>menu; system("cls");
		switch (menu){
		default:cout << "Errorr!\n"; break;
		case 1: 
			cout << "-----------------------------\n";
			cout << "\t 1 - Birthday\n ";
			cout << "\t 2 - Meeting\n";
			cout << "\t 3 - Custom\n";
			cout << "\t 0 - return to main menu\n";
			cout << "-----------------------------\n";
			cin >> submenu; system("cls");
			switch (submenu){
			default:cout << "Errorr!\n";break;
			case 1: 
				cout << "Date: "; cin >> date;
				cout << "Time: "; cin >> time;
				cout << "Hero: "; cin >> str1;
				cout << "Place: "; cin >> str2;
				cout << "Age: "; cin >> a;
				myEv.addEvent(new BirthDay(date, time, str1, str2, a)); break;
			case 2:
				cout << "Date: "; cin >> date;
				cout << "Time: "; cin >> time;
				cout << "Person: "; cin >> str1;
				cout << "Place: "; cin >> str2;
				myEv.addEvent(new Meeting(date, time, str1, str2)); break;
			case 3:
				cout << "Date: "; cin >> date;
				cout << "Time: "; cin >> time;
				cout << "Description: "; cin >> str1;
				myEv.addEvent(new Custom(date, time, str1)); break;
			}

			break;
		case 2: myEv.show(); break;
		}

	} while (menu);

	system("pause");
	return 0;
}