#include <string>
#include <vector>

using namespace std;

// User class/struct
struct User {
    string username;
    string password;
    vector<string> activityHistory;
    double balance;
};

// Function prototypes
void displayLogin();
void displayRandomAd();
bool loginUser(const string& username, const string& password);
void performTransaction(User& user, double amount, const string& transactionType);

int main();

// This design of a prototype terminal online banking simulator is designed to be
// as simple as possible. It uses a struct to store username & password & user activity history & balance information from users.
// void displayLogin() is a function that displays the login screen for users
// void displayRandomAd() is a function that displays a random ad for users in the login screen
// bool loginUser(const string& username, const string& password) is a function that checks if the username and password are correct
// void performTransaction(User& user, double amount, const string& transactionType) is a function that performs a transaction for the user (deposit or withdraw)
// int main() is the main function that runs the program
// This prototype's structure and coding style in traditional for C++ programs