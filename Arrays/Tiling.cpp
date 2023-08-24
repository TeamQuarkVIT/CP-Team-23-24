#include <stdio.h>
#include <string.h>

int size_of_grid, b, a, cnt = 0;
int arr[128][128];

void place(int x1, int y1, int x2, int y2, int x3, int y3) {
cnt++;
arr[x1][y1] = cnt;
arr[x2][y2] = cnt;
arr[x3][y3] = cnt;
}

int tile(int n, int x, int y) {
int r, c;
if (n == 2) {
cnt++;
for (int i = 0; i &lt; n; i++) {
for (int j = 0; j &lt; n; j++) {
if (arr[x + i][y + j] == 0) {
arr[x + i][y + j] = cnt;

}
}
}
return 0;
}

for (int i = x; i &lt; x + n; i++) {
for (int j = y; j &lt; y + n; j++) {
if (arr[i][j] != 0)
r = i, c = j;
}
}

if (r &lt; x + n / 2 &amp;&amp; c &lt; y + n / 2)
place(x + n / 2, y + (n / 2) - 1, x + n / 2,
y + n / 2, x + n / 2 - 1, y + n / 2);

else if (r &gt;= x + n / 2 &amp;&amp; c &lt; y + n / 2)
place(x + (n / 2) - 1, y + (n / 2), x + (n / 2),
y + n / 2, x + (n / 2) - 1, y + (n / 2) - 1);

else if (r &lt; x + n / 2 &amp;&amp; c &gt;= y + n / 2)
place(x + n / 2, y + (n / 2) - 1, x + n / 2,
y + n / 2, x + n / 2 - 1, y + n / 2 - 1);

else if (r &gt;= x + n / 2 &amp;&amp; c &gt;= y + n / 2)
place(x + (n / 2) - 1, y + (n / 2), x + (n / 2),
y + (n / 2) - 1, x + (n / 2) - 1,
y + (n / 2) - 1);

tile(n / 2, x, y + n / 2);
tile(n / 2, x, y);
tile(n / 2, x + n / 2, y);
tile(n / 2, x + n / 2, y + n / 2);

return 0;
}

int main() {
size_of_grid = 8;
memset(arr, 0, sizeof(arr));
a = 0, b = 0;
arr[a][b] = -1;
tile(size_of_grid, 0, 0);

for (int i = 0; i &lt; size_of_grid; i++) {
for (int j = 0; j &lt; size_of_grid; j++)
printf(&quot;%d \t&quot;, arr[i][j]);

printf(&quot;\n&quot;);
}

return 0;
}
