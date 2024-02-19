#include<clocale>
#include<iostream>

#include"menu.hpp"
#include"menu_functions.hpp"
#include"menu_item.hpp"


int main() {

	const AS::MenuItem* current = &AS::MAIN;
	do {
		current = current->func(current);
	} while (true);

	return 0;
}