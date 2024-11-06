
#include <stdio.h>

int main() {
    int d, m, y;
    printf("Enter day month year: ");
    scanf("%d %d %d", &d, &m, &y);

    int w = (d + (13 * (m + 1)) / 5 + y + y / 4 - y / 100 + y / 400) % 7;

    char* days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    printf("%s", days[w]);

    return 0;
}

