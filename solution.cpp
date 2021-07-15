#include <cstdio>
#include <string.h>
using namespace std;

const int maxn = 25;

int main() {
  int n, k, m;
  while (scanf("%d%d%d", &n, &k, &m) == 3 && n) {
    int people[maxn];
    memset(people, 0, sizeof(people));
    int currA = 0, currB = n + 1, left = n; //用left記錄剩下的人，作為迴圈終止的條件


    while (left) {
      //利用下標模擬官員AB的運動
      int i = k, j = m;

      while (i) {
        currA = (currA + 1 + n - 1) % n + 1;
        if (!people[currA])
          i--;
      }

      while (j) {
        currB = (currB - 1 + n - 1) % n + 1;
        if (!people[currB])
          j--;
      }

      if (currA == currB) {
        people[currA] = 1;
        left--;
        printf("%3d", currA);
      }

      else {
        people[currA] = people[currB] = 1;
        left -= 2;
        printf("%3d%3d", currA, currB);
      }

      if (left)
        printf(",");    //輸出的處理，別怕“，”
    }
    printf("\n");
  }
  return 0;
}