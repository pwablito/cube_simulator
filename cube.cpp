#include <iostream>
#include "cube.h"

using namespace std;

string color_char(color clr) {
    string color_code = "";
    switch (clr) {
        case BLUE:
            color_code = "\e[38;2;0;0;255m";
            break;
        case RED:
            color_code = "\e[38;2;255;0;0m";
            break;
        case ORANGE:
            color_code = "\e[38;2;255;165;0m";
            break;
        case GREEN:
            color_code = "\e[38;2;0;255;0m";
            break;
        case WHITE:
            color_code = "\e[38;2;255;255;255m";
            break;
        case YELLOW:
            color_code = "\e[38;2;255;255;0m";
            break;
    }
    return color_code + "\u25A0" + "\e[0m";
}

void Cube::print() {
    cout << "      " << color_char(this->dbl.b) << " " << color_char(db.b) << " " << color_char(dbr.b) << endl;
    cout << "      " << color_char(this->bl.b) << " " << color_char(b) << " " << color_char(br.b) << endl;
    cout << "      " << color_char(this->ubl.b) << " " << color_char(ub.b) << " " << color_char(ubr.b) << endl;
    cout << color_char(this->dbl.l) << " " << color_char(this->bl.l) << " " << color_char(this->ubl.l) << " "
         << color_char(this->ubl.u) << " " << color_char(this->ub.u) << " " << color_char(this->ubr.u) << " "
         << color_char(this->ubr.r) << " " << color_char(this->br.r) << " " << color_char(this->dbr.r) << endl;
    cout << color_char(this->dl.l)  << " " << color_char(this->l)    << " " << color_char(this->ul.l)  << " "
         << color_char(this->ul.u)  << " " << color_char(this->u)    << " " << color_char(this->ur.u)  << " "
         << color_char(this->ur.r)  << " " << color_char(this->r)    << " " << color_char(this->dr.r) << endl;
    cout << color_char(this->dfl.l) << " " << color_char(this->fl.l) << " " << color_char(this->ufl.l) << " "
         << color_char(this->ufl.u) << " " << color_char(this->uf.u) << " " << color_char(this->ufr.u) << " "
         << color_char(this->ufr.r) << " " << color_char(this->fr.r) << " " << color_char(this->dfr.r) << endl;
    cout << "      " << color_char(this->ufl.f) << " " << color_char(this->uf.f) << " " << color_char(this->ufr.f) << endl;
    cout << "      " << color_char(this->fl.f)  << " " << color_char(this->f)    << " " << color_char(this->fr.f)  << endl;
    cout << "      " << color_char(this->dfl.f) << " " << color_char(this->df.f) << " " << color_char(this->dfr.f) << endl;
    cout << "      " << color_char(this->dfl.d) << " " << color_char(this->df.d) << " " << color_char(this->dfr.d) << endl;
    cout << "      " << color_char(this->dl.d)  << " " << color_char(this->d)    << " " << color_char(this->dr.d)  << endl;
    cout << "      " << color_char(this->dbl.d) << " " << color_char(this->db.d) << " " << color_char(this->dbr.d) << endl;
}

void Cube::turn_r() {
    color tmp_ubr_b = ubr.b;
    color tmp_br_b = br.b;
    color tmp_dbr_b = dbr.b;

    dbr.b = ubr.u;
    br.b = ur.u;
    ubr.b = ufr.u;

    ubr.u = ufr.f;
    ur.u = fr.f;
    ufr.u = dfr.f;

    ufr.f = dfr.d;
    fr.f = dr.d;
    dfr.f = dbr.d;

    dfr.d = tmp_dbr_b;
    dr.d = tmp_br_b;
    dbr.d = tmp_ubr_b;
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
    this->bl.l = this->l;

    this->df.d = this->d;
    this->df.f = this->f;

    this->db.d = this->d;
    this->db.b = this->b;

    this->dr.d = this->d;
    this->dr.r = this->r;

    this->dl.d = this->d;
    this->dl.l = this->l;
}