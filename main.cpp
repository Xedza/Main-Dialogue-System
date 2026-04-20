#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "container.h"
#include "scenes.h"

int main() {
    system("clear");
    std::cout << "T: What's up man! You seem new to this school. What's your name?\n";
    std::cin >> playerName;
    std::cout << "T: Nice to meet you, " << playerName << "! Want me to show you around school?\n" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\n";
    std::cout << "Follow tom? (yes/no)\n";
    std::string followTom;
    std::cin >> followTom;

    if (followTom == "yes") {
        std::cout << playerName << ": Sure, lead the way!\n" << std::endl;
        t.relationship += 20;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "T: Sure! follow me\n" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "T: Your relationship with Tom is now " << t.relationship << ".\n" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        system("clear");
    }
    if (followTom == "no") {
        std::cout << playerName << ": Nah, I think I'll explore on my own.\n" << std::endl;
        t.relationship -= 20;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "T: Oh, okay. Suit yourself.\n" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "T: Your relationship with Tom is now " << t.relationship << ".\n" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        system("clear");
    }  else {
        std::cout << "Put a valid command and make sure it is lowercase!" << std::endl;
    }

    return 0;
}
