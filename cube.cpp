#include "cube.h"

void Cube::print() {

}

void Cube::turn_r() {

}

void Cube::turn_r_prime() {

}

void Cube::turn_l() {

}

void Cube::turn_l_prime() {

}

void Cube::turn_f() {

}

void Cube::turn_f_prime() {

}

void Cube::turn_d() {

}

void Cube::turn_d_prime() {

}

void Cube::turn_b() {

}

void Cube::turn_u_prime() {

}

void Cube::reset() {
    this->ufr.u = this->u;
    this->ufr.f = this->f;
    this->ufr.r = this->r;

    this->ufl.u = this->u;
    this->ufl.f = this->f;
    this->ufl.l = this->l;

    this->ubr.u = this->u;
    this->ubr.b = this->b;
    this->ubr.r = this->r;

    this->ubl.u = this->u;
    this->ubl.b = this->b;
    this->ubl.l = this->l;

    this->dfr.d = this->d;
    this->dfr.f = this->f;
    this->dfr.r = this->r;

    this->dfl.d = this->d;
    this->dfl.f = this->f;
    this->dfl.l = this->l;

    this->dbr.d = this->d;
    this->dbr.b = this->b;
    this->dbr.r = this->r;

    this->dbl.d = this->d;
    this->dbl.b = this->b;
    this->dbl.l = this->l;


    this->uf.u = this->u;
    this->uf.f = this->f;

    this->uf.u = this->u;
    this->uf.f = this->f;

    this->uf.u = this->u;
    this->uf.f = this->f;

    this->uf.u = this->u;
    this->uf.f = this->f;
    //TODO Add the rest of these
}