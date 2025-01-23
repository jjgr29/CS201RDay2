// CS201RDay2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//NAME:
//PROJECT:  
//
// used chatGPT with the prompt
//  CREATE C++ FUNCTION TO READ 4 VALUES FROM USER AND PRINT IN SORT ASCENDING ORDER
#include <iostream>
#include <algorithm>
using namespace std;

// Function to read 4 values and print them in ascending order
void readAndSort() {
    int values[4];

    // Prompt user to enter 4 values
    cout << "Enter 4 values: ";
    for (int i = 0; i < 4; i++) {
        cin >> values[i];
    }

    // Sort the array
    sort(values, values + 4);

    // Print the sorted values
    cout << "Values in ascending order: ";
    for (int i = 0; i < 4; i++) {
        cout << values[i] << " ";
    }
    cout << endl;

    cout << "Values in decending order: ";
    for (int i = 3; i >= 0 ; i-- ) {
        cout << values[i] << " ";

    }
    cout << endl;
}

void calcDistance() {
    //prompt user
    int x = 0, y = 0, x1 = 0, y1 = 0;
    float dist, dist1;
    char userChoice = 'Y';
    srand(time(0));

    while (userChoice == 'Y' || userChoice == 'y') {
        //cout << "Please enter x & y: ";
        //cin >> x >> y;
        x = rand()%21 - 10;
        y = rand()%21 - 10;
        x1 = rand() % 21 - 10;
        y1 = rand() % 21 - 10;

        dist = sqrt(x * x + y * y);
        dist1 = sqrt(x1 * x1 + y1 * y1);

        //dist = pow((x*x + y*y), .5);
        cout << x << "," << y << " = " << dist << endl;
        cout << x1 << "," << y1 << " = " << dist1 << endl;

        cout << "Continue? ";
        cin >> userChoice;
    }
}

int main() {
    //readAndSort();
    calcDistance();

    return 0;
}
