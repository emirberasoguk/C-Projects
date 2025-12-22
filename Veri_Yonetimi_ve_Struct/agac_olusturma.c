#include <stdio.h>
#include <stdlib.h>

typedef struct Dugum {
  int veri;
  // int frekans;
  struct Dugum *sag;
  struct Dugum *sol;
} Dugum;

void AgacYazdirici(Dugum *d) {
  if (d == NULL) {
    return;
  }
  printf("%d\n", d->veri);
  AgacYazdirici(d->sol);
  AgacYazdirici(d->sag);
}

int main() {
  Dugum *kok = (Dugum *)malloc(sizeof(Dugum));
  Dugum *sag_cocuk = (Dugum *)malloc(sizeof(Dugum));
  Dugum *sol_cocuk = (Dugum *)malloc(sizeof(Dugum));
  Dugum *gezici = kok;

  printf("Proje başlatılıyor...\n");

  kok->veri = 3;
  kok->sag = sag_cocuk;
  kok->sol = sol_cocuk;

  sol_cocuk->veri = 2;
  sol_cocuk->sag = NULL;
  sol_cocuk->sol = NULL;

  sag_cocuk->veri = 1;
  sag_cocuk->sag = NULL;
  sag_cocuk->sol = NULL;

  AgacYazdirici(kok);

  free(kok);
  free(sag_cocuk);
  free(sol_cocuk);
  return 0;
}
