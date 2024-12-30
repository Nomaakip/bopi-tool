#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <shellapi.h>
#include <filesystem>
#include <fstream>



std::string input;
std::string data;
std::string url;

void ok() {
    std::cin >> input;
    if (input == "1") {
        std::cout << "enter asar file url: ";
        std::cin >> url;
        std::cout << "Downloading custom asar file...\n";
        std::string filePath = "C:/Users/%USERNAME%/AppData/Roaming/bopimo!/launcher/resources/app.asar";
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
        std::string filePath = "C:/Users/%USERNAME%/AppData/Roaming/bopimo!/launcher/resources/app.asar";

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
        std::string url = "https://github.com/Nomaakip/bopi-tool/raw/refs/heads/main/for-mod-loader-download-windowsonamac/GUMM_mod_loader.tscn";
        std::cout << "Downloading the mod loader...\n";
        std::string filePath = "C:/Users/%USERNAME%/AppData/Roaming/bopimo!/Client/GUMM_mod_loader.tscn";

        std::string command = "curl -L " + url + " -o " + filePath;
        int result = system(command.c_str());

        if (result == 0) {
            std::cout << "File downloaded successfully!\n";
            std::string url = "https://github.com/Nomaakip/bopi-tool/raw/refs/heads/main/for-mod-loader-download-windowsonamac/override.cfg";
            std::cout << "Downloading override.cfg...\n";
            std::string filePath = "C:/Users/%USERNAME%/AppData/Roaming/bopimo!/Client/override.cfg";

            std::string command = "curl -L " + url + " -o " + filePath;
            int result = system(command.c_str());
            if (result == 0) {
                std::cout << "File downloaded successfully!\n";
                std::string url = "https://github.com/Nomaakip/bopi-tool/raw/refs/heads/main/for-mod-loader-download-windowsonamac/ModdedIcon.png";
                std::cout << "Downloading custom bopimo logo...\n";
                std::string filePath = "C:/Users/%USERNAME%/AppData/Roaming/bopimo!/Client/ModdedIcon.png";

                std::string command = "curl -L " + url + " -o " + filePath;
                int result = system(command.c_str());

                if (result == 0) {
                    std::cout << "File downloaded successfully!\n";
                    std::string url = "https://github.com/Nomaakip/bopi-tool/raw/refs/heads/main/for-mod-loader-download-windowsonamac/mods.zip";
                    std::cout << "Downloading mods folder...\n";
                    std::string filePath = "C:/Users/%USERNAME%/AppData/Roaming/bopimo!/Client/mods.zip";
                    std::string command = "curl -L " + url + " -o " + filePath;
                    int result = system(command.c_str());
                    if (result == 0) {
                        std::cout << "File downloaded successfully!\n";
                        std::string url = "https://github.com/Nomaakip/bopi-tool/raw/refs/heads/main/for-mod-loader-download-windowsonamac/mods_config.JSON";
                        std::cout << "Downloading mods_config.json..\n";
                        std::string filePath = "C:/Users/%USERNAME%/AppData/Roaming/bopimo!/Client/settings/mods_config.json";
                        std::string command = "curl -L " + url + " -o " + filePath;
                        int result = system(command.c_str());
                        if (result == 0) {
                            std::cout << "File downloaded successfully!\n";
                            std::cout << "NOTE: YOU NEED TO EXTRACT THE MODS FOLDER IN  '%appdata%/bopimo/client'. In the next few updates, the mods folder will automatically be extracted (note:i was lazy to use libzip)\n";
                            ok();
                        }
                    }
                }
                else {
                    std::cout << "error\n";
                    ok();
                }
            }
        }
        else {
            std::cout << "error\n";
            ok();
        }
    }

    if (input == "update") {
        std::cout << "Downloading the updater..\n";
        std::string url = "https://github.com/Nomaakip/bopi-tool-updater/releases/download/dev/updater.bopi.tool.exe";
        std::string filePath = "updater.exe";
        std::string command = "curl -L " + url + " -o " + filePath;
        int result = system(command.c_str());

        if (result == 0) {
            std::cout << "Updater downloaded successfully!\n";
            std::system("updater.exe");
            ok();
        }
        else {
            std::cout << "error\n";
            ok();
        }
    }

    else {
        std::cout << "'" + input + "' is invalid. please enter a valid  number.\n";
        ok();
    }
}

int main()
{
    std::cout << R"(
 __                                    __                   ___      
/\ \                      __          /\ \__               /\_ \     
\ \ \____    ___   _____ /\_\         \ \ ,_\   ___     ___\//\ \    
 \ \ '__`\  / __`\/\ '__`\/\ \  _______\ \ \/  / __`\  / __`\\ \ \   
  \ \ \L\ \/\ \L\ \ \ \L\ \ \ \/\______\\ \ \_/\ \L\ \/\ \L\ \\_\ \_ 
   \ \_,__/\ \____/\ \ ,__/\ \_\/______/ \ \__\ \____/\ \____//\____\
    \/___/  \/___/  \ \ \/  \/_/          \/__/\/___/  \/___/ \/____/
                     \ \_\                                           
                      \/_/                                           
)" << "\n";
    std::cout << "Welcome to bopi-tool b5\n";
    std::cout << "1.custom asar(enter link)  2. Tenacity 5.0 asar   3.Bopimo mod manager(credits:WindowsOnAMac)" << "\n";
    std::cout << "type 'update' to update to the latest version of bopi-tool.\n";
    std::cout << "bopimo modding discord: discord.gg/DGhzzty39u\n";
    ok();
    }
