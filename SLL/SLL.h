#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};
struct List{
    address first;
};

void createList_103012300039(List &L);
address allocate_103012300039(infotype x);
void insertFirst_103012300039(List &L, address P);
void printInfo_103012300039(List L);
void insertLast_103012300039(List &L, address P);
void insertAfter_103012300039(address &pre, address P);
void deleteLast_103012300039(List &L, address &P);
void deleteAfter_103012300039(address &pre, address P);
address searchInfo_103012300039(List &L, infotype x);

#endif // SLL_H_INCLUDED
