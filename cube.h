#include <stack>
#include <vector>

using namespace std;

enum COLOR{
    WHITE, YELLOW, RED, ORANGE, BLUE, GREEN
};

enum MOVE {
    R, R_PRIME, L, L_PRIME,
    F, F_PRIME, B, B_PRIME,
    U, U_PRIME, D, D_PRIME,
    RESET, SOLVE, EXIT,
};

class Cube {
private:
    stack<MOVE> move_stack = stack<MOVE>();
    // Begin corners
    struct ufr {
        COLOR u;
        COLOR f;
        COLOR r;
    };

    struct ubr {
        COLOR u;
        COLOR b;
        COLOR r;
    };

    struct ufl {
        COLOR u;
        COLOR f;
        COLOR l;
    };

    struct ubl {
        COLOR u;
        COLOR b;
        COLOR l;
    };

    struct dfr {
        COLOR d;
        COLOR f;
        COLOR r;
    };

    struct dbr {
        COLOR d;
        COLOR b;
        COLOR r;
    };

    struct dfl {
        COLOR d;
        COLOR f;
        COLOR l;
    };

    struct dbl {
        COLOR d;
        COLOR b;
        COLOR l;
    };

    // End corners

    // Start edges

    struct uf {
        COLOR u;
        COLOR f;
    };

    struct ub {
        COLOR u;
        COLOR b;
    };

    struct ur {
        COLOR u;
        COLOR r;
    };

    struct ul {
        COLOR u;
        COLOR l;
    };

    struct fr {
        COLOR f;
        COLOR r;
    };

    struct fl {
        COLOR f;
        COLOR l;
    };

    struct br {
        COLOR b;
        COLOR r;
    };

    struct bl {
        COLOR b;
        COLOR l;
    };

    struct df {
        COLOR d;
        COLOR f;
    };

    struct db {
        COLOR d;
        COLOR b;
    };

    struct dr {
        COLOR d;
        COLOR r;
    };

    struct dl {
        COLOR d;
        COLOR l;
    };

    // End edges
    
    ufr ufr;
    ufl ufl;
    ubr ubr;
    ubl ubl;
    dfr dfr;
    dfl dfl;
    dbr dbr;
    dbl dbl;

    uf uf;
    ul ul;
    ub ub;
    ur ur;
    fr fr;
    fl fl;
    br br;
    bl bl;
    df df;
    db db;
    dr dr;
    dl dl;

    COLOR u;
    COLOR d;
    COLOR f;
    COLOR b;
    COLOR r;
    COLOR l;

    void turn_r();
    void turn_r_prime();
    void turn_l();
    void turn_l_prime();
    void turn_f();
    void turn_f_prime();
    void turn_d();
    void turn_d_prime();
    void turn_b();
    void turn_b_prime();
    void turn_u();
    void turn_u_prime();
    void reset();
    string move_to_string(MOVE move);
public:
    Cube() {
        this->u = WHITE;
        this->d = YELLOW;
        this->f = RED;
        this->b = ORANGE;
        this->r = BLUE;
        this->l = GREEN;
        this->reset();
    }
    void print();
    vector<MOVE> solve();
    MOVE invert_move(MOVE move);
    void execute_move(MOVE move);
};
