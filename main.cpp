#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <thread>
#include <chrono>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::sort;
using namespace std::this_thread;
using namespace std::chrono;

class Sort {
public:
    string sortMethod() {
        int user_choice;
        system("cls");
        const int SIZE = 3;
        string usr_Words[SIZE];
        cout << "Enter " << SIZE << " words: " << '\n';
        for (int i = 0; i < SIZE; ++i) {
            cin >> usr_Words[i];
        }
        sort(usr_Words, usr_Words + SIZE);
        cout << "Your sorted words are: " << '\n';
        for (int i = 0; i < SIZE; ++i) {
            cout << usr_Words[i] << '\n';
        }
        cout << " " << '\n';
        cout << "1: Main Menu" << '\n';
        cout << "************" << '\n';
        cout << " " << '\n';
        cin >> user_choice;
        switch (user_choice) {
        case 1:
            break;
        case 0:
            return 0;
        }
    }
};

class NumSort {
public:
    int numsortMethod() {
        int usr_choice;
        system("cls");
        const int NUMSIZE = 3;
        int usr_Nums[NUMSIZE];
        cout << "Enter " << NUMSIZE << " numbers: " << '\n';
        for (int i = 0; i < NUMSIZE; ++i) {
            cin >> usr_Nums[i];
        }
        sort(usr_Nums, usr_Nums + NUMSIZE);
        cout << "Your sorted numbers are: " << '\n';
        for (int i = 0; i < NUMSIZE; ++i) {
            cout << usr_Nums[i] << '\n';
        }
        cout << " " << '\n';
        cout << "1: Main Menu" << '\n';
        cout << "************" << '\n';
        cout << " " << '\n';
        cin >> usr_choice;
        switch (usr_choice) {
        case 1:
            break;
        case 0:
            return 0;
        }
        if (usr_choice != 1 && usr_choice != 0) {
            cout << "Invalid Input Enter Selection Again" << '\n';
            cin >> usr_choice;
        }
    }
};

NumSort numSortObj;
Sort sortObj;

class Welcome : public NumSort, public Sort {
public:
    int welcomeMethod() {
        while (1 == 1) {
            system("cls");
            int user_input;
            cout << " " << '\n';
            cout << "Welcome to the C++ Sorter!" << '\n';
            cout << "**************************" << '\n';
            cout << " " << '\n';
            cout << "Select an option below: " << '\n';
            cout << " " << '\n';
            cout << "1: Alphabetical Sort" << '\n';
            cout << " " << '\n';
            cout << "2: Number Sort" << '\n';
            cout << " " << '\n';
            cout << "0: Quit" << '\n';
            cin >> user_input;
            if (user_input != 0 && user_input != 1 && user_input != 2) {
                user_input = -1;
                return user_input;
            }
            if (user_input == -1) {
                cout << "Invalid Input Enter Selection Again" << '\n';
                sleep_for(seconds(3));
                system("cls");
                break;
            }
            switch (user_input) {
            case 1:
                sortObj.sortMethod();
                break;

            case 2:
                numSortObj.numsortMethod();
                break;
            case 0:
                return 0;
            }
        }
    }
};

Welcome welcomeObj;


int main(Welcome, NumSort, Sort) {
    welcomeObj.welcomeMethod();
}
