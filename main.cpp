#include <iostream>
#include "cube.h"

using namespace std;

string request_input() {
    cout << "Please enter moves: ";
    string input;
    getline(cin, input);
    return input;
}

int main(int argc, char** argv) {
    Cube cube = Cube();
    while (true) {
        cube.print();
        string command = request_input();
        if (command == "reset") {
            cube.reset();
        }
        else {
            for (unsigned int i = 0; i < command.length(); i++) {
                char letter = command[i];
                switch(letter) {
                    case 'r':
                        cube.turn_r();
                        break;
                    case 'R':
                        cube.turn_r_prime();
                        break;
                    case 'l':
                        cube.turn_l();
                        break;
                    case 'L':
                        cube.turn_l_prime();
                        break;
                }
            }
        }
    }
    return 0;
}