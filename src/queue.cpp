#include <iostream>
#include <queue>

using namespace std;

int main() {

    // create a queue of string
    queue<string> animals;

    // push elements into the queue
    animals.push("Cat");
    animals.push("Dog");

    cout << "Queue: ";

    // print elements of queue
    // loop until queue is empty
    while(!animals.empty()) {

        // print the element
        cout << animals.front() << ", ";

        // pop element from the queue
        animals.pop();
    }

    cout << endl;


    // contoh ke-2
    queue<int> antrian;

    for(int i=0; i < 11; i++) {
        antrian.push(i);
    }

    cout << "Antrian: ";
    while(!antrian.empty()) {
        cout << antrian.front() << ", ";
        antrian.pop();
    }
 
    return 0;
}