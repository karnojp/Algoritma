#include <iostream.h>;
#include <stdio.h>;
#include <conio.h>;
#include <stdlib.h>;
main()
{
int pakai, a, b, c, d, biaya;
                cout<<"\t----------------------------------------------------------------\n";
                cout<<"\t-----------------Pembayaran Pemakaian Air PDAM------------------\n";
                cout<<"\t----------------------------------------------------------------\n";
   cout<<"\n Inputkan Pemakaian air dalam M3 : ";cin>>pakai;
                a=pakai;
                b=0;
                c=0;
                d=0;
   if (pakai>150)
   {            b=50; c=50; d=pakai-150;         }
   else if (pakai>100)
   {            b=50; c=pakai-1000;   }
   else if (pakai>50)
   {            b=pakai-50;             }

   biaya= ((a*1000)+(b*1500)+(c*2000)+(d*3000));
   cout<<"\n Biaya Pembayaran : "<<biaya<<endl;

   getch();
    return 0;

}

