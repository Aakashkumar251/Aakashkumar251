#include <iostream>
using namespace std;
class Consumers {
    private:
        string name;
        int units;
        float amount;
    public:
        void setDetails(string name, int units) {
            this -> name = name;
            this -> units = units;
        }
        void Amount(int amount) {
            this -> amount = amount;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Units: " << units << endl;
            cout << "Total amount charged: " << amount << endl;
        }
};
float totalCharge(int units) {
    float total = 0;
    if (units <= 100) {
        total = units * 60;
    }
    else if (units <= 300) {
        total = 100 * 60 + (units - 100) * 80;
    }
    else {
        total = 100 * 60 + 200 * 80 + (units - 300) * 90;
    }
    total /= 100;
    total += 50;
    if (total > 300) {
        total += (total * 15) / 100;
    }
    return total;
}
int main() {
    int n;
    cout << "Enter number of consumers: ";
    cin >> n;
    Consumers consumer[n];
    string name;
    int units;
    for (int i = 0; i < n; i++) {
        cout << "Enter name, units: ";
        cin >> name >> units;
        consumer[i].setDetails(name, units);
        int ans = totalCharge(units);
        consumer[i].Amount(ans);
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        consumer[i].display();
        cout << endl;
    }
    return 0;
}
