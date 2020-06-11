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

	int mem1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int mem2[5];
    int mem3[] = {1, 2, 3, 4, 5, 8, 9, 10, 11, 12};
    int mem4[20];
    char str1[] = "Milan";
    char str2[] = "Hello, _____!";
    char str3[6] = "";
    char str4[21] = "____________________";
    char str5[] = "";

    /*
	contest::memcmp(nullptr, nullptr, 0);
	contest::memcpy(nullptr, nullptr, 0);
	contest::memmove(nullptr, nullptr, 0);
	contest::memset(nullptr, 0, 0);
	contest::strcpy(nullptr, nullptr);
	contest::strncpy(nullptr, nullptr, 0);
	contest::strlen(nullptr);
     */

    memcpy(mem2, mem1, 5*sizeof(int));
    memmove(mem1 + 5, mem1, 5*sizeof(int));
    memmove(mem3, mem3 + 5, 5*sizeof(int));
    memset(mem4, 0, 20 * sizeof(int));
    strcpy(str3, str1);
    strncpy(str2 + 7, str1, 5);
    strncpy(str4, str1, 20);

	std::cout << "mem1: ";
	for(int i : mem1)
	    std::cout << i << ' ';
	std::cout << std::endl;

    std::cout << "mem2: ";
    for(int i : mem2)
        std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << "mem3: ";
    for(int i : mem3)
        std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << "mem4: ";
    for(int i : mem4)
        std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << "str1: " << str1 << std::endl
              << "\tlength: " << strlen(str1) << std::endl
              << "str2: " << str2 << std::endl
              << "\tlength: " << strlen(str2) << std::endl
              << "str3: " << str3 << std::endl
              << "\tlength: " << strlen(str3) << std::endl
              << "str4: ";

    for(char c : str4)
        std::cout << c;
    std::cout << std::endl;
    std::cout << "\tlength: " << strlen(str4) << std::endl;

    std::cout << "str5 length: " << strlen(str5) << std::endl;

	return 0;
}
