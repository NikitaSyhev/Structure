//Шаблон

#include <iostream>
#include <string>
#include <cmath>

struct date {
	int day{};
	int month{};
	int year{};
};

struct person {
	std::string name;
	date birthday;
	int salary = 0;
};

void show_person(person& P) {
	std::cout << "Name: " << P.name << '\n';
	std::cout << "Date of birthday: " <<
		P.birthday.day << '.' <<
		P.birthday.month << '.' <<
		P.birthday.year << '.' << '\n';
	std::cout << "Salary: " << P.salary << '\n';


}
person input_person() {
	person tmp;
	std::cout << "Введите имя: ";
	std::cin.ignore();
	getline(std::cin, tmp.name);
	std::cout << "Введите дату рождения: ";
	std::cin >> tmp.birthday.day >>
		tmp.birthday.month >>
		tmp.birthday.year;
	std::cout << "Введите зарплату: ";
	std::cin >> tmp.salary;
	return tmp;
}

void fill_person(person &P) {
	std::cout << "Введите имя: ";
	std::cin.ignore();
	getline(std::cin, P.name);
	std::cout << "Введите дату рождения: ";
	std::cin >> P.birthday.day >>
		P.birthday.month >>
		P.birthday.year;
	std::cout << "Введите зарплату: ";
	std::cin >> P.salary;
}


struct persona {
	std::string name;
	int age = 0;
	int coins[5]{};
};
void show_persona(persona &P) {
	std::cout << "Name: " << P.name << '\n';
	std::cout << "Age: " << P.age << '\n';
	std::cout << "Coins: ";
	for (int i = 0; i < 5; i++)
		std::cout << P.coins[i] << ' ';
	std::cout << '\n';

}

int cash(persona& p) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += p.coins[i];
	return sum;
}


struct point {
	double X = 0;
	double Y = 0;
};

int compare_distance(point& P1, point& P2) {
	double dist1 = sqrt(pow(0 - P1.X, 2) + pow(0 - P1.Y, 2));
	double dist2 = sqrt(pow(0 - P2.X, 2) + pow(0 - P2.Y, 2));
	if (dist1 > dist2)
		return 1;
	if (dist1 < dist2)
		return -1;
	return 0;
}

inline int year_of_birth(persona &P, int year) {
	return year - P.age;
}

int main() {
	setlocale(LC_ALL, "Russian"); 
		int n, m;
		//просто структура person 
		/*struct person {//объявление структуры person. Для ее объявления создаются структуры p1 и p2
			std::string name = "noname";
			int age = 18;
			std::string position = "programer";
			int salary = 15000
				;
		} p1, p2{ "Bob Thomas", 44, "director", 99000};


		// обращение к полям объекта структуры
		p1.name = "Tom Smith";
		p1.age = 25;
		//p1.position = "manager";
		p1.salary = 50000;

		std::cout << "Name: " << p1.name << '\n';
		std::cout << "Age: " << p1.age << '\n';
		std::cout << "Position: " << p1.position << '\n';
		std::cout << "Salary: " << p1.salary << '\n';

		std::cout << "---------------------------\n";
		std::cout << "Name: " << p2.name << '\n';
		std::cout << "Age: " << p2.age << '\n';
		std::cout << "Position: " << p2.position << '\n';
		std::cout << "Salary: " << p2.salary << '\n';
		//изменение всего содерджимого объекта структуры
		p2 = { "Adam Thomas", 41, "President", 500000};
	

		//прямое присваивание полям объекта р2 значений из полей объекта р1 
		p2 = p1;

		//альтернативный способ создания объекта структуры
		person p3{ "Jake Spar", 30, "policeman", 45000};
		std::cout << "---------------------------\n";
		std::cout << "Name: " << p3.name << '\n';
		std::cout << "Age: " << p3.age << '\n';
		std::cout << "Position: " << p3.position << '\n';
		std::cout << "Salary: " << p3.salary << '\n';*/

	
	/*	person p4;
		p4.name = "Tom Smith";
		//p4.birthday.day = 1;
		//p4.birthday.month = 1;
		//p4.birthday.year = 1970;
		p4.birthday = { 1, 1, 1970 };
		p4.salary = 50000;

		person p5{
			"Bob Thomas",
			{ 5, 10, 2000 },
			20000
		};

		person* pp5 = &p5;

		std::cout << "Name: " << pp5->name << '\n';
		std::cout << "Date of birthday: " <<
			pp5->birthday.day << '.' <<
			pp5->birthday.month << '.' <<
			pp5->birthday.year << '.' << '\n';
		std::cout << "Salary: " << pp5->salary << '\n';


		std::cout << "---------------------------\n";
		show_person(p4);

		//запуск функций fill_person и show_person
		//person p6 = input_person();
		person p6;
		fill_person(p6);
		std::cout << "---------------------------\n";
		show_person(p6);*/

		//Задача: закрепление материала
		/*std::cout << "Task 1\nОбъект: \n";
		persona A{
			"Nick Jackobs",
			20,
			{1, 2, 2, 5, 1 }
		};

		show_persona(A);

		std::cout << "Year of birth: " << year_of_birth(A, 2022) << '\n';

		std::cout << "Общие сбережения: " << cash(A) << '\n*/


		//Задача 2 Координаты
		
		std::cout << "Task 2\nТочка A: ";
		point A{ 4.5, -1.3 };
		std::cout << A.X << ", " << A.Y << '\n';
		point B{ 6.1, 0.9 };
		std::cout << "Точка B: " << B.X << ", " << B.Y << '\n';
		std::cout << compare_distance(A, B) << '\n';

		
	return 0;
}

