#include <stdio.h>
#include <stdlib.h>
#define N 2

struct oyuncu {
    char soyisim[20];  // Bu boyutlarý ayarlayabilirsiniz
    char isim[20];
    int yas;
    int seviye;
};

struct equipe {
    char isim[10];
    struct oyuncu oyuncu1;
    struct oyuncu oyuncu2;
};

void oyuncuyu_olustur(struct oyuncu *player) {
    printf("Ismi giriniz.\n");
    scanf("%s", player->isim);
    printf("Soyismi giriniz.\n");
    scanf("%s", player->soyisim);
    printf("Yasi giriniz.\n");
    scanf("%d", &player->yas);
    printf("Seviyeyi giriniz.\n");
    scanf("%d", &player->seviye);
}

void ekibi_olustur(struct equipe *e) {
    printf("Ekibin adini giriniz :\n");
    scanf("%s", e->isim);
    printf("Oyuncu 1 :\n");
    oyuncuyu_olustur(&e->oyuncu1);
    printf("Oyuncu 2 :\n");
    oyuncuyu_olustur(&e->oyuncu2);
}

void ekibi_bas(struct equipe *e) {
    printf("Isim: %s\n", e->isim);
    printf("Oyuncu 1 : \n");
    oyuncuyu_bas(&e->oyuncu1);
    printf("Oyuncu 2 : \n");
    oyuncuyu_bas(&e->oyuncu2);
}

void oyuncuyu_bas(struct oyuncu *j) {
    printf("Isim : %s\n", j->isim);
    printf("Soyisim : %s\n", j->soyisim);
    printf("Yas : %d\n", j->yas);
    printf("Seviye : %d\n", j->seviye);
}

int main() {
    struct equipe tab[N];
    int i;
    for (i = 0; i < N; i++) {
        printf("Ekip %d : \n", i + 1);
        ekibi_olustur(&tab[i]);
    }
    for (i = 0; i < N; i++) {
        printf("Ekip %d  :\n", i + 1);
        ekibi_bas(&tab[i]);
    }

    return 0;
}
