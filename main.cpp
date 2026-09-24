//Lab 13 | COMSC 210 | Ismael Hadi
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

const int SIZE = 150;

struct sData {
    int sID;
    double eScore;
};

void sortArray(sData* array);

void outputArray(sData* array);

void consoleUpdate(sData* array);

int main() {
    sData 
    ifstream fin("210-lab-13-grades.txt")


}

void sortArray(sData* array) {
    

}


void consoleUpdate(sData* array) {
    cout << "Read " << SIZE << " student records" << endl;
    cout << "Sorted results written to 210-lab-13-grades-sorted.txt" << endl;
    cout << endl << "--- Summary Statistics ---" << endl;
    cout << "Minimum Score: " << << " (Student ID: "<< << ")" << endl;
    cout << "Maximum Score: " << << " (Student ID: "<< << ")" << endl;
    cout << "Mean Score: " << << endl;
    cout << "Median Score: " << << " (Student ID: "<< << ")" << endl;
} 