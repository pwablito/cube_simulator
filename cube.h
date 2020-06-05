#include "colors.h"

class Cube {
private:

    // Begin corners
    struct ufr {
        color u;
        color f;
        color r;
    };

    struct ubr {
        color u;
        color b;
        color r;
    };

    struct ufl {
        color u;
        color f;
        color l;
    };

    struct ubl {
        color u;
        color b;
        color l;
    };

    struct dfr {
        color d;
        color f;
        color r;
    };

    struct dbr {
        color d;
        color b;
        color r;
    };

    struct dfl {
        color d;
        color f;
        color l;
    };

    struct dbl {
        color d;
        color b;
        color l;
    };

    // End corners

    // Start edges

    struct uf {
        color u;
        color f;
    };

    struct ub {
        color u;
        color b;
    };

    struct ur {
        color u;
        color r;
    };

    struct ul {
        color u;
        color l;
    };

    struct fr {
        color f;
        color r;
    };

    struct fl {
        color f;
        color l;
    };

    struct br {
        color b;
        color r;
    };

    struct bl {
        color b;
        color l;
    };

    struct df {
        color d;
        color f;
    };

    struct db {
        color d;
        color b;
    };

    struct dr {
        color d;
        color r;
    };

    struct dl {
        color d;
        color l;
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

    color u;
    color d;
    color f;
    color b;
    color r;
    color l;

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
};