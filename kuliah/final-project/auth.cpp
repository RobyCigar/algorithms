#include "auth.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

bool authenticateUser(const string &username)
{
    // You can implement your authentication logic here
    // For simplicity, let's use hardcoded values for demonstration
    return (username == "admin");
}

string getPasswordInput()
{
    string password;
    char ch;

    cout << "Enter password: ";

    // Set the console to disable echoing characters
    cin >> noskipws;

    while ((ch = cin.get()) != '\n')
    {
        password += ch;
        cout << '*';
    }

    // Reset the console to enable echoing characters
    cin >> skipws;

    return password;
}

void showLoadingIndicator()
{
    system("clear");

    float progress = 0.0;
    while (progress < 1.0)
    {
        int barWidth = 70;

        std::cout << "[";
        int pos = barWidth * progress;
        for (int i = 0; i < barWidth; ++i)
        {
            if (i < pos)
                std::cout << "=";
            else if (i == pos)
                std::cout << ">";
            else
                std::cout << " ";
        }
        std::cout << "] " << int(progress * 100.0) << " %\r";
        std::cout.flush();
        this_thread::sleep_for(chrono::milliseconds(300));

        progress += 0.16;
    }
    std::cout << std::endl;
    system("clear");
}

void setAuth() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    if (authenticateUser(username))
    {
        showLoadingIndicator();
        cout << "\nLogin successful. Welcome, " << username << "!\n";
    }
    else
    {
        cout << "\nLogin failed. Invalid username or password.\n";
        exit(0);
    }
}