#ifndef AUTH_H
#define AUTH_H

#include <string>

using namespace std;

bool authenticateUser(const string &username, const string &password);

string getPasswordInput();

void showLoadingIndicator();

void setAuth();

#endif // AUTH_H