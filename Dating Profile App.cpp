// Dating Profile App.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Code Academy Project

#include <iostream>
#include <string>
#include "profile.h"


int main() {

	Profile sam("Sam Dakkilla", 30, "New York", "USA", "he/she");
	sam.add_hobby("playing basketball");

	std::cout << sam.view_profile();

}