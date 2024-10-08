#include "SLL.h"
#include <iostream>

void Create_List(List &L){
    first(L) = nullptr;
}

adr New_Elemen(infotype data){
    adr P;
    P = new elmList;
    info(P) = data;
    next(P) = nullptr;
    return P;
}

void Insert_First(List &L, adr P){
    if (first(L) == nullptr){
        first(L) = P;
    }else{
       next(P) = first(L);
       first(L) = P;
    }
}

void Insert_Last(List &L,adr P){
    adr Q;
    if (first(L) == nullptr){
        first(L) = P;
    }else{
        Q = first(L);
        while (next(Q) != nullptr){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void Insert_After(List &L, adr prec,adr P){
    if (first(L) == nullptr){
        first(L) = P;
    }else{
        next(P) = next(prec);
        next(prec) = P;
    }
}

void Delete_First(List &L,adr P){
    if (first(L) == nullptr){
        P = nullptr;
    }else if (next(first(L)) == nullptr){
        P = first(L);
        first(L) = nullptr;
    }else{
        P = first(L);
        first(L) = next(first(L));
        next(P) = nullptr;
    }
}

void Delete_Last(List &L, adr P){
    adr Q;
    if (first(L) == nullptr){
        P = nullptr;
    }else if (next(first(L)) == nullptr){
        P = first(L);
        first(L) = nullptr;
    }else{
        Q = first(L);
        while (next(next(Q)) != nullptr){
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = nullptr;
    }
}

void Delete_After(List &L, adr prec, adr P){
    if ((first(L) == nullptr)||(next(prec)==nullptr)){
        P = nullptr;
    }else{
        P = next(prec);
        next(prec) = next(P);
        next(P) = nullptr;
    }
}

void Show(List& L) {
    adr p = first(L);
    cout << endl;
    while (p != nullptr) {
        cout << "Nama Pemesan: " << p->info.pemesan << ", "
             << "Harga Tiket: " << p->info.hargaTiket << ", "
             << "Tujuan: " << p->info.tujuan <<  ", "
             << "Maskapai: " << p->info.maskapai << endl;
        p = p->next;
    }
    cout << endl;
}


void SortByHargaTiket(List &L){
    adr SL,P,Q;
    if ((first(L) != nullptr) & (next(first(L))!=nullptr)){
        SL = nullptr;
        P = first(L);
        while (P != nullptr){
            first(L) = next(P);
            if ((SL == nullptr) || (info(SL).hargaTiket > info(P).hargaTiket)){
                next(P) = SL;
                SL = P;
            }else{
                Q = SL;
                while ((next(Q)!= nullptr) &&(info(next(Q)).hargaTiket < info(P).hargaTiket)){
                    Q = next(Q);
                }
                next(P) = next(Q);
                next(Q) = P;
            }
            P = first(L);
            first(L) = SL;
        }
    }
}

adr SearchBy_Pemesan(List &L , infotype data){
    adr Q;
    Q = first(L);
    while ((next(Q)!= Nil) && info(Q).pemesan != data.pemesan) {
        Q = next(Q);
    }
    if (info(Q).pemesan == data.pemesan){
        return Q;
    }else{
        return Nil;
    }
}

adr Cari_Prec(List L , adr lokasi, adr P){
    P = first(L);
    while (info(next(P)).pemesan != info(lokasi).pemesan){
        P = next(P);
    }
    if (info(next(P)).pemesan == info(lokasi).pemesan){
        return P;
    }else{
        return Nil;
    }
}

void Input_Data(infotype &data) {
    cout << "Input Nama Pemesan: ";
    cin >> data.pemesan;
    cout << "Input Harga Tiket: ";
    cin >> data.hargaTiket;
    cout << "Input Tujuan: ";
    cin >> data.tujuan;
    cout << "Input Maskapai: ";
    cin >> data.maskapai;

}
