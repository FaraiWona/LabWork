#include <iostream>
#include <string>
using namespace std;

int main() {
    // allocating int dynamically
    int* dynamicIntAllocate = new int;
    string* dynamicStringAllocate = new string;

    cout<<"Assign a value to the dynamically allocated integer: ";
    cin>> *dynamicIntAllocate;

    cout << "Assign a value to the dynamically allocated string: ";
    cin.ignore(); 
    getline(cin, *dynamicStringAllocate);
    cout<< "the value of the Dynamically allocated integer: " << *dynamicIntAllocate <<endl;
    cout << "the value of the Dynamically allocated string: " << *dynamicStringAllocate << endl;

    delete dynamicIntAllocate;
    delete dynamicStringAllocate;

    return 0;
}