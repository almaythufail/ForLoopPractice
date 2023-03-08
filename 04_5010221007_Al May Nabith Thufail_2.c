/* Program Deret Bilangan
Al May Nabith Thufail
5010221007
Departemen Teknik Sistem dan Industri
Algoritma dan Pemrograman Komputer D*/

#include <stdio.h>

int main (){
    int i, j, hasil;
    printf  ("Jumlah Deret Bilangan Sesuai Input User\n");
    printf  ("Masukkan Jumlah Deret Yang Kamu Inginkan : ");
    scanf   ("%i", &i);
    printf  ("\n");

    for (j=1;j<=i;j++)
        {
        printf  ("%i", j);
        hasil = hasil+j;
            
            if (j<i) {
            printf(" + ");
            } else {
            printf(" = ");
            }
        }
    
    printf ("%i", hasil);
    printf ("\n\nHasil Yang Didapatkan Dalam Jumlah Deret Bilangan Yang Diinput Adalah %i", hasil);
    return 0;
}