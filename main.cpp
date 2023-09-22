#include <iostream>

using namespace std;

int main () {
    cout << "enter your wage in hours, type 'exit' to exit" << endl;
    string userWage;
    cin >> userWage;

    if (userWage == "exit")
        exit(2);
    try {
        int intWage = stoi(userWage);
        cout << "enter how many hours you worked" << endl;

        int userHours;
        cin >> userHours;

        int userPaycheckCurrent = intWage * userHours;

        cout << "you've made $" << userPaycheckCurrent << "!\n" << endl;
    }
    catch (std::invalid_argument&) {
        cout << "INVALID INPUT" << endl;
        return 1;
    }
    system("pause");
}


