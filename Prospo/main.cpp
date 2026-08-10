#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using namespace std;
//#define DEBUG; 
//#define NUMBER;
//#define OPER;
//#define Math
//#define Registr



void main()
{
	setlocale(LC_ALL, "");
	
#ifdef DEBUG
/*bool accent()
	{
		int tries = 1;
		while (tries < 4)
		{
			cout << "Будете продолжать - y and n?\n";
			char anwar = 0;
			cin >> anwar;
			switch (anwar)
			{
				case 'y': return true;
				case 'n': return false;
				default: cout << "Извините, попробуйте еще раз\n";
				tries = tries + 1;
			}
		}
		cout << "Ответ отрицательный";
		return false;
	}*/
	// канкатенация строк (объединение)

string s1 = "Привет"; 
	string s2 = " и пока лох";

	//string s3 = s1 +"," + s2;
	s1 = s1 + '\n';
	s2 += '\n';
	cout << s1 +s2; 

	string name = "Neils Stroustrup";
	string s = name.substr(6, 10);//возвращает строку  
	name.replace(0, 5, "Nicholas");// замещает слово
	cout << name; 
#endif // DEBUG

#ifdef NUMBER
int number;
	cout << "Введите число: \n"; cin >> number;
	if ((number % 2) == 0) { cout << "Even"; }
	else cout << "Odd\n";

	const int n = 100;// фибоначчи
	int a, b, c;
	b = 0; c = 1;
	for (int i = 2; i < n; i++)
	{
		a = b + c;
		cout << '\t' << a;
		c = b;
		b = a;
	}
#endif // 
#ifdef OPER
// битовые операции
	char bb = 0x64;//=100 или || 1100100 в десятичной системе 
	if (bb & 4) cout << "Третий бит равен 1\n";
	else cout << "Третий бит равен 0\n";
	if (bb & 8) cout << "Четвертый бит равен 1\n";
	else cout << "Четвертый бит равен 0 \n";
	if (bb & 32) cout << "Шестой бит равен 1\n";
	else cout << "Шестой бит равен 0 \n";
	if (bb & 2) cout << "бит равен 1\n";
	else cout << "бит равен 0 \n";

	int s;
	cin >> s;
	bool bs = (s >= 0) && (s <= 100); // 0<s<100;
	bool bbs = (s < 0) || (s > 100); // 
	bool bbbs = !((s >= 0) && (s <= 100));
#endif // DEBUG

#ifdef Math
	// общая форма сдвига >> << 
	// переменная >> количество разрядов вправо
	// переменная << количество разрядов  влево
	//пример 
	//int a, b;
	//a = 3; b = 2048;
	//int n = a << 5;// n = a*32;
	//cout << n <<"\n";
	//int m = b >> 5; // m = b/32
	//cout << m << "\n";
	//int x = (a << 3) + (a << 2); // x = a*12 = a*8+a*4
	//cout << x;
	
	/*int a;
	cout << "введите пятизначное число: " << endl; 
	cin >> a;
	cout << endl; 
	
		if (a >= 0 && a <= 9999)
		{
			for (int i =0; i<5; i++){cout << "вы ввели не верное значение, повторите попытку ...";}
			
		}
		else if (a >= 100000) { cout << "вы ввели не верное значение, повторите попытку ..."; }
		else
			{
				cout << " 1 цифра равна = " << (a / 10000) << endl;
				cout << " 2 цифра равна = " << (a / 1000) % 10 << endl;
				cout << " 3 число равно = " << (a / 100) % 10 << endl; 
				cout << " 4 число равно = " << (a / 10) % 10 << endl; 
				cout << " 5 число равно = " << a % 10 << endl; 
			}
		cout << endl; 
	*/
	int number; 
start: 
	cout << "Введите пятизначное число: " << endl; 
	cin >> number; 
	cout << endl; 
	if ((number > 9999) && (number <= 99999))
	{
		for (int i = 0; i < 5; i++) {
			cout << i + 1 << "-е число равен " << (number / static_cast<int>(pow(10, (4 - i)))) % 10 << endl; 
		}
		cout << endl;
	}
	else {
		cout << "вы ввели неверное число, повторите попытку ... " << endl; 
		goto start;
	}
	int menu_num;
menu:
	cout << " \n1 - продолжить работу? \n2 - Выход\n\n Сделайте выбор (1 или 2) : " << endl; 
	cin >> menu_num;
	switch (menu_num) {
		case 1: { goto start; break; }
		case 2: { return;  break; }
		default: { cout << "будьте внимательны @ " << endl; }
	}
	system("pause");
#endif // Maht

#ifdef Registr
// в верхний регистр 
	char charter('a');
	cout << "Введите букву: " << endl; 
	cin >> charter; 
	//charter = charter - 32;
	cout << endl;
	//cout << "Та же буква только в верхнем регистре: " << charter << endl; 
	cout << "Та же буква только в верхнем регистре: " << (char)toupper(charter) << endl; 
#endif // DEBUG

	
	
	// перевод из метрах км;
	
	double a;
	cout << "Введите количество в метрах: " << endl;
	cin >> a;
	cout << endl; 
	cout << a << " метров будет -" << a / 1000 <<"километр(ов) " << endl;




}

	