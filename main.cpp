#include <iostream>
#include <vector>
#include "cube.h"

using namespace std;

enum MOVE {
    R, R_PRIME, L, L_PRIME,
    F, F_PRIME, B, B_PRIME,
    U, U_PRIME, D, D_PRIME,
    RESET, SOLVE, EXIT,
};

vector<MOVE> get_moves() {
    cout << "cube #> ";
    string input;
    getline(cin, input);
    return vector<MOVE>();
}

int main(int argc, char** argv) {
    Cube cube = Cube();
    while (true) {
        cube.print();
        vector<MOVE> moves = get_moves();
        for (unsigned int i = 0; i < moves.size(); i++) {
            MOVE to_move = moves[i];
            switch(to_move) {
                case R:
                    cube.turn_r();
                    break;
                case R_PRIME:
                    cube.turn_r_prime();
                    break;
                case L:
                    cube.turn_l();
                    break;
                case L_PRIME:
                    cube.turn_l_prime();
                    break;
                case F:
                    cube.turn_f();
                    break;
                case F_PRIME:
                    cube.turn_f_prime();
                    break;
                case B:
                    cube.turn_b();
                    break;
                case B_PRIME:
                    cube.turn_b_prime();
                    break;
                case U:
                    cube.turn_u();
                    break;
                case U_PRIME:
                    cube.turn_u_prime();
                    break;
                case D:
                    cube.turn_d();
                    break;
                case D_PRIME:
                    cube.turn_d_prime();
                    break;
                case RESET:
                    cube.reset();
                    break;
                case SOLVE:
                    //cube.solve();
                    break;
                case EXIT:
                    exit(0);
            }
        }
    }
    return 0;
}