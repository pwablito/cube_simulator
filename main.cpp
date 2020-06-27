#include <iostream>
#include <vector>
#include <stack>
#include "cube.h"

using namespace std;

vector<MOVE> get_moves() {
    cout << ">>> ";
    string input;
    getline(cin, input);
    vector<MOVE> moves = vector<MOVE>();
    if (input == "reset") {
        moves.push_back(RESET);
        return moves;
    }
    if (input == "exit") {
        moves.push_back(EXIT);
        return moves;
    }
    if (input == "solve") {
        moves.push_back(SOLVE);
        return moves;
    }
    for (unsigned int i = 0; i < input.length(); i++) {
        switch (input[i]) {
            case 'r':
                moves.push_back(R);
                break;
            case 'R':
                moves.push_back(R_PRIME);
                break;
            case 'l':
                moves.push_back(L);
                break;
            case 'L':
                moves.push_back(L_PRIME);
                break;
            case 'f':
                moves.push_back(F);
                break;
            case 'F':
                moves.push_back(F_PRIME);
                break;
            case 'b':
                moves.push_back(B);
                break;
            case 'B':
                moves.push_back(B_PRIME);
                break;
            case 'u':
                moves.push_back(U);
                break;
            case 'U':
                moves.push_back(U_PRIME);
                break;
            case 'd':
                moves.push_back(D);
                break;
            case 'D':
                moves.push_back(D_PRIME);
        }
    }
    return moves;
}

int main(int argc, char** argv) {
    Cube cube = Cube();
    while (true) {
        cube.print();
        vector<MOVE> moves = get_moves();
        for (unsigned int i = 0; i < moves.size(); i++) {
            cube.execute_move(moves[i]);
        }
    }
    return 0;
}