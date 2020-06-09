#include <contest_string.h>
#include <iostream>

int main()
{
	std::cout
			<< "This is a fork of https://www.github.com/xgallom/blog_contest\n"
			<< "\n"
			<< "Goal of the contest is to implement functions as declared in string/include/contest_string.h\n"
			<< "Implementation skeleton is in string/src/contest_string.c\n"
			<< "\n"
			<< "This project produces a static library string and an executable string_test that you can change\n"
			<< "in /string_test.cpp. Feel free to test your library there. I will be checking it by myself for\n"
			<< "mistakes and will not look into you string_test.cpp file.\n"
			<< "\n"
			<< "The implementation should not depend on any standard library functions, and should work in\n"
			<< "freestanding environments. If they don\'t due to some weird niche thing and they work in hosted,\n"
			<< "it\'s still a valid submission, so you do not have to test it outside this project.\n"
			<< "\n"
			<< "Consult https://en.cppreference.com/w/cpp/header/cstring for how the functions should behave.\n"
			<< "Only functions required to participate in the contest are the ones declared in contest_string.h.\n"
			<< "\n"
			<< "DO NOT CHEAT. SERIOUSLY I KNOW HOW TO FIND OUT. ASSHOLE.\n"
			<< "\n"
			<< "And good luck, with lots of love <3\n"
			<< "Signed-off-by: Milan Gallo <gallo.milan.jr@gmail.com>\n";

	contest::memcmp(nullptr, nullptr, 0);
	contest::memcpy(nullptr, nullptr, 0);
	contest::memmove(nullptr, nullptr, 0);
	contest::memset(nullptr, 0, 0);
	contest::strcpy(nullptr, nullptr);
	contest::strncpy(nullptr, nullptr, 0);
	contest::strlen(nullptr);

	return 0;
}
