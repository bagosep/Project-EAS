#ifndef BAGOSEP_H_INCLUDED
#define BAGOSEP_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string.h>


using namespace std;

char operatorku[50];
int totalHarga=0,totalDiskon=0;
char nama[30];
char pilihan;
string ulang,pesan;
char konversi[20];

void garis(){
    cout<<"\n\t            ===================================";
    cout<<"\n\t         =========================================";
    cout<<"\n\t      ================================================";
    cout<<"\n\t   ======================================================";
    cout<<"\n\t============================================================";
}
void garis2(){
    cout<<"\n\t============================================================";
}
void introDistro(){
cout<<"\t";garis();
    cout<<"\n";
    cout<<"\n\t\t       Selamat Datang Di Toko Distro    \n\n";
    cout<<"\t\t\t     'Ceritanya Distro'   ";
    cout<<"\n";
    cout<<"\t";garis2();
    cout<<"\n\n\t\t      Kami Menyediakan Bebarapa Produk";
    cout<<"\n\n\t\t\t 1. Baju";
    cout<<"\n\t\t\t 2. Celana";
    cout<<"\n\t\t\t 3. Sepatu";
    cout<<"\n\t\t\t 4. Tas";
    cout<<"\n\t\t\t 5. Jam";
    cout<<"\n\t";garis2();
}
void introProduk(){
cout<<"\t";garis2();
cout<<"\n\n\t\t      Kami Menyediakan Bebarapa Produk";
cout<<"\n\n\t\t\t 1. Baju";
cout<<"\n\t\t\t 2. Celana";
cout<<"\n\t\t\t 3. Sepatu";
cout<<"\n\t\t\t 4. Tas";
cout<<"\n\t\t\t 5. Jam";
cout<<"\n\t";garis2();
}
struct{
char pilihanBaju[20],pilihanCelana[20],pilihanSepatu[20],pilihanTas[20],pilihanJam[20];
}kode;

void introBaju(){
    cout<<"\n\t\tKami Disini Menyediakan Beberapa Merk Baju\n\n\t\tMerek\t\t\tHarga Baju\n";
    cout<<"\n\t\t1. Vans\t\t\tRp. 55.000\n\t\t2. ThreeSecond\t\tRp. 65.000\n";
    cout<<"\t\t3. Machbeth\t\tRp. 60.000\n\t\t4. Kidrock\t\tRp. 45.000\n";
}
void introCelana(){
    cout<<"\n\t\tKami Disini Menyediakan Beberapa Merk Celana\n\n\t\tMerek\t\t\tHarga Celana\n";
    cout<<"\n\t\t1. Levis\t\tRp. 130.000\n\t\t2. Jeans\t\tRp. 110.000\n";
    cout<<"\t\t3. Diesel \t\tRp. 170.000\n\t\t4. Lee\t\t\tRp. 150.000\n";
}
void introSepatu(){
    cout<<"\n\t\tKami Disini Menyediakan Beberapa Merk Sepatu\n\n\t\tMerek\t\t\tHarga Sepatu\n";
    cout<<"\n\t\t1. Adidas\t\tRp. 220.000\n\t\t2. Nike\t\t\tRp. 260.000\n";
    cout<<"\t\t3. NewBalance \t\tRp. 240.000\n\t\t4. Converse\t\tRp. 230.000\n";
}
void introTas(){
    cout<<"\n\t\tKami Disini Menyediakan Beberapa Merk Tas\n\n\t\tMerek\t\t\tHarga Tas\n";
    cout<<"\n\t\t1. Eiger\t\tRp. 120.000\n\t\t2. Reebok\t\tRp. 140.000\n";
    cout<<"\t\t3. Polo \t\tRp. 170.000\n\t\t4. Palazzo\t\tRp. 100.000\n";
}
void introJam(){
    cout<<"\n\t\tKami Disini Menyediakan Beberapa Merk Jam\n\n\t\tMerek\t\t\tHarga Jam\n";
    cout<<"\n\t\t1. GShock\t\tRp. 210.000\n\t\t2. Bulgari\t\tRp. 280.000\n";
    cout<<"\t\t3. Rolex \t\tRp. 240.000\n\t\t4. Casio\t\tRp. 300.000\n";
}


struct{
int Vans=55000,ThreeSecond=65000,Macbeth=60000,Kidrock=45000;
}hargaBaju;

struct{
int Levis=130000,Jeans=110000,Diesel=170000,Lee=150000;
}hargaCelana;

struct{
int Adidas=220000,Nike=260000,NewBalance=240000,Converse=230000;
}hargaSepatu;

struct{
int Eiger=120000,Reebok=140000,Polo=170000,Palazzo=100000;
}hargaTas;

struct{
int GShock=210000,Bulgari=280000,Rolex=240000,Casio=300000;
}hargaJam;

struct{
int Baju,Vans,ThreeSecond,Macbeth,Kidrock;
}merkBaju;

struct{
int Celana,Levis,Jeans,Diesel,Lee;
}merkCelana;

struct{
int Sepatu,Adidas,Nike,NewBalance,Converse;
}merkSepatu;

struct{
int Tas,Eiger,Reebok,Polo,Palazzo;
}merkTas;

struct{
int Jam,GShock,Bulgari,Rolex,Casio;
}merkJam;

struct{
char Baju[5]="Baju",Celana[8]="Celana",Sepatu[10]="Sepatu",Tas[5]="Tas",Jam[5]="Jam";
}produk;

struct{
char Vans[5]="Vans",ThreeSecond[13]="ThreeSecond",Machbeth[10]="Machbeth",Kidrock[10]="Kidrock";
}produkBaju;

struct{
char Levis[6]="Levis",Jeans[6]="Jeans",Diesel[7]="Diesel",Lee[4]="Lee";
}produkCelana;

struct{
char Adidas[7]="Adidas",Nike[5]="Nike",NewBalance[11]="NewBalance",Converse[10]="Converse";
}produkSepatu;

struct{
char Eiger[7]="Eiger",Reebok[7]="Reebok",Polo[5]="Polo",Palazzo[8]="Palazzo";
}produkTas;

struct{
char GShock[7]="GShock",Bulgari[8]="Bulgari",Rolex[6]="Rolex",Casio[6]="Casio";
}produkJam;

struct{
int Baju=0,Celana=0,Sepatu=0,Tas=0,Jam=0;
}hasil;

struct{
int banyakbaju,banyakcelana,banyaksepatu,banyaktas,banyakjam;
}banyak;

struct{
int diskonBaju=0,diskonCelana=0,diskonSepatu=0,diskonTas=0,diskonJam=0;
string hargaDiskonBaju,hargaDiskonCelana,hargaDiskonSepatu,hargaDiskonTas,hargaDiskonJam;
}diskon;


int listBaju(char kodeProdukBaju[20], int hasilBaju){
    if(strcmp(kode.pilihanBaju,produkBaju.Vans)==0 || strcmp(kode.pilihanBaju,"vans")==0 || strcmp(kode.pilihanBaju,"1")==0){
        merkBaju.Vans++;
        cout<<"\n\t\tAnda Memilih Nomer 1\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Baju\n";
        cout<<"\n\t\tVans\t\t\tRp. 55.000";
        hasilBaju=hasilBaju+hargaBaju.Vans;
        banyak.banyakbaju++;
        }
        else if(strcmp(kode.pilihanBaju,produkBaju.ThreeSecond)==0 || strcmp(kode.pilihanBaju,"threesecond")==0 || strcmp(kode.pilihanBaju,"2")==0){
        merkBaju.ThreeSecond++;
        cout<<"\n\t\tAnda Memilih Nomer 2\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Baju\n";
        cout<<"\n\t\tThreeSecond\t\tRp. 65.000";
        hasilBaju=hasilBaju+hargaBaju.ThreeSecond;
        banyak.banyakbaju++;
        }
        else if(strcmp(kode.pilihanBaju,produkBaju.Machbeth)==0 || strcmp(kode.pilihanBaju,"machbeth")==0 || strcmp(kode.pilihanBaju,"3")==0){
        merkBaju.Macbeth++;
        cout<<"\n\t\tAnda Memilih Nomer 3\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Baju\n";
        cout<<"\n\t\tMachbeth\t\tRp. 60.000";
        hasilBaju=hasilBaju+hargaBaju.Macbeth;
        banyak.banyakbaju++;
        }
        else if(strcmp(kode.pilihanBaju,produkBaju.Kidrock)==0 || strcmp(kode.pilihanBaju,"kidrock")==0 || strcmp(kode.pilihanBaju,"4")==0){
        merkBaju.Kidrock++;
        cout<<"\n\t\tAnda Memilih Nomer 4\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Baju\n";
        cout<<"\n\t\tKidrock\t\t\tRp. 45.000";
        hasilBaju=hasilBaju+hargaBaju.Kidrock;
        banyak.banyakbaju++;
        }
    else{
        cout<<"\n\t\tMaaf Menu Tidak ada / Anda Salah Input";
    }
    return hasilBaju;
}

int listCelana(char kodeProdukCelana[20], int hasilCelana){
    if(strcmp(kode.pilihanCelana,produkCelana.Levis)==0 || strcmp(kode.pilihanCelana,"levis")==0 || strcmp(kode.pilihanCelana,"1")==0){
        merkCelana.Levis++;
        cout<<"\n\t\tAnda Memilih Nomer 1\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Celana\n";
        cout<<"\n\t\tLevis\t\t\tRp. 130.000";
        hasilCelana=hasilCelana+hargaCelana.Levis;
        banyak.banyakcelana++;
        }
        else if(strcmp(kode.pilihanCelana,produkCelana.Jeans)==0 || strcmp(kode.pilihanCelana,"jeans")==0 || strcmp(kode.pilihanCelana,"2")==0){
        merkCelana.Jeans++;
        cout<<"\n\t\tAnda Memilih Nomer 2\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Celana\n";
        cout<<"\n\t\tJeans\t\t\tRp. 110.000";
        hasilCelana=hasilCelana+hargaCelana.Jeans;
        banyak.banyakcelana++;
        }
        else if(strcmp(kode.pilihanCelana,produkCelana.Diesel)==0 || strcmp(kode.pilihanCelana,"diesel")==0 || strcmp(kode.pilihanCelana,"3")==0){
        merkCelana.Diesel++;
        cout<<"\n\t\tAnda Memilih Nomer 3\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Celana\n";
        cout<<"\n\t\tDiesel\t\t\tRp. 170.000";
        hasilCelana=hasilCelana+hargaCelana.Diesel;
        banyak.banyakcelana++;
        }
        else if(strcmp(kode.pilihanCelana,produkCelana.Lee)==0 || strcmp(kode.pilihanCelana,"lee")==0 || strcmp(kode.pilihanCelana,"4")==0){
        merkCelana.Lee++;
        cout<<"\n\t\tAnda Memilih Nomer 4\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Celana\n";
        cout<<"\n\t\tLee\t\t\tRp. 150.000";
        hasilCelana=hasilCelana+hargaCelana.Lee;
        banyak.banyakcelana++;
        }
    else{
        cout<<"\n\t\tMaaf Menu Tidak ada / Anda Salah Input";
    }
    return hasilCelana;
}

int listSepatu(char kodeProdukSepatu[20], int hasilSepatu){
    if(strcmp(kode.pilihanSepatu,produkSepatu.Adidas)==0 || strcmp(kode.pilihanSepatu,"adidas")==0 || strcmp(kode.pilihanSepatu,"1")==0){
        merkSepatu.Adidas++;
        cout<<"\n\t\tAnda Memilih Nomer 1\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Sepatu\n";
        cout<<"\n\t\tAdidas\t\t\tRp. 220.000";
        hasilSepatu=hasilSepatu+hargaSepatu.Adidas;
        banyak.banyaksepatu++;
        }
        else if(strcmp(kode.pilihanSepatu,produkSepatu.Nike)==0 || strcmp(kode.pilihanSepatu,"nike")==0 || strcmp(kode.pilihanSepatu,"2")==0){
        merkSepatu.Nike++;
        cout<<"\n\t\tAnda Memilih Nomer 2\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Sepatu\n";
        cout<<"\n\t\tNike\t\t\tRp. 260.000";
        hasilSepatu=hasilSepatu+hargaSepatu.Nike;
        banyak.banyaksepatu++;
        }
        else if(strcmp(kode.pilihanSepatu,produkSepatu.NewBalance)==0 || strcmp(kode.pilihanSepatu,"newbalance")==0 || strcmp(kode.pilihanSepatu,"3")==0){
        merkSepatu.NewBalance++;
        cout<<"\n\t\tAnda Memilih Nomer 3\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Celana\n";
        cout<<"\n\t\tNewBalance\t\tRp. 240.000";
        hasilSepatu=hasilSepatu+hargaSepatu.NewBalance;
        banyak.banyaksepatu++;
        }
        else if(strcmp(kode.pilihanSepatu,produkSepatu.Converse)==0 || strcmp(kode.pilihanSepatu,"converse")==0 || strcmp(kode.pilihanSepatu,"4")==0){
        merkSepatu.Converse++;
        cout<<"\n\t\tAnda Memilih Nomer 4\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Celana\n";
        cout<<"\n\t\tConverse\t\tRp. 230.000";
        hasilSepatu=hasilSepatu+hargaSepatu.Converse;
        banyak.banyaksepatu++;
        }
    else{
        cout<<"\n\t\tMaaf Menu Tidak ada / Anda Salah Input";
    }
    return hasilSepatu;
}

int listTas(char kodeProdukTas[20], int hasilTas){
    if(strcmp(kode.pilihanTas,produkTas.Eiger)==0 || strcmp(kode.pilihanTas,"eiger")==0 || strcmp(kode.pilihanTas,"1")==0){
        merkTas.Eiger++;
        cout<<"\n\t\tAnda Memilih Nomer 1\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Tas\n";
        cout<<"\n\t\tEiger\t\t\tRp. 120.000";
        hasilTas=hasilTas+hargaTas.Eiger;
        banyak.banyaktas++;
        }
        else if(strcmp(kode.pilihanTas,produkTas.Reebok)==0 || strcmp(kode.pilihanTas,"reebok")==0 || strcmp(kode.pilihanTas,"2")==0){
        merkTas.Reebok++;
        cout<<"\n\t\tAnda Memilih Nomer 2\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Tas\n";
        cout<<"\n\t\tReebok\t\t\tRp. 140.000";
        hasilTas=hasilTas+hargaTas.Reebok;
        banyak.banyaktas++;
        }
        else if(strcmp(kode.pilihanTas,produkTas.Polo)==0 || strcmp(kode.pilihanTas,"polo")==0 || strcmp(kode.pilihanTas,"3")==0){
        merkTas.Polo++;
        cout<<"\n\t\tAnda Memilih Nomer 3\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Tas\n";
        cout<<"\n\t\tPolo\t\t\tRp. 170.000";
        hasilTas=hasilTas+hargaTas.Polo;
        banyak.banyaktas++;
        }
        else if(strcmp(kode.pilihanTas,produkTas.Palazzo)==0 || strcmp(kode.pilihanTas,"palazzo")==0 || strcmp(kode.pilihanTas,"4")==0){
        merkTas.Palazzo++;
        cout<<"\n\t\tAnda Memilih Nomer 4\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Tas\n";
        cout<<"\n\t\tConverse\t\tRp. 100.000";
        hasilTas=hasilTas+hargaTas.Palazzo;
        banyak.banyaktas++;
        }
    else{
        cout<<"\n\t\tMaaf Menu Tidak ada / Anda Salah Input";
    }
    return hasilTas;
}

int listJam(char kodeProdukJam[20], int hasilJam){
    if(strcmp(kode.pilihanJam,produkJam.GShock)==0 || strcmp(kode.pilihanJam,"gshock")==0 || strcmp(kode.pilihanJam,"Gshock")==0 || strcmp(kode.pilihanJam,"1")==0) {
        merkJam.GShock++;
        cout<<"\n\t\tAnda Memilih Nomer 1\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Jam\n";
        cout<<"\n\t\tGShock\t\t\tRp. 210.000";
        hasilJam=hasilJam+hargaJam.GShock;
        banyak.banyakjam++;
        }
        else if(strcmp(kode.pilihanJam,produkJam.Bulgari)==0 || strcmp(kode.pilihanJam,"bulgari")==0 || strcmp(kode.pilihanJam,"2")==0){
        merkJam.Bulgari++;
        cout<<"\n\t\tAnda Memilih Nomer 2\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Jam\n";
        cout<<"\n\t\tBulgari\t\t\tRp. 280.000";
        hasilJam=hasilJam+hargaJam.Bulgari;
        banyak.banyakjam++;
        }
        else if(strcmp(kode.pilihanJam,produkJam.Rolex)==0 || strcmp(kode.pilihanJam,"rolex")==0 || strcmp(kode.pilihanJam,"3")==0){
        merkJam.Rolex++;
        cout<<"\n\t\tAnda Memilih Nomer 3\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Jam\n";
        cout<<"\n\t\tRolex\t\t\tRp. 240.000";
        hasilJam=hasilJam+hargaJam.Rolex;
        banyak.banyakjam++;
        }
        else if(strcmp(kode.pilihanJam,produkJam.Casio)==0 || strcmp(kode.pilihanJam,"casio")==0 || strcmp(kode.pilihanJam,"4")==0){
        merkJam.Casio++;
        cout<<"\n\t\tAnda Memilih Nomer 4\n";
        cout<<"\n\t\tMerek\t\t\t\Harga Jam\n";
        cout<<"\n\t\tCasio\t\t\tRp. 300.000";
        hasilJam=hasilJam+hargaJam.Casio;
        banyak.banyakjam++;
        }
    else{
        cout<<"\n\t\tMaaf Menu Tidak ada / Anda Salah Input";
    }
    return hasilJam;
}

void notaBaju(){
    if(merkBaju.Baju!=0){
        cout<<"\n\n\t\tBaju :";
        cout<<"\n\n\t\tMerek\t\t\tHarga\t\tSebanyak";
        garis2();
    }
    if(merkBaju.Vans!=0){
        cout<<"\n\n\t\t"<<produkBaju.Vans<<"\t\t\tRp. 55.000\t"<<merkBaju.Vans;
    }
    if(merkBaju.ThreeSecond!=0){
        cout<<"\n\n\t\t"<<produkBaju.ThreeSecond<<"\t\tRp. 65.000\t"<<merkBaju.ThreeSecond;
    }
    if(merkBaju.Macbeth!=0){
        cout<<"\n\n\t\t"<<produkBaju.Machbeth<<"\t\tRp. 60.000\t"<<merkBaju.Macbeth;
    }
    if(merkBaju.Kidrock!=0){
        cout<<"\n\n\t\t"<<produkBaju.Kidrock<<"\t\t\tRp. 45.000\t"<<merkBaju.Kidrock;
    }
    //garis2();

}

void notaCelana(){
    if(merkCelana.Celana!=0){
        cout<<"\n\n\t\tCelana :";
        cout<<"\n\n\t\tMerek\t\t\tHarga\t\tSebanyak";
        garis2();

    }
    if(merkCelana.Levis!=0){
        cout<<"\n\n\t\t"<<produkCelana.Levis<<"\t\t\tRp. 130.000\t"<<merkCelana.Levis;
    }
    if(merkCelana.Jeans!=0){
        cout<<"\n\n\t\t"<<produkCelana.Jeans<<"\t\t\tRp. 110.000\t"<<merkCelana.Jeans;
    }
    if(merkCelana.Diesel!=0){
        cout<<"\n\n\t\t"<<produkCelana.Diesel<<"\t\t\tRp. 170.000\t"<<merkCelana.Diesel;
    }
    if(merkCelana.Lee!=0){
        cout<<"\n\n\t\t"<<produkCelana.Lee<<"\t\t\tRp. 150.000\t"<<merkCelana.Lee;
    }
   // garis2();
}

void notaSepatu(){
    if(merkSepatu.Sepatu!=0){
        cout<<"\n\n\t\tSepatu :";
        cout<<"\n\n\t\tMerek\t\t\tHarga\t\tSebanyak";
        garis2();

    }
    if(merkSepatu.Adidas!=0){
        cout<<"\n\n\t\t"<<produkSepatu.Adidas<<"\t\t\tRp. 220.000\t"<<merkSepatu.Adidas;
    }
    if(merkSepatu.Nike!=0){
        cout<<"\n\n\t\t"<<produkSepatu.Nike<<"\t\t\tRp. 260.000\t"<<merkSepatu.Nike;
    }
    if(merkSepatu.NewBalance!=0){
        cout<<"\n\n\t\t"<<produkSepatu.NewBalance<<"\t\tRp. 240.000\t"<<merkSepatu.NewBalance;
    }
    if(merkSepatu.Converse!=0){
        cout<<"\n\n\t\t"<<produkSepatu.Converse<<"\t\tRp. 230.000\t"<<merkSepatu.Converse;
    }
   // garis2();
}

void notaTas(){
    if(merkTas.Tas!=0){
        cout<<"\n\n\t\tTas :";
        cout<<"\n\n\t\tMerek\t\t\tHarga\t\tSebanyak";
        garis2();

    }
    if(merkTas.Eiger!=0){
        cout<<"\n\n\t\t"<<produkTas.Eiger<<"\t\t\tRp. 120.000\t"<<merkTas.Eiger;
    }
    if(merkTas.Reebok!=0){
        cout<<"\n\n\t\t"<<produkTas.Reebok<<"\t\t\tRp. 140.000\t"<<merkTas.Reebok;
    }
    if(merkTas.Polo!=0){
        cout<<"\n\n\t\t"<<produkTas.Polo<<"\t\t\tRp. 170.000\t"<<merkTas.Polo;
    }
    if(merkTas.Palazzo!=0){
        cout<<"\n\n\t\t"<<produkTas.Palazzo<<"\t\t\tRp. 100.000\t"<<merkTas.Palazzo;
    }
   // garis2();
}

void notaJam(){
    if(merkJam.Jam!=0){
        cout<<"\n\n\t\tJam :";
        cout<<"\n\n\t\tMerek\t\t\tHarga\t\tSebanyak";
        garis2();

    }
    if(merkJam.GShock!=0){
        cout<<"\n\n\t\t"<<produkJam.GShock<<"\t\t\tRp. 210.000\t"<<merkJam.GShock;
    }
    if(merkJam.Bulgari!=0){
        cout<<"\n\n\t\t"<<produkJam.Bulgari<<"\t\t\tRp. 280.000\t"<<merkJam.Bulgari;
    }
    if(merkJam.Rolex!=0){
        cout<<"\n\n\t\t"<<produkJam.Rolex<<"\t\t\tRp. 240.000\t"<<merkJam.Rolex;
    }
    if(merkJam.Casio!=0){
        cout<<"\n\n\t\t"<<produkJam.Casio<<"\t\t\tRp. 300.000\t"<<merkJam.Casio;
    }
   // garis2();
}

void menuProduk(){
if (strcmp(operatorku,produk.Baju)==0 || strcmp(operatorku,"baju")==0 || strcmp(operatorku,"1")==0){
       merkBaju.Baju++;
        do{
        introBaju();
        cout<<"\n\tAnda Ingin Membeli Produk Apa [Input Merk / Nomer] = ";cin>>kode.pilihanBaju;
        hasil.Baju=listBaju(kode.pilihanBaju, hasil.Baju);
        //cout<<hasil.Baju;
        cout<<"\n\n\tJika Anda Membeli Produk Baju lebih dari 3 maka diskon Baju 5%";
        cout<<"\n\n        Apakah Anda Ingin Memilih Baju Lagi ? [ya/tidak] = ";cin>>ulang;
        system("CLS");
        }while(ulang=="ya");}
    else if(strcmp(operatorku,produk.Celana)==0||strcmp(operatorku,"celana")==0 || strcmp(operatorku,"2")==0){
        merkCelana.Celana++;
        do{
        introCelana();
        cout<<"\n\tAnda Ingin Membeli Produk Apa [Input Merk / Nomer] = ";cin>>kode.pilihanCelana;
        hasil.Celana=listCelana(kode.pilihanCelana, hasil.Celana);
        //cout<<hasil.Celana;
        cout<<"\n\n\tJika Anda Membeli Produk Celana Lebih dari 4 maka diskon Celana 10%";
        cout<<"\n\n        Apakah Anda Ingin Memilih Celana Lagi ? [ya/tidak] = ";cin>>ulang;
        system("CLS");
        }while(ulang=="ya");
    }
    else if(strcmp(operatorku,produk.Sepatu)==0||strcmp(operatorku,"sepatu")==0 || strcmp(operatorku,"3")==0){
        merkSepatu.Sepatu++;
        do{
        introSepatu();
        cout<<"\n\tAnda Ingin Membeli Produk Apa [Input Merk / Nomer] = ";cin>>kode.pilihanSepatu;
        hasil.Sepatu=listSepatu(kode.pilihanSepatu, hasil.Sepatu);
        //cout<<hasil.Celana;
        cout<<"\n\n\tJika Anda Membeli Produk Sepatu lebih dari 5 maka diskon Sepatu 15%";
        cout<<"\n\n        Apakah Anda Ingin Memilih Sepatu Lagi ? [ya/tidak] = ";cin>>ulang;
        system("CLS");
        }while(ulang=="ya");
    }
    else if(strcmp(operatorku,produk.Tas)==0||strcmp(operatorku,"tas")==0 || strcmp(operatorku,"4")==0){
        merkTas.Tas++;
        do{
        introTas();
        cout<<"\n\tAnda Ingin Membeli Produk Apa [Input Merk / Nomer] = ";cin>>kode.pilihanTas;
        hasil.Tas=listTas(kode.pilihanTas, hasil.Tas);
        //cout<<hasil.Celana;
        cout<<"\n\n\tJika Anda Membeli Produk Tas lebih dari 6 maka diskon Tas 20%";
        cout<<"\n\n        Apakah Anda Ingin Memilih Tas Lagi ? [ya/tidak] = ";cin>>ulang;
        system("CLS");
        }while(ulang=="ya");
    }
    else if(strcmp(operatorku,produk.Jam)==0||strcmp(operatorku,"jam")==0 || strcmp(operatorku,"5")==0){
        merkJam.Jam++;
        do{
        introJam();
        cout<<"\n\tAnda Ingin Membeli Produk Apa [Input Merk / Nomer] = ";cin>>kode.pilihanJam;
        hasil.Jam=listJam(kode.pilihanJam, hasil.Jam);
        //cout<<hasil.Celana;
        cout<<"\n\n\tJika Anda Membeli Produk Jam lebih dari 8 maka diskon Jam 25%";
        cout<<"\n\n        Apakah Anda Ingin Memilih Jam Lagi ? [ya/tidak] = ";cin>>ulang;
        system("CLS");
        }while(ulang=="ya");
    }

    else{
        cout<<"\n\tMaaf Menu tidak ada / Anda Salah Input";
    }
}
void rupiah(int biaya){
string harga;
ostringstream convert;
convert<<biaya;
harga=convert.str();
const char* hargatotal=harga.c_str();
    for(int kounter=0;kounter<strlen(hargatotal);kounter++){
    konversi[strlen(hargatotal)-kounter-1]=hargatotal[kounter];
    }
        for(int kounter=strlen(hargatotal)-1;kounter>=0;kounter--){
        cout<<konversi[kounter];
        if(kounter%3==0){
            if(kounter!=0){
            cout<<".";
            }
        }
    }
}
void detailDiskon(){
//Proses Diskon
    banyak.banyakbaju=merkBaju.Vans+merkBaju.ThreeSecond+merkBaju.Kidrock+merkBaju.Macbeth;
    banyak.banyakcelana=merkCelana.Diesel+merkCelana.Jeans+merkCelana.Lee+merkCelana.Levis;
    banyak.banyaksepatu=merkSepatu.Adidas+merkSepatu.Converse+merkSepatu.NewBalance+merkSepatu.Nike;
    banyak.banyaktas=merkTas.Eiger+merkTas.Palazzo+merkTas.Polo+merkTas.Reebok;
    banyak.banyakjam=merkJam.Bulgari+merkJam.Casio+merkJam.GShock+merkJam.Rolex;
    //Output Diskon
    if(banyak.banyakbaju>=3){
    diskon.diskonBaju=(0.05*hasil.Baju);
    cout<<"\n\n\t\t\t\tDisc Baju 5%         = Rp. -";rupiah(diskon.diskonBaju);
        }
    if(banyak.banyakcelana>=4){
    diskon.diskonCelana=(0.10*hasil.Celana);
    cout<<"\n\n\t\t\t\tDisc Celana 10%      = Rp. -";rupiah(diskon.diskonCelana);
        }
    if(banyak.banyaksepatu>=5){
    diskon.diskonSepatu=(0.15*hasil.Sepatu);
    cout<<"\n\n\t\t\t\tDisc Sepatu 15%      = Rp. -";rupiah(diskon.diskonSepatu);
        }
    if(banyak.banyaktas>=6){
    diskon.diskonTas=(0.20*hasil.Tas);
    cout<<"\n\n\t\t\t\tDisc Tas 20%         = Rp. -";rupiah(diskon.diskonTas);
        }
    if(banyak.banyakjam>=8){
    diskon.diskonJam=(0.25*hasil.Jam);
    cout<<"\n\n\t\t\t\tDisc Jam 25%         = Rp. -";rupiah(diskon.diskonJam);
        }
    //Output Total Semua
    totalDiskon=(diskon.diskonBaju+diskon.diskonCelana+diskon.diskonJam+diskon.diskonSepatu+diskon.diskonTas);
   // cout<<"\n\n\t\t\t\t     Total Incl. Disc = Rp. ";rupiah(totalDiskon);
}
void nota(){
    system("CLS");
    cout<<"\t\t\t\tCeritanya Distro";
    cout<<"\n\n\t\t\t   'Murah tapi tidak murahan'";
    cout<<"\n\n\t\t\tJl. Arif Rahman Hakim, Surabaya";
    cout<<"\n\t";garis2();
    cout<<"\n\n\t\tTerima Kasih Sudah Berbelanja di Toko Kami";
    cout<<"\n\n\t\tJuragan\t\t      = "<<nama;
    cout<<"\n\n\t\tProduk Yang Anda Beli = ";
    notaBaju();
    notaCelana();
    notaSepatu();
    notaTas();
    notaJam();
    cout<<"\n\t";garis2();
    totalHarga=hasil.Baju+hasil.Celana+hasil.Sepatu+hasil.Tas+hasil.Jam;
    cout<<"\n\n\t\t\t\tTotal Belanja        = Rp. ";rupiah(totalHarga);
    detailDiskon();
    if(totalDiskon==0){
        cout<<"\n\n\t\t\t\tDisc 0%          = Rp. 0";
    }
    totalHarga=hasil.Baju+hasil.Celana+hasil.Sepatu+hasil.Tas+hasil.Jam-totalDiskon;

    cout<<"\n\n\t\t\t\tTotal Setelah Diskon = Rp. ";rupiah(totalHarga);
    cout<<"\n";
    garis2();
    cout<<"\n\n\t     Barang yang sudah dibeli tidak dapat dikembalikan";
    cout<<"\n\n\t\t\tKecuali sudah ada perjanjian\n\n";
    cout<<"\n\t    COPYRIGHT © 2016 CERITANYA DISTRO ALL RIGHT RESERVED";
    cout<<"\n\t\t\t     CREATED BY BAGOSEP";
}
#endif // BAGOSEP_H_INCLUDED
