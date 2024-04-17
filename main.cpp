#include <iostream>
#include <secondCMakeProject.h>
#include <Tools.h>

using namespace Tools;

std::string OW_API_KEY = "17d97e321a5960d40e64610aa836ead5";
std::string YA_API_KEY = "1eb31582-941a-3ac8-a61f-041c344495ab";

int main() {
	setlocale(LC_ALL, "RUS");
	std::system("chcp 65001");
	std::cout << "Введите пункт отправления: ";
    std::string cityFrom; std::cin >> cityFrom;
	std::cout << "Введите пункт назначения: ";
	std::string cityTo; std::cin >> cityTo;
	YaScheduleApp* app = new YaScheduleApp(OW_API_KEY, YA_API_KEY, cityFrom, cityTo);
	int choice;
	std::string transport;
	bool flag = true;

	while (flag) {
		showMenu();
		std::cout << "Enter answer variant: ";
		std::cin >> choice;

		switch (choice) {
		case 1:

			showSchedule(app->getScheduleBetweenCities());
			break;
		case 2:
			std::cout << "what type of transport you're interested in?";
			std::cin >> transport;

			showSchedule(app->getScheduleByTransport(transport));
			break;
		case 3:
			flag = false;
			break;
		}
	}
	return 0;


}