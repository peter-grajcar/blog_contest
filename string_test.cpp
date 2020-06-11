#include <contest_string.h>
#include <iostream>
#include <iomanip>

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



    char mem1[64] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 0, 'M', 'i', 'l', 'a', 'n', '\0', 'H', 'e', 'l', 'l', 'o', ' ', ',', ' ', '?', '?', '?', '?', '?', '!', '\0', 0 };
    char mem2[64] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 0, 'M', 'i', 'l', 'a', 'n', '\0', 'H', 'e', 'l', 'l', 'o', ' ', ',', ' ', '?', '?', '?', '?', '?', '!', '\0', 0 };

    size_t str_offset[] = { 15, 21, 40, 50 };

    std::cout << "Original" << std::endl;
    for(auto c : mem1)
        std::cout << std::setw(3) << (int) c << '|';
    std::cout << std::endl;
    for(auto c : mem1)
        std::cout << std::setw(3) << (c < 16 ? ' ' : c) << '|';
    std::cout << std::endl;


    contest::memcpy(mem1, mem1 + 5, 5);
    contest::memset(mem1 + 10, 1, 5);
    contest::strncpy(mem1 + str_offset[1] + 8, mem1 + str_offset[0], 5);
    contest::memset(mem1 + str_offset[2], 42, 20);
    contest::strncpy(mem1 + str_offset[2], mem1 + str_offset[0], 15);
    contest::strcpy(mem1 + str_offset[3], mem1 + str_offset[0]);

    memcpy(mem2, mem2 + 5, 5);
    memset(mem2 + 10, 1, 5);
    strncpy(mem2 + str_offset[1] + 8, mem2 + str_offset[0], 5);
    memset(mem2 + str_offset[2], 42, 20);
    strncpy(mem2 + str_offset[2], mem2 + str_offset[0], 15);
    strcpy(mem2 + str_offset[3], mem2 + str_offset[0]);


    std::cout << std::endl << "contest_string" << std::endl;
    for(auto c : mem1)
        std::cout << std::setw(3) << (int) c << '|';
    std::cout << std::endl;
    for(auto c : mem1)
        std::cout << std::setw(3) << (c < 16 ? ' ' : c) << '|';
    std::cout << std::endl;

    std::cout << std::endl << "string" << std::endl;
    for(auto c : mem2)
        std::cout << std::setw(3) << (int) c << '|';
    std::cout << std::endl;
    for(auto c : mem2)
        std::cout << std::setw(3) << (c < 16 ? ' ' : c) << '|';
    std::cout << std::endl;


    bool pass = true;
    for(size_t i = 0; i < 64; ++i) {
        if(mem1[i] != mem2[i]) {
            std::cerr << "memory test FAILED at [" << i << "] expected " << (int) mem2[i] << " got " << (int) mem1[i]
                      << std::endl;
            pass = false;
        }
    }
    if(pass) std::cout << "memory test PASSED" << std::endl;

    for(size_t i = 0; i < 4; ++i) {
        size_t len1 = contest::strlen(mem1 + str_offset[i]);
        size_t len2 = strlen(mem2 + str_offset[i]);
        if (len1 != len2)
            std::cerr << "string test " << i + 1 << " FAILED expected length " << len2 << " got " << len1 << std::endl;
        else
            std::cout << "string test " << i + 1 << " PASSED" << std::endl;
    }
}
