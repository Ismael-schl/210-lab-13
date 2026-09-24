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
    sData array[SIZE];
    ifstream fin("210-lab-13-grades.txt");
    for (int i = 0; i < SIZE; i++) {
        fin >> array[i].sID;
        fin >> array[i].eScore;
    }
    sortArray(array);
    outputArray(array);
    consoleUpdate(array);

}

void sortArray(sData* array) {
    

}

void outputArray(sData* array) {
    ofstream fout("210-lab-13-grades-sorted.txt");
    for (int i = 0; i < SIZE; i++) {
        fout << array[i].sID << endl;
        fout << array[i].eScore << endl;
    }
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