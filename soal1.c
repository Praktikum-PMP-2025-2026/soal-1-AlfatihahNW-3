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
	
    scanf("%d",&ukuran);

    //inisialisasi array data dan temp
    artefak data[ukuran]; 

    for (int i = 0; i < ukuran; i++){
        
        scanf("%s",data[i].nama);
        scanf("%s",data[i].kategori);
        scanf("%d",&data[i].tahun);
        scanf("%d",&data[i].nilai);
    }
    //cek loop berhasil ga

    //cek dulu data berhasil masuk ga

//sorting kategori
    for (int i = 0; i < ukuran; i++) {

        for (int j = i+1; j < ukuran; j++) {
            if (strcmp(data[i].kategori, data[j].kategori) > 0) {
                artefak temp;
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
            else if(strcmp(data[i].kategori, data[j].kategori) == 0){
                //sorting tahun-------------------------------
                artefak temp;
                if (data[i].tahun > data[j].tahun) {
                    temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
                //sorting nilai
                else if(data[i].tahun == data[j].tahun){
                    artefak temp;
                    if (data[i].nilai < data[j].nilai) {
                        temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;
                    }
                    else if(data[i].nilai == data[j].nilai){
                        if (strcmp(data[i].nama, data[j].nama) > 0) {
                            artefak temp;
                            temp = data[i];
                            data[i] = data[j];
                            data[j] = temp;
                    }
                }
                
                //sorting nilai
            }
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
}


