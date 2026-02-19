#include <iostream>
using namespace std;

int main() {
    float sales[12], total = 0, average;
    int highest = 0, lowest = 0;

    for(int i = 0; i < 12; i++) {
        cout << "Enter sales for month " << i + 1 << ": ";
        cin >> sales[i];
        total += sales[i];

        if(sales[i] > sales[highest])
            highest = i;

        if(sales[i] < sales[lowest])
            lowest = i;
    }

    average = total / 12;

    cout << "\nTotal Annual Sales: " << total << endl;
    cout << "Average Monthly Sales: " << average << endl;
    cout << "Highest Sales Month: " << highest + 1 << " (" << sales[highest] << ")" << endl;
    cout << "Lowest Sales Month: " << lowest + 1 << " (" << sales[lowest] << ")" << endl;

    return 0;
}
