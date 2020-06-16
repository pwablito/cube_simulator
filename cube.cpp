#include <iostream>
#include "cube.h"

using namespace std;

string color_char(COLOR clr) {
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
    COLOR tmp_ubr_b = ubr.b;
    COLOR tmp_br_b = br.b;
    COLOR tmp_dbr_b = dbr.b;

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

    COLOR tmp_ufr_r = ufr.r;
    COLOR tmp_fr_r = fr.r;
    ufr.r = dfr.r;
    fr.r = dr.r;
    dfr.r = dbr.r;
    dr.r = br.r;
    dbr.r = ubr.r;
    br.r = ur.r;
    ubr.r = tmp_ufr_r;
    ur.r = tmp_fr_r;
}

void Cube::turn_r_prime() {
    COLOR tmp_dfr_d = dfr.d;
    COLOR tmp_dr_d = dr.d;
    COLOR tmp_dbr_d = dbr.d;

    dfr.d = ufr.f;
    dr.d = fr.f;
    dbr.d = dfr.f;

    ufr.f = ubr.u;
    fr.f = ur.u;
    dfr.f = ufr.u;    

    ubr.u = dbr.b;
    ur.u = br.b;
    ufr.u = ubr.b;

    dbr.b = tmp_dfr_d;
    br.b = tmp_dr_d;
    ubr.b = tmp_dbr_d;

    COLOR tmp_ufr_r = ufr.r;
    COLOR tmp_ur_r = ur.r;
    ufr.r = ubr.r;
    ur.r = br.r;
    ubr.r = dbr.r;
    br.r = dr.r;
    dbr.r = dfr.r;
    dr.r = fr.r;
    dfr.r = tmp_ufr_r;
    fr.r = tmp_ur_r;
}

void Cube::turn_l() {

    COLOR tmp_dfl_d = dfl.d;
    COLOR tmp_dl_d = dl.d;
    COLOR tmp_dbl_d = dbl.d;

    dfl.d = ufl.f;
    dl.d = fl.f;
    dbl.d = dfl.f;

    ufl.f = ubl.u;
    fl.f = ul.u;
    dfl.f = ufl.u;    

    ubl.u = dbl.b;
    ul.u = bl.b;
    ufl.u = ubl.b;

    dbl.b = tmp_dfl_d;
    bl.b = tmp_dl_d;
    ubl.b = tmp_dbl_d;

    COLOR tmp_ufl_l = ufl.l;
    COLOR tmp_ul_l = ul.l;
    ufl.l = ubl.l;
    ul.l = bl.l;
    ubl.l = dbl.l;
    bl.l = dl.l;
    dbl.l = dfl.l;
    dl.l = fl.l;
    dfl.l = tmp_ufl_l;
    fl.l = tmp_ul_l;
}

void Cube::turn_l_prime() {
    COLOR tmp_ubl_b = ubl.b;
    COLOR tmp_bl_b = bl.b;
    COLOR tmp_dbl_b = dbl.b;

    dbl.b = ubl.u;
    bl.b = ul.u;
    ubl.b = ufl.u;

    ubl.u = ufl.f;
    ul.u = fl.f;
    ufl.u = dfl.f;

    ufl.f = dfl.d;
    fl.f = dl.d;
    dfl.f = dbl.d;

    dfl.d = tmp_dbl_b;
    dl.d = tmp_bl_b;
    dbl.d = tmp_ubl_b;

    COLOR tmp_ufl_l = ufl.l;
    COLOR tmp_fl_l = fl.l;
    ufl.l = dfl.l;
    fl.l = dl.l;
    dfl.l = dbl.l;
    dl.l = bl.l;
    dbl.l = ubl.l;
    bl.l = ul.l;
    ubl.l = tmp_ufl_l;
    ul.l = tmp_fl_l;
}

void Cube::turn_f() {
    COLOR tmp_ufr_u = ufr.u;
    COLOR tmp_uf_u = uf.u;
    COLOR tmp_ufl_u = ufl.u;

    ufr.u = ufl.l;
    uf.u = fl.l;
    ufl.u = dfl.l;

    ufl.l = dfl.d;
    fl.l = df.d;
    dfl.l = dfr.d;

    dfl.d = dfr.r;
    df.d = fr.r;
    dfr.d = ufr.r;

    dfr.r = tmp_ufr_u;
    fr.r = tmp_uf_u;
    ufr.r = tmp_ufl_u;

    COLOR tmp_ufl_f = ufl.f;
    COLOR tmp_fl_f = fl.f;

    ufl.f = dfl.f;
    fl.f = df.f;
    dfl.f = dfr.f;
    df.f = fr.f;
    dfr.f = ufr.f;
    fr.f = uf.f;
    ufr.f = tmp_ufl_f;
    uf.f = tmp_fl_f;
}

void Cube::turn_f_prime() {
    COLOR tmp_ufr_u = ufr.u;
    COLOR tmp_uf_u = uf.u;
    COLOR tmp_ufl_u = ufl.u;

    ufr.u = dfr.r;
    uf.u = fr.r;
    ufl.u = ufr.r;

    dfr.r = dfl.d;
    fr.r = df.d;
    ufr.r = dfr.d;

    dfl.d = ufl.l;
    df.d = fl.l;
    dfr.d = dfl.l;

    ufl.l = tmp_ufr_u;
    fl.l = tmp_uf_u;
    dfl.l = tmp_ufl_u;

    COLOR tmp_ufl_f = ufl.f;
    COLOR tmp_uf_f = uf.f;

    ufl.f = ufr.f;
    uf.f = fr.f;
    ufr.f = dfr.f;
    fr.f = df.f;
    dfr.f = dfl.f;
    df.f = fl.f;
    dfl.f = tmp_ufl_f;
    fl.f = tmp_uf_f;
}

void Cube::turn_b() {
    COLOR tmp_ubr_u = ubr.u;
    COLOR tmp_ub_u = ub.u;
    COLOR tmp_ubl_u = ubl.u;

    ubr.u = dbr.r;
    ub.u = br.r;
    ubl.u = ubr.r;

    dbr.r = dbl.d;
    br.r = db.d;
    ubr.r = dbr.d;

    dbl.d = ubl.l;
    db.d = bl.l;
    dbr.d = dbl.l;

    ubl.l = tmp_ubr_u;
    bl.l = tmp_ub_u;
    dbl.l = tmp_ubl_u;

    COLOR tmp_ubl_b = ubl.b;
    COLOR tmp_ub_b = ub.b;

    ubl.b = ubr.b;
    ub.b = br.b;
    ubr.b = dbr.b;
    br.b = db.b;
    dbr.b = dbl.b;
    db.b = bl.b;
    dbl.b = tmp_ubl_b;
    bl.b = tmp_ub_b;
}

void Cube::turn_b_prime() {
    COLOR tmp_ubr_u = ubr.u;
    COLOR tmp_ub_u = ub.u;
    COLOR tmp_ubl_u = ubl.u;

    ubr.u = ubl.l;
    ub.u = bl.l;
    ubl.u = dbl.l;

    ubl.l = dbl.d;
    bl.l = db.d;
    dbl.l = dbr.d;

    dbl.d = dbr.r;
    db.d = br.r;
    dbr.d = ubr.r;

    dbr.r = tmp_ubr_u;
    br.r = tmp_ub_u;
    ubr.r = tmp_ubl_u;

    COLOR tmp_ubl_b = ubl.b;
    COLOR tmp_bl_b = bl.b;

    ubl.b = dbl.b;
    bl.b = db.b;
    dbl.b = dbr.b;
    db.b = br.b;
    dbr.b = ubr.b;
    br.b = ub.b;
    ubr.b = tmp_ubl_b;
    ub.b = tmp_bl_b;
}

void Cube::turn_u() {

}

void Cube::turn_u_prime() {

}

void Cube::turn_d() {

}

void Cube::turn_d_prime() {

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