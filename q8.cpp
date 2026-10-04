#include <iostream>
using namespace std;

int main() {
    float price;

    cout << "Enter purchase amount: ";
    cin >> price;

    float discount;

    discount = (price < 100) ? 0 :
               (price <= 500) ? 10 :
               (price <= 1000) ? 15 : 20;

    float finalPrice = price - (price * discount / 100);

    cout << "Discount = " << discount << "%" << endl;
    cout << "Final Price = Rs " << finalPrice;

    return 0;
}