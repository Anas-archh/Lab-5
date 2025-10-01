#include <iostream>
#include <cstring>
#include <cmath>
#include <utility>

using namespace std;

class TollBooth
{
    private:
        unsigned int r;

    public:
        int total_num_of_cars = 0;
        int total_amount_of_money = 0;
    
        void payingcar() {
            total_num_of_cars ++;
            total_amount_of_money += 50;
        }
        void nopaycar() {
            total_num_of_cars ++;
        }

        void display() {
            cout << "Total Num of cars: " << total_num_of_cars << "\nTotal Num of money: " << total_amount_of_money << endl;
        }

};

int main() {
    TollBooth toll1;
    string letter = "";
    while (true) {

        cout << "Enter your Char: ";
        cin >> letter;
        if (letter == "p") {
            toll1.payingcar();
        }
        else if (letter == "n") {
            toll1.nopaycar();
        }
        else if (letter == "q") {
            break;
        }
        else {
            cout << "Enter a valid character! \n";
        }
    }

    toll1.display();
    return 0;
}