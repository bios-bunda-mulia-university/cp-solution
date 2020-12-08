// Contributor: Jayaku Briliantio [BIOS-Bunda Mulia]

#include <stdio.h>

int main() {
  int x, y, s, t;
  scanf("%d%d%d%d", &x, &y, &s, &t);
  int path = 0;
  for(int i=x; i<=x+s; i++) {
    for(int j=y; j<=y+s; j++) {
      if (i+j <= t)
        path += 1;
    }
  }
  printf("%d\n", path);
  return 0;
}
