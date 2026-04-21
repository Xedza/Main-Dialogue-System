#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
// Get container, but there is none so do it at home.

// Player Class
class Player {
    public:
        int health = 100;
        int stamina = 100;
};


// Other NPC class
class Tom {
    public:
        int relationship = 0;
};

class Ana {
    public:
        int relationship = 0;

};
// Simplifications
Player plr;
Ana a;
Tom t;

// Strings
std::string playerName;

// Int

// Bools


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
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "< - Field - >\n";
        std::cout << "\n"; 
        std::cout << "\n";
        std::cout << "*After a bit we decided to end at the field.*\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "Tom: Welp that was basically it! This is the park.\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << playerName << ": Thanks man! I appreciate it. I think I'm going to go in now. Class starts soon.\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Tom: Alright, see ya!\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
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
    }
    
    std::cout << "< - Hallway - >";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << playerName;
    
    return 0;
}

