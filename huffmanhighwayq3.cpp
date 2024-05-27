#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int average(int array[], int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += array[i];
    }
    return sum / N;
}

int largest(int array[], int N) {
    int largest = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

int lowest(int array[], int N) {
    int lowest = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] < lowest) {
            lowest = array[i];
        }
    }
    return lowest;
}
int numaboveavg(int array[], int N) {
    int reference = average(array, N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] > reference) {
            count++;
        }
    }
    return count;
}

int numbelowavg(int array[], int N) {
    int reference = average(array, N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] < reference) {
            count++;
        }
    }
    return count;
}

int main() {
    int examscores[10];
    cout << "Enter 10 integer exam scores:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> examscores[i];
    }

    cout << average(examscores, 10) << endl;
    cout <<  largest(examscores, 10) << endl;
    cout <<  lowest(examscores, 10) << endl;
    cout << numaboveavg(examscores, 10) << endl;
    cout <<  numbelowavg(examscores, 10) << endl;

    return 0;
}
