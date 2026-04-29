#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct artefak {
    char nama[50];
    char kategori[50];
    int tahun;
    int nilai;
} artefak;

int main(){
    
    int ukuran;
	
    printf("kode nyala");
    scanf("%d",&ukuran);

    //inisialisasi array data dan temp
    artefak data[ukuran]; 
    artefak temp;

    for (int i = 0; i < ukuran; i++){
        
        scanf("%s",data[i].nama);
        scanf("%s",data[i].kategori);
        scanf("%d",&data[i].tahun);
        scanf("%d",&data[i].nilai);
    }
    //cek loop berhasil ga
    printf("loop beres\n");

    //cek dulu data berhasil masuk ga
    for (int i = 0; i < ukuran; i++){
        printf("%s ",data[i].nama);
        printf("%s ",data[i].kategori);
        printf("%d ",data[i].tahun);
        printf("%d\n",data[i].nilai);
    }

    //sorting kategori
    for (int i = 0; i<ukuran;i++){
        int min = i;

        for (int j = i + 1; j < ukuran; j++) {
            if (strcmp(data[j].kategori, data[min].kategori) < 0) {
                min = j;
            }
        //sorting tahun-----------------------------------------------------------
            else if(strcmp(data[j].kategori, data[min].kategori) == 0){
                artefak temptahun;
                for (int k = 0; k < ukuran - 1; k++) {
                    int mintahun = k;
                    for (int l = k + 1; l < ukuran; l++) {
                        if (data[l].tahun < data[mintahun].tahun)
                            mintahun = l;
                    }
                if (mintahun != k) {
                        temptahun = data[mintahun];
                        data[mintahun] = data[i];
                        data[i] = temptahun;
                    }
                }
            }
        //----------------------------------------------------------------
            
        }
        if (min != i) {
            temp = data[i];
            data[i] = data[min];
            data[min]=temp;    
        }

    }


    //cek sorting KATEGORI berhasil ga
    for (int i = 0; i < ukuran; i++){
        
        printf("%s ",data[i].nama);
        printf("%s ",data[i].kategori);
        printf("%d ",data[i].tahun);
        printf("%d\n",data[i].nilai);
    }

    return 0;
}
