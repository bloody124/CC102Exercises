#include <iostream>
using namespace std;

int main() {
    int numStudents;
    float score, sum = 0, average;

    cout << "Enter number of students: ";
    cin >> numStudents;

    for(int i = 1; i <= numStudents; i++) {
        cout << "Enter quiz score of student " << i << ": ";
        cin >> score;
        sum += score;
    }

    average = sum / numStudents;

    cout << "\nClass Average: " << average << endl;

    return 0;
}
