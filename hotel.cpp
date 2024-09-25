#include <iostream>
using namespace std;
class Hotel {
    private:
        int room_no;
        string name;
        int tariff;
        int nod;
        float calc() {
            float amount = nod * tariff;
            if (amount > 10000) amount *= 1.05;
            return amount;
        }
    public:
        void checkin(int room_no, string name, int tariff, int nod) {
            this -> room_no = room_no;
            this -> name = name;
            this -> tariff = tariff;
            this -> nod = nod;
        }
        void checkout() {
            cout << "Name: " << name << endl;
            cout << "Room no: " << room_no << endl;
            cout << "Tariff: " << tariff << endl;
            cout << "NOD: " << nod << endl;
            cout << "Total amount: " << calc() << endl;
            cout << endl;
        }
};
int main () {
    int n;
    cout << "Enter number of customers: ";
    cin >> n;
    Hotel customer[n];
    
    int room_no;
    string name;
    int tariff;
    int nod;
    for (int i = 0; i < n; i++) {
        cout << "Enter room number, name, tariff, number of days: ";
        cin >> room_no >> name >> tariff >> nod;
        customer[i].checkin(room_no, name, tariff, nod);
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        customer[i].checkout();
    }
    return 0;
}
