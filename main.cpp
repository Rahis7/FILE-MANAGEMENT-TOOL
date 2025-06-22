#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile(const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    string data;
    cout << "Enter data to write to the file: ";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data written successfully.\n";
}

void appendToFile(const string& filename) {
    ofstream file(filename, ios::app);
    if (!file) {
        cout << "Error opening file for appending!" << endl;
        return;
    }
    string data;
    cout << "Enter data to append to the file: ";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data appended successfully.\n";
}

void readFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return;
    }
    string line;
    cout << "Contents of the file:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    string filename = "data.txt";
    int choice;

    do {
        cout << "\nFile Management Menu:\n";
        cout << "1. Write to file\n";
        cout << "2. Append to file\n";
        cout << "3. Read from file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
