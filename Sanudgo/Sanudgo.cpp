#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int years = 2, months = 34, ln = 28, dick = 4;
	int year_solve = 0, month_solve = 0, ln_solve = 0, dick_solve = 0;
	int year_type = 0, month_type = 0, ln_type = 0, dick_type = 0;
	int tries;

	cout << "Привет Саша!" << endl << "Давай поиграем в игру. Ты должен отгадать несколько чисел." << endl
		<< "На первое у тебя будет ровно 3 попытки, поэтому не облажайся!" << endl;

	system("pause");


	//Угадываем год
	cout << endl << endl;

	cout << "Первый вопрос. Сколько лет назад мы начали общаться с тобой?" << endl;

	tries = 3;
	while ((year_solve == 0) and (tries > 0)) {
		year_type = 0;
		cout << "Введи число: ";
		cin >> year_type;
		if (year_type == years) {
			year_solve = 1;
			cout << "Молодец, ты отгадал. Переходим ко второму вопросу." << endl;
		}
		else if ((year_type < years) and (year_type >= 0)) {
			cout << "Неправильно! Мы общаемся дольше!" << endl;
			tries--;
			cout << "Осталось попыток: " << tries << endl;
		}
		else if (year_type > years) {
			cout << "Неправильно! Ты меня смущаешь. Не так уж и долго мы знакомы." << endl;
			tries--;
			cout << "Осталось попыток: " << tries << endl;
		}
		else if (year_type < 0) {
			cout << "ЧЗХ? Ты шутки не шути. Введи реальное число." << endl;
			tries--;
			cout << "Осталось попыток: " << tries << endl;
		}
	}

	if (tries == 0) {
		cout << "Позор...";
		return(0);
	}

	cout << endl << endl << endl;
	cout << "Переходим ко второму вопросу. Сколько месяцев мы общаемся? Этот вопрос коварнее >:)" << endl;

	tries = 5;
	while ((month_solve == 0) and (tries > 0)) {
		month_type = 0;
		cout << "Введи число: ";
		cin >> month_type;
		if (month_type == months) {
			month_solve = 1;
			cout << "Молодец, ты отгадал. Переходим к третьему вопросу. (Настоящий гуру)" << endl;
		}
		else if ((month_type < months) and (month_type >= 0)) {
			cout << "Неправильно! Мы общаемся дольше!" << endl;
			tries--;
			cout << "Осталось попыток: " << tries << endl;
		}
		else if (month_type > months) {
			cout << "Неправильно! Ты меня смущаешь. Не так уж и долго мы знакомы." << endl;
			tries--;
			cout << "Осталось попыток: " << tries << endl;
		}
		else if (month_type < 0) {
			cout << "ЧЗХ? Ты шутки не шути. Введи реальное число." << endl;
			tries--;
			cout << "Осталось попыток: " << tries << endl;
		}
	}

	if (tries == 0) {
		cout << "Позор...";
		return(0);
	}


	cout << endl << endl << endl;
	cout << "И вот третий вопрос. Назови ТО САМОЕ число. Хе-хе-хе" << endl;

	tries = 5;
	while ((ln_solve == 0) and (tries > 0)) {
		ln_type = 0;
		cout << "Введи число: ";
		cin >> ln_type;
		if (ln_type == ln) {
			ln_solve = 1;
			cout << "Супер! Ты отгадал все вопросы маленького квиза!" << endl;
		}
		else
		{
			cout << "Лох. Неправильно. Пробуй еще." << endl;
			tries--;
			cout << "Осталось попыток: " << tries << endl;
		}
	}

	if (tries == 0) {
		cout << "Позор...";
		return(0);
	}

	cout << endl << "Но не спеши. Прежде чем преоткрыть завесу консольной тайны, предлагаю тебе пройти БОНУСНЫЙ раунд >)." << endl;

	char wish;

	while (true) {
		cout << "Хочешь пройти Б-О-Н-У-С-Н-Ы-Й раунд? (Y/N): "; \
			cin >> wish;
		cout << endl;
		if (wish == 'Y') {
			break;
		}
		else if (wish == 'N') {
			break;
		}
	}

	if (wish == 'Y') {
		cout << endl << "Ты сам согласился на этот вопрос..." << endl << "Сколько см твой член? (Вопрос был сделан оральными экспертами(И да, мы знаем лучше тебя))" << endl;
		tries = 5;
		while ((dick_solve == 0) and (tries > 0)) {
			dick_type = 0;
			cout << "Введи число: ";
			cin >> dick_type;
			if (dick_type == dick) {
				dick_solve = 1;
				cout << "Никто и не сомневался.." << endl;
			}
			else if ((dick_type < dick) and (dick_type >= 0)) {
				cout << "Ну не принижай себя)" << endl;
				tries--;
				cout << "Осталось попыток: " << tries << endl;
			}
			else if (dick_type >= 20) {
				cout << "Ты не император Терры. Твой точно меньше" << endl;
				tries--;
				cout << "Осталось попыток: " << tries << endl;
			}
			else if ((dick_type > dick) and (dick_type < 20)) {
				cout << "Влад лучше знает.. Пиши число П-О-М-Е-Н-Ь-Ш-Е))" << endl;
				tries--;
				cout << "Осталось попыток: " << tries << endl;
			}
			else if (dick_type < 0) {
				cout << "Самоирония на лучшем уровне." << endl;
				tries--;
				cout << "Осталось попыток: " << tries << endl;
			}
		}

		cout << endl << "Мы рады, что ты был честен с собой. Настало время приза!" << endl;
		system("pause");
		system("cls");

		cout <<
			"((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((" << endl << "((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((" << endl <<
			"((((((((((((((((@@@@@@@@@#((#(((((((((((((((((((((((((((((((" << endl << "(((((((((((((((@@@#(%@@@@@@@@@@@%(((((((((((((((((((((((((((" << endl <<
			"((((((((((((((@@@@,,,,,,,,,,,%@@@@@@@#((((((((((((((((((((((" << endl << "(((((((((((((%@@@,,,,,,,,,,,,,,,,,%@@@@@&#((((((((((((((((((" << endl <<
			"(((((((((((((@@@@@@@@@@@@@#,,,,,,,,,,,@@@@@&((((((((((((((((" << endl << "((((((((((((@@@@ooooooo&@@@@@@@@,,o,,,,,,@@@@@((((((((((((((" << endl <<
			"(((((((((((%@@@oooooooooooooo%@@@@@%,,,,,,,/@@@@#(((((((((((" << endl << "(((((((((((@@@(ooooo&@@@&oooooooo@@@@@%,,,,,,,@@@@((((((((((" << endl <<
			"((((((((((@@@@ooo&@%(((((%@@oooooooo@@@@@,,,,,,/@@@@((((((((" << endl << "(((((((((%@@@ooo#@(((((((#(@%ooooooooo&@@@&,,,,,,@@@@(((((((" << endl <<
			"(((((((((@@@(oooo@@(((((((&@oooooooooooo@@@@,,,,,,%@@@#(((((" << endl << "((((((((@@@@oooooo%@@@&@@@%oooo(%%(oooooo#@@@o,,,,,(@@@#((((" << endl <<
			"(((((((%@@@ooooooooooooooooo@@#((((#@@oooo(@@@/,,,,,&@@@((((" << endl << "(((((((@@@(ooooo((/oooooooo@@#(((((((@@oooo#@@@,,,,,,@@@@(((" << endl <<
			"((((((@@@@oo%@@((((#@@ooooo@@((((((((@@ooooo@@@@,,,,,(@@@(((" << endl << "(((((%@@@oo&@((((((((%@ooooo#@@&##&@@(oooooo(@@@,,/&@@@@@(((" << endl <<
			"(((((@@@#oo%@((((((((&@oooooooooooooooooo(&@@@@@@@@@@@&(((((" << endl << "((((@@@@oooo/@@&((#@@@oooooooooo(@@@@@@@@@@@@&#(((((((((((((" << endl <<
			"(((%@@@oooooooooooooooo(@@@@@@@@@@@@&#((((((((((((((((((((((" << endl << "(((@@@#ooooooo#@@@@@@@@@@@@%((((((((((((((((((((((((((((((((" << endl <<
			"((@@@@@@@@@@@@@@@@%#((((((((((((((((((((((((((((((((((((((((" << endl << "(#@@@@@@@%((#(((((((((((((((((((((((((((((((((((((((((((((((" << endl <<
			"((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((";


		cout << endl;
		cout << endl;
		cout << "				Знаешь почему на день рождения тортик кушать полагается?" << endl << "			 Потому что, к сожалению, в пиццу свечи не втыкаются!" << endl << endl <<
			"				С 18-летием, Саша!" << endl << "					@Твои друзя";
		cout << endl;

		system("PAUSE");
	}


	if (wish == 'N') {
		cout << endl << "Ну, как хочешь. Лови утешающий приз." << endl;
		system("pause");
		system("cls");
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(handle, FOREGROUND_RED);
		double x, y;
		double size = 10;



		for (x = 0; x < size; x++)
		{
			for (y = 0; y <= 4 * size; y++)
			{
				double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
				double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));

				if (dist1 < size + 0.5 || dist2 < size + 0.5)
					cout << "V";
				else
					cout << " ";


			}
			cout << endl;

		}

		for (x = 1; x < 2 * size; x++)
		{
			for (y = 0; y < x; y++)
				cout << " ";

			for (y = 0; y < 4 * size + 1 - 2 * x; y++)
				cout << "V";

			cout << endl;
		}

		cout << endl;
		cout << endl;
		cout <<"				С 18-летием, Саша!" << endl << "					@Твои друзя";
		cout << endl;

		system("PAUSE");


	}
}