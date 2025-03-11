#include <stdio.h>
#include <string.h>

char dir_str[5] = "NESW";
int mapper[128];
int dir_num;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int main() {
    int n;
    char dir_c;
    int x, y, dist;

    //for (int i = 0; i < dir_str.length(); i++) {
    for (int i = 0; i < strlen(dir_str); i++) {
        mapper[dir_str[i]] = i;
    }
    // scanf("%d\n",&n);
    //'\n' 넣어야 버퍼에 '\n' 이 들어가서 올바르게 입력 된다.
    scanf("%d",&n);
    getchar();
    //위처럼 scanf에 '\n' 넣는 것보다는 getchar(); 쓰는 게 낫다.
    
    //cin >> n;
    x = 0;
    y = 0;
    for (int _ = 0; _ < n; _++) {
        //cin >> dir_c >> dist;
        // scanf("%c %d\n",&dir_c,&dist);
        //'\n' 넣어야 버퍼에 '\n' 이 들어가서 올바르게 입력 된다.

        scanf("%c %d",&dir_c,&dist);
        getchar();
        //위처럼 scanf에 '\n' 넣는 것보다는 getchar(); 쓰는 게 낫다.
        dir_num = mapper[dir_c];
        x += dx[dir_num] * dist;
        y += dy[dir_num] * dist;
    }
    // cout << x << " " << y;
    printf("%d %d\n",x,y);




    return 0;
}