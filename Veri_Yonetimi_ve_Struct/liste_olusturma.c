#include <stdio.h>
#include <stdlib.h>
typedef struct Dugum {
  int veri;
  int frekans;
  struct Dugum *sonraki;
} Dugum;

int main() {
  Dugum *vagon1 = (Dugum *)malloc(sizeof(Dugum));
  Dugum *vagon2 = (Dugum *)malloc(sizeof(Dugum));
  Dugum *gezici = vagon1;
  printf("Proje başlatılıyor...\n");
  vagon1->veri = 3;
  vagon1->frekans = 1;
  vagon1->sonraki = vagon2;

  vagon2->veri = 1;
  vagon2->frekans = 3;
  vagon2->sonraki = NULL;

  int i = 1;
  while (gezici != NULL) {
    printf("vagon%d = %d (%d)\n", i, gezici->veri, gezici->frekans);
    gezici = gezici->sonraki;
    i++;
  }
  // printf("Birinci Vagon: %d (%d)\n", vagon1->veri, vagon1->frekans);
  // printf("Ikinci Vagon: %d (%d)\n",
  // vagon1->sonraki->veri,vagon1->sonraki->frekans);

  free(vagon1);
  free(vagon2);
  return 0;
}
