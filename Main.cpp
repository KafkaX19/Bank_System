
#include<iostream>
#include<iomanip>
#include<cstdlib> 
#include<string>
#include"App.cpp"

using namespace std;

int main() {
    string username = "Rith";
    int password = 999;
    string user;
    int pass;
    cout << "\t\tAPP LOGIN" << std::endl;
    cout << "Enter Your username: ";
    cin >> user;
    if (user == username) {
        cout << "Enter password: " << endl;
        cin >> pass;
        if (pass == password) {
            cout << "Successful Login!" << endl;
            Main_Menu();
        }
        else {
            cout << "Incorrect Password!" << endl;
        }
    }
    else {
        cout << "Incorrect Username!" << endl;
    }
};


