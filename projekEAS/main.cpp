#include "bagosep.h"
int main()
{

    introDistro();
    cout<<"\n\n\t\tMasukan Nama Anda Sebelum Membeli = ";gets(nama);
    system("CLS");
    introDistro();
    cout<<"\n\n\tSelamat Berbelanja Juragan "<<nama;
    do{
    if(pesan=="ya"){
    introProduk();
    }
    cout<<"\n\n\tAnda Ingin Belanja Apa [Input listProduk / Nomer] = ";cin>>operatorku;
    system("CLS");
    menuProduk();
    cout<<"\n\n\tAnda ingin Belanja yang Lain ? [ya/tidak] = ";cin>>pesan;
    system("CLS");
    }while(pesan=="ya");
    nota();

    return 0;
}
