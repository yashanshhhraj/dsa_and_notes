#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    // ? Writing Data
    // // File Open Karna
    // ofstream fout; // <-- fout is object of ofstream
    // fout.open("zoom.txt"); // <-- File created automatically and opened if not present, else it is read

    // fout << "Hello India" << endl;

    // fout.close(); // <-- Release Resources

    // ? Reading Data
    // ifstream fin;
    // fin.open("zoom.txt");

    // // Reading File
    // char c = fin.get();
    // // fin >> c; // <-- Reads character by character
    // while(!fin.eof()) {
    //     cout << c;
    //     c = fin.get();
    // }

    // fin.close();

    // ? File handling with vectors
    // vector<int> arr(5);

    // cout << "Enter the input: " << endl;

    // for(int i = 0; i < 5; i++)
    // cin >> arr[i];

    // // File Opening
    // ofstream fout;
    // fout.open("zero.txt");

    // fout << "Original Data" << endl;
    // for(int i = 0; i < 5; i++) {
    //     fout << arr[i] << " ";
    // }
    
    // fout << endl << "Sorted Data" << endl;
    // sort(arr.begin(), arr.end());
    
    // for(int i = 0; i < 5; i++) {
    //     fout << arr[i] << " ";
    // }
    
    // fout.close();

    // ofstream fout;
    // fout.open("z1.txt");
    // fout << "Hello India" << endl;
    // fout << "Hello Yashansh" << endl;
    // fout << "Hello Brother" << endl;
    // fout.close();

    // ifstream fin;
    // fin.open("z1.txt");

    // string line;

    // while(getline(fin, line)) {
    //     cout << line << endl;
    // }

    // fin.close();

    // Reading & Writing Both
    fstream file("data.txt", ios::in | ios::out | ios::app); // open for read/write/append

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    file << "Appended line\n";

    file.seekg(0);  // move pointer to beginning for reading
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}