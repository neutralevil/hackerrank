#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
    int hh, mm, ss;
    char suffix[10] = {0};
    scanf("%d:%d:%d%s", &hh, &mm, &ss, suffix);
    
    if (hh >= 12)
        hh -= 12;
    if (suffix[0] == 'P' || suffix[0] == 'p')
        hh += 12;
    
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}