#include <stdio.h>
#include <stdbool.h>
 
struct daftar_barang {
   int  id[50];
   char  barang[50];
   char  size[50];
   int  harga;
  };
 
int main(void)
{
  struct daftar_barang daftar_barang01; 
 
  printf("***** Harga Barang Penjualan *****\n");
  printf("\n");
  
  printf("id: ");
  gets(daftar_barang01.id);
 
  printf("barang: ");
  gets(daftar_barang01.barang);
 
  printf("size: ");
  gets(daftar_barang01.size);
 
  printf("harga: ");
  gets(daftar_barang01.harga);
  
  scanf("%i",&daftar_barang01.harga);
  
  printf("Hasil: \n");
 
  printf("%s dengan barang %s ", daftar_barang01.id, daftar_barang01.barang);
  printf("yang berukuran %s dengan harga %i\n",daftar_barang01.size, daftar_barang01.harga);
 
 
 
  return 0;
}	
