//
// Created by Дональд on 2/25/2022.
//

#include <iostream>
int main(){
    using namespace std;
    int carrots; // declare an integer variable
    carrots = 25; // assign a value to the variable
    cout << "I have ";
    cout << carrots; // display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1; // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    int steinway;
    int baldwin;
    int yamaha;
    yamaha = baldwin = steinway = 88;
    return 0;
}