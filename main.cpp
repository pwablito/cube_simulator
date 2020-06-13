#include <iostream>
#include "cube.h"

using namespace std;

int main(int argc, char** argv) {
    Cube cube = Cube();
    cube.turn_r_prime();
    cube.turn_l_prime();
    cube.print();
    return 0;
}