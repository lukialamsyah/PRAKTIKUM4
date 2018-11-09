#include<iostream>
using namespace std;

int main(){

    int N, a, b, d, hb;
    int e = 0;
    int i = 0;
    float dis = 0.0;
    int total = 0;
    int stotal = 0;

    cout << "                   Selamat datang \n" ;
    cout << "                         di \n" ;
    cout << "                   Toko beta" ;
    cout << " \n " ;
    cout << " \n " ;
    cout << "--------------------------------------------------------- \n" ;
    cout << "--------------------------------------------------------- \n" ;
    cout << " \n " ;
    cout << "Berapa macam barang yang akan Anda beli? \n" ;
    cin >> N;
    cout << " \n " ;

    do {
        cout << "Berapa barang yang akan Anda beli? \n" ;
        cin >> a;
        cout << " \n";
        cout << "Berapa harga per satuan barang yang Anda beli? \n";
        cin >> b;
        cout << " \n";

        hb = a * b;
        stotal = stotal+hb;
        e = e+a;
        i = i+1;

        cout << " \n";
        cout << "Harga barang tesebut adalah " << hb << " \n ";

        if (i < N) {
            cout  << "Barang ke-" << i << " dari " << N << " barang yang akan dibeli \n" ;
        } else {
            cout << "Anda telah membeli " << N << " barang ";
        }

        cout << " \n";
        cout << " \n";

        } while (i < N) ;

        if (stotal >= 1000000) {
            dis = (stotal/100)*10;
            total = stotal-dis;
            d = 10;
        } else {
            if (stotal > 500000){
                dis = (stotal/100)*5;
                total = stotal-dis;
                d = 5;
            } else {
                total = stotal;
                d = 0;
            }

        }

        cout << "--------------------------------------------------------- \n" ;
        cout << "--------------------------------------------------------- \n" ;
        cout << " \n";

        cout << "Jumlah item: " << N << " \n" ;
        cout << "jumlah barang: " << e << " \n" ;
        cout << "Total belanja: " << stotal << " \n" ;
        cout << "Dicount: " << d << " % \n" ;
        cout << "Total: " << total << " \n" ;
        cout << " \n" ;
        cout << " \n" ;
        cout << "                               Terima kasih \n" ;
        cout << "                          Selamat datang kembali" ;
}
