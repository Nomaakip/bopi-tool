#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <shellapi.h>

std::string input;
std::string data;
std::string url;

void ok() {
    std::cin >> input;
    if (input == "1") {
        std::cout << "enter asar file url: ";
        std::cin >> url;
        std::cout << "Downloading custom asar file...\n";
        std::string filePath = "launcher/resources/app.asar";

        std::string command = "curl -L " + url + " -o " + filePath;
        int result = system(command.c_str());

        if (result == 0) {
            std::cout << "File downloaded successfully\n";
            ok();
        }
        else {
            std::cout << "error\n";
            ok();
        }
    }

    if (input == "2") {
        std::string url = "https://files.catbox.moe/pv0q24.asar";
        std::cout << "Downloading custom asar file...\n";
        std::string filePath = "launcher/resources/app.asar";

        std::string command = "curl -L " + url + " -o " + filePath;
        int result = system(command.c_str());

        if (result == 0) {
            std::cout << "File downloaded successfully!\n";
            ok();
        }
        else {
            std::cout << "error\n";
            ok();
        }
    }

}

int main()
{
    std::cout << "bopi-tool public\n";
    std::cout << "MAKE SURE THE EXE IS IN THE 'Bopimo!' FOLDER!\n ";
    std::cout << "1.custom asar(enter link)  2. Tenacity 5.0 asar" << "\n";
    ok();
    }
