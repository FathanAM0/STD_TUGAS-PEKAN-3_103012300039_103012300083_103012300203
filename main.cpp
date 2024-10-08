#include <iostream>
#include "SLL.h"
using namespace std;

int main()
{
    List FHI;
    infotype data1,data2,data3,data4,data5,data6;
    adr P1, P2, P3, P4, P5, P6,prec, loc;

    Create_List(FHI);

    Input_Data(data1);
    P1 = New_Elemen(data1);
    Insert_First(FHI,P1);

    Input_Data(data2);
    P2 = New_Elemen(data2);
    Insert_Last(FHI,P2);

    Input_Data(data3);
    P3 = New_Elemen(data3);
    Insert_First(FHI,P3);

    Input_Data(data4);
    P4 = New_Elemen(data4);
    Insert_Last(FHI,P4);

    Input_Data(data5);
    P5 = New_Elemen(data5);
    prec = SearchBy_Pemesan(FHI,data4);

    Insert_After(FHI,prec,P5);

    Input_Data(data6);
    P6 = New_Elemen(data6);
    prec = SearchBy_Pemesan(FHI,data4);

    Insert_After(FHI,prec,P6);
    cout << endl << endl;

    cout << "Data Sebelum Di Sorting dan Delete :" << endl;
    Show(FHI);
    cout << endl << endl <<endl;

    cout << "Data Sesudah Di Sorting dan Delete :" << endl;
    //delete data kedua
    Delete_After(FHI,first(FHI),P2);

    //delete data keenam
    loc = (SearchBy_Pemesan(FHI,data6));

    prec = Cari_Prec(FHI,loc,P5);

    Delete_After(FHI,prec,P5);

    SortByHargaTiket(FHI);

    Show(FHI);




    //sorting

}
