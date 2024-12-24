#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <shellapi.h>
#include <filesystem>

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
            std::cout << "error  https://files.catbox.moe/s0zmr7.asar\n";
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

    if (input == "3") {
        std::string url = "https://file.io/PJN1sBWoP3VQ";
        std::cout << "Downloading custom exe file...\n";
        std::string filePath = "Client/bopimo_client.exe";

        std::string command = "curl -L " + url + " -o " + filePath;
        int result = system(command.c_str());

        if (result == 0) {
            std::cout << "File downloaded successfully!\n";
            ok();
        }
        else {
            std::cerr << "error\n";
            ok();
        }
    }

    if (input == "4") {
        std::string url = "https://file.io/zCbKN6JkSdgf";
        std::cout << "Downloading custom exe file...\n";
        std::string filePath = "Client/bopimo_client.exe";

        std::string command = "curl -L " + url + " -o " + filePath;
        int result = system(command.c_str());

        if (result == 0) {
            std::cout << "File downloaded successfully!\n";
            std::string url = "https://file.io/hf0FHiuMC5Mr";
            std::cout << "Downloading custom dll file...\n";
            std::string filePath = "Client/bopimo.dll";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());

            if (result == 0) {
                std::cout << "File downloaded successfully!\n";
                std::wstring folderPath = L"client\\mods";

                if (CreateDirectory(folderPath.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError()) {
                    std::cout << "Folder created successfully." << std::endl;
                }
                else {
                    std::cerr << "Failed to create folder. Error code: " << GetLastError() << std::endl;
                }
                ok();
            }
            else {
                std::cout << "error\n";
                ok();
            }
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
    std::cout << "1.custom asar(enter link)  2. Tenacity 5.0 asar 3.meowimo (bopimo cat edition)  4.Bopimo mod manager(exe and folder download)" << "\n";
    ok();
    }
