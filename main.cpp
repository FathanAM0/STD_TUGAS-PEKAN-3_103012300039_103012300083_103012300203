#include <iostream>
#include "SLL.h"
using namespace std;

int main()
{
    List FHI;
    infotype data1,data2,data3,data4,data5,data6;
    adr P,prec, loc;

    Create_List(FHI);

    Input_Data(data1);
    P = New_Elemen(data1);
    Insert_First(FHI,P);

    Input_Data(data2);
    P = New_Elemen(data2);
    Insert_Last(FHI,P);

    Input_Data(data3);
    P = New_Elemen(data3);
    Insert_First(FHI,P);

    Input_Data(data4);
    P = New_Elemen(data4);
    Insert_Last(FHI,P);

    Input_Data(data5);
    P = New_Elemen(data5);
    prec = SearchBy_Pemesan(FHI,data4);

    Insert_After(FHI,prec,P);

    Input_Data(data6);
    P = New_Elemen(data6);
    prec = SearchBy_Pemesan(FHI,data4);

    Insert_After(FHI,prec,P);
    cout << endl << endl;

    cout << "Data Sebelum Di Sorting dan Delete :" << endl;
    Show(FHI);
    cout << endl << endl <<endl;

    cout << "Data Sesudah Di Sorting dan Delete :" << endl;
    //delete data kedua
    Delete_After(FHI,first(FHI),P);

    //delete data keenam
    loc = (SearchBy_Pemesan(FHI,data6));
    cout << loc << endl;
    prec = Cari_Prec(FHI,loc,P);

    Delete_After(FHI,prec,P);

    SortByHargaTiket(FHI);

    Show(FHI);




    //sorting

}
