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
    for (int i = 0; i < SIZE - 1; i++) {
        int iSmallest = i;
        for (int j = i+1; j < SIZE; j++) {
            if (array[j].sID < array[iSmallest].sID) {
                iSmallest = j;
            }
        }
        sData temp = array[i];
        array[i] = array[iSmallest];
        array[iSmallest] = temp;
    }
}

void outputArray(sData* array) {
    ofstream fout("210-lab-13-grades-sorted.txt");
    for (int i = 0; i < SIZE; i++) {
        fout << array[i].sID << endl;
        fout << array[i].eScore << endl;
    }
}

void consoleUpdate(sData* array) {
    double max = array[0].eScore;
    int maxID =  array[0].sID;
    double min = array[0].eScore;
    int minID = array[0].sID ;
    double median = array[0].eScore;
    double mean = 0.0;
    double difference = 0.0;
    double diffsq = 0.0;
    double sumdf = 0.0;
    double stdev = 0.0;
    double sum = 0.0;
    
    for (int i = 0; i < SIZE; i++) {
        if (array[i].eScore > max) {
            max = array[i].eScore;
            maxID = array[i].sID;
        }
    }
    
    
    for (int j = 0; j < SIZE; j++) {
        if (array[j].eScore < min) {
            min = array[j].eScore;
            minID = array[j].sID;
        }
    }
    
    for (int k = 0; k < SIZE; k++) {
        sum += array[k].eScore;
    }

    mean = sum/SIZE;
    
    for (int m = 0; m < SIZE; m++) {
        difference = array[m].eScore - mean;
        diffsq = difference * difference;
        sumdf += diffsq;
    }
    
    stdev = sqrt(sumdf/(SIZE-1));

    sData arr[SIZE];
    for (int n = 0; n < SIZE; n++) {
        arr[n] = array[n];
    }

    for (int l = 0; l < SIZE - 1; l++) {
        int iSmallest = l;
        for (int z = l+1; z < SIZE; z++) {
            if (arr[z].eScore < arr[iSmallest].eScore) {
                iSmallest = z;
            }
        }
        sData temp = arr[l];
        arr[l] = arr[iSmallest];
        arr[iSmallest] = temp;
    }

    median = ((arr[SIZE / 2 -1].eScore + arr[SIZE / 2].eScore) / 2);
    int medianID = arr[SIZE / 2].sID;
 

    cout << "Read " << SIZE << " student records" << endl;
    cout << "Sorted results written to 210-lab-13-grades-sorted.txt" << endl;
    cout << endl << "--- Summary Statistics ---" << endl;
    cout << "Minimum Score: " << min << " (Student ID: "<< minID << ")" << endl;
    cout << "Maximum Score: " << max << " (Student ID: " << maxID << ")" << endl;
    cout << "Mean Score: " << mean << endl;
    cout << "Median Score: " << median << " (Student ID: "<< medianID << ")" << endl;
    cout << "Standard Deviation: " << stdev << endl;
} 