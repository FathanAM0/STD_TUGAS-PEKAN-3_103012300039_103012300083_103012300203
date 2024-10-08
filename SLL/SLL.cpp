#include <iostream>
#include "SLL.h"
using namespace std;

void createList_103012300039(List &L) {
    first(L) = NULL;
}

address allocate_103012300039(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst_103012300039(List &L, address P){
    next(P) = first (L);
    first(L) = P;
}

void printInfo_103012300039(List L){
    address p = first(L);
    while (p != NULL){
        cout << info(p);
        p = next(p);
    }
    cout << endl;
}

void insertLast_103012300039(List &L, address P){
    address last;
    if (first(L) != NULL) {
        last = first(L);
        while (next(last) != NULL) {
            last = next(last);
        }
        next(last) = P;
    }else {
        first(L) = P;
    }
}

void insertAfter_103012300039(address &pre, address P){
    if (pre == NULL){
        cout << "Pre Kosong" << endl;
    } else {
        next(P) = next(pre);
        next(pre) = P;
    }
}

void deleteLast_103012300039(List &L, address &P) {
    address Q;
    if (first(L) == NULL) {
        P = NULL;
    }else if (next(first(L)) == NULL) {
        P = first(L);
        first(L) = NULL;
    }else{
        P = first(L);
        while (next(P)!= NULL){
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
    }
}

void deleteAfter_103012300039(address &pre, address P){
    if (pre == NULL || next(pre) == NULL) {
        P = NULL;
    }else {
        P = next(pre);
        if (next(P)== NULL){
            next(pre) = NULL;
        }else{
            next(pre) = next(P);
            next(P) =NULL;
        }
    }
}

address searchInfo_103012300039(List &L, infotype x){
    address P;
    P = first(L);
    while (P != NULL && info(P) != x){
        P = next(P);
    }
    return P;
}
