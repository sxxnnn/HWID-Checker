// HWID Checker.cpp ------- sxxn

// default include.
#include <iostream>
using namespace std;

// includes modules to display usernames.
#include <windows.h>
#include <Lmcons.h>

// std::cout displays text or invisible spaces. uses R to ignore commands and display ASCII characters.
int main()
{
    int main();
    {
        SetConsoleTitle(TEXT("sxxn HWID checker"));
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 13);
        ;
    }
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    int main();
    {
        TCHAR name[UNLEN + 1];
        DWORD size = UNLEN + 1;
        // gets the username and displays it, if the user is not named it displays a different text.
        if (GetUserName((TCHAR*)name, &size))
            wcout << L"  Hello, " << name << L"!\n";
        else
            cout << "  Hello,\n";
    }
    std::cout << "                                                       \n";
    std::cout << "sxxn HWID checker\n";
    std::cout << "sxxn HWID checker\n";
    std::cout << "                                                       \n";
    system("pause"); // pauses the application and waits for user input to continue. displays the text "press any key to continue".
    system("cls"); // system cls clears the cmd screen. in this case is to clear unwanted text.
    std::cout << "                                                       \n";
    std::cout << "sxxn HWID checker\n";
    std::cout << "sxxn HWID checker\n";
    std::cout << "                                                       \n";
    std::cout << "----------- SERIALS ------------\n";
    std::cout << "                                                       \n";
    std::cout << "[ System UUID ]\n";
    system("wmic csproduct get UUID"); // gets the system UUID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Motherboard : Serial Number ]\n";
    system("wmic baseboard get product,serialnumber"); // gets the mobo name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Disk Name : Serial Number ]\n";
    system("wmic diskdrive get model,serialnumber"); // gets the diskdrive name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Graphics Card : Serial Number (pnp) ]\n";
    system("wmic path win32_videoController get name,pnpdeviceid"); // gets the gpu name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ RAM Serial Number\n";
    system("wmic memorychip get serialnumber"); // gets the gpu name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ MAC Address ]\n";
    system("getmac"); // gets MAC Address(s). displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "Refresh to check again -->\n";
    system("pause");
    // copy pasted a second time so they can refresh and see if their ID's have changed.
    std::cout << "                                                       \n";
    std::cout << "sxxn HWID checker\n";
    std::cout << "sxxn HWID checker\n";
    std::cout << "                                                       \n";
    std::cout << "----------- SERIALS ------------\n";
    std::cout << "                                                       \n";
    std::cout << "[ System UUID ]\n";
    system("wmic csproduct get UUID"); // gets the system UUID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Motherboard : Serial Number ]\n";
    system("wmic baseboard get product,serialnumber"); // gets the mobo name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Disk Name : Serial Number ]\n";
    system("wmic diskdrive get model,serialnumber"); // gets the diskdrive name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Graphics Card : Serial Number (pnp) ]\n";
    system("wmic path win32_videoController get name,pnpdeviceid"); // gets the gpu name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ RAM Serial Number\n";
    system("wmic memorychip get serialnumber"); // gets the gpu name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ MAC Address ]\n";
    system("getmac"); // gets MAC Address(s). displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "Exit -->\n";
    system("pause");
    system("cls");
    // Ends software. If you want to refresh more just copy paste it again.

    // THIS IS FOR EDUCATIONAL PURPOSES ONLY.
}
