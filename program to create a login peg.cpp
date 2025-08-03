#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Handle for console output
    CONSOLE_FONT_INFOEX fontInfo; // Structure to store font info
    fontInfo.cbSize = sizeof(fontInfo); // Set structure size
    fontInfo.dwFontSize.Y = 24; // Set font size (Y axis)
    fontInfo.FontWeight = 400; // Set font weight (400 is normal)
    wcscpy_s(fontInfo.FaceName, L"Consolas"); // Set font family name (Consolas)
    SetCurrentConsoleFontEx(hConsole, false, &fontInfo); // Set the new font

    // Set text color and background color
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE);

    // Print the login prompt
    cout << "Please enter your username and password.\n";
    cout << "Username: ";
    string username;
    cin >> username;
    cout << "Password: ";
    string password = "";
    char ch;
    while ((ch = _getch()) != '\r') { // Loop until Enter key is pressed
        password += ch;
        cout << "*";
    }

    // Clear the console and print the login message
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
    cout << "Login successful. Welcome, " << username << "!\n";

    return 0;
}

