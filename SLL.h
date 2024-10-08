#include <iostream>
#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

using namespace std;

#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct transaksiPenerbangan {
    string pemesan;
    string maskapai;
    string tujuan;
    int hargaTiket;
};

typedef transaksiPenerbangan infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void Create_List(List& L);
adr New_Elemen(infotype data);
void Insert_First(List &L, adr P);
void Insert_Last(List &L,adr P);
void Insert_After(List &L, adr prec,adr P);
void Delete_First(List &L,adr P);
void Delete_Last(List &L, adr P);
void Delete_After(List &L, adr prec, adr P);
void Show(List &L);
void SortByHargaTiket(List &L);
void Input_Data(infotype &data);
adr SearchBy_Pemesan(List &L , infotype data);
adr Cari_Prec(List L , adr lokasi, adr P);
#endif
