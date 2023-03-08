/* Program Deret Bilangan
Al May Nabith Thufail
5010221007
Departemen Teknik Sistem dan Industri
Algoritma dan Pemrograman Komputer D*/

#include <stdio.h>

int main (){
    int i, j, hasil=1;
    printf  ("Jumlah Faktorial Bilangan Sesuai Input User\n");
    printf  ("Masukkan Bilangan Yang Ingin Di Faktorial : ");
    scanf   ("%i", &i);
    printf  ("\n");

    for(j=i; j>=1; j--)
        {
        printf  ("%i", j);
        hasil = hasil*j;
        if (j>1) {
        printf(" * ");
        } else {
        printf(" = ");
        }
        }
    
    printf ("%i", hasil);
    printf ("\n\nHasil Yang Didapatkan Dalam Jumlah Deret Bilangan Yang Diinput Adalah %i", hasil);
    return 0;
}