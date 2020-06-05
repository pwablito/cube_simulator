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

    this->ub.u = this->u;
    this->ub.b = this->b;

    this->ur.u = this->u;
    this->ur.r = this->r;

    this->ul.u = this->u;
    this->ul.l = this->l;

    this->fr.f = this->f;
    this->fr.r = this->r;

    this->fl.f = this->f;
    this->fl.l = this->l;

    this->br.b = this->b;
    this->br.r = this->r;

    this->bl.b = this->b;
    this->bl.l = this->b;

    this->df.d = this->d;
    this->df.f = this->f;

    this->db.d = this->d;
    this->db.b = this->b;

    this->dr.d = this->d;
    this->dr.r = this->r;

    this->dl.d = this->d;
    this->dl.l = this->l;
}