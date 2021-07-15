//133-TheDoleQueue.cpp
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, k, m;
	while (cin >> N >> k >> m && N != 0) {

		int dole[N];                  //初始化陣列
		for (int i = 0; i < N; ++i)
		{
			dole[i] = 1;
		}
		
		int left = N;       //宣告變數
		int a = -1, b = N;
        int first = 1;

		while (left) {
			int i = k, j = m;
			while (i) {               //從左邊開始選人
				a = (a + 1) % N;
				if (dole[a] == 1) {
					i--;
				}
			}
			while (j) {              //從右邊開始選人
				b = (b + N - 1) % N;
				if (dole[b] == 1) {
					j--;
				}
			}
			if (first) {              //選好人之後輸出，並把被選到的人的index改成0
				if (a == b) {
					dole[a] = 0;
					left--;
					printf("%3d", a + 1);
				}
				else {
					dole[a] = dole[b] = 0;
					left -= 2;
					printf("%3d%3d", a + 1, b + 1 );
				}
				first = 0;
			}
			else {
				if (a == b) {
					dole[a] = 0;
					left--;
					printf(",%3d", a + 1);
				}
				else {
					dole[a] = dole[b] = 0;
					left -= 2;
					printf(",%3d%3d", a + 1, b + 1 );
				}
			}
		}
		cout<<"\n";

	}
}