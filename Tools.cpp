#include "Tools.h"

void Tools::showMenu() {
	std::cout << "1 - Enter answer variant: " << std::endl;
	std::cout << "2 - Enter transport type you're interested in: " << std::endl;
	std::cout << "3 - Input:" << std::endl << std::endl;
}

void Tools::showSchedule(std::vector<std::vector <std::map <std::string, std::string>>> schedule) {
	system("chcp 65001");
	for (int i = 0; i < schedule.size(); i++) {
		for (int j = 0; j < schedule[i].size(); j++) {
			std::cout << schedule[i][j]["Race Title"] << " ";
			std::cout << schedule[i][j]["Race Number"] << " ";
			std::cout << schedule[i][j]["Departure Station Title"] << " ";
			std::cout << schedule[i][j]["Departure Station Code"] << " ";
			std::cout << schedule[i][j]["Arrival Station Title"] << " ";
			std::cout << schedule[i][j]["Arrival Station Code"] << " ";
			std::cout << schedule[i][j]["Transport Type"] << " ";
			std::cout << schedule[i][j]["Departure Date"] << " ";
			std::cout << schedule[i][j]["Arrival Date"] << " ";
			std::cout << schedule[i][j]["Transport Company Code"] << " ";
			std::cout << schedule[i][j]["Price"] << std::endl << std::endl;
		}
	}
}