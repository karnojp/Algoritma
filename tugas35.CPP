#include <iostream>;
#include <conio.h>;
#include <stdio.h>;

int main()
{
    int bayar,akhir,diskon,satuan,harga;
    cout<<"program diskon harga besar-besaran"<<endl<<endl<<endl;
    cout<<"masukkan jumlah barang= ";
    cin>>harga;
    cout<<"masukkan harga satuan barang = ";
    cin>>satuan;
    bayar=harga*satuan;
    if ((bayar>=1000000)){
        diskon=bayar*0.1;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((bayar>500000) && (bayar<1000000)){
        diskon=bayar*0.05;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 5%"<<endl;
   }else {
        akhir=bayar;
    }
    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;;
    getch();
    return 0;
}