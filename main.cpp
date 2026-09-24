//Lab 13 | COMSC 210 | Ismael Hadi
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

struct sData {
    int sID;
    double eScore;
};

void sortArray(sData* array);

void consoleUpdate(sData* array);

int main() {

}




void consoleUpdate(sData* array) {
    cout << "Read " << sizeof(array) << " student records" << endl;
    cout << "Sorted results written to 210-lab-13-grades-sorted.txt" << endl;
    cout << endl << "--- Summary Statistics ---" << endl;
    cout << "Minimum Score: " << << endl;
    cout <<" Maximum Score: "
}