#include <stdio.h>

int n;
char plans[100];
char str[100];
int x = 1, y = 1;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main(void) {
	//code
	scanf_s("%d", &n);
    int count = 0, cnt=0;
    scanf("%[^n]s", str);
    // 이동 계획을 하나씩 확인하기
	while (1) {
	    count++;
	    if (str[count] == '\n' || '\0') break;
	    if (str[count] == ' ') continue;
        plans[cnt] = str[count];
        char plan = plans[cnt];
        // 이동 후 좌표 구하기
        int nx = -1, ny = -1;
        for (int j = 0; j < 4; j++) {
            if (plan == moveTypes[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        // 공간을 벗어나는 경우 무시
        if (nx < 1 || ny < 1 || nx > n || ny > n)
        continue;
            // 이동 수행
            x = nx;
            y = ny;
            cnt++;
    }
    printf("%d %d \n", x, y);
	return 0;
}
