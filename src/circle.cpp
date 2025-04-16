#include <graphics.h>
#include <stdio.h>
#include <math.h>

void draw(int a, int b, int h, int k) {
    int x = 0, y = b;
    float p1 = (b * b) - (a * a * b) + (0.25 * a * a);
    int dx = 2 * b * b * x;
    int dy = 2 * a * a * y;

    // Region 1
    while (dx < dy) {
        putpixel(x + h, y + k, WHITE);
        putpixel(-x + h, y + k, WHITE);
        putpixel(x + h, -y + k, WHITE);
        putpixel(-x + h, -y + k, WHITE);

        if (p1 < 0) {
            x++;
            dx = 2 * b * b * x;
            p1 = p1 + dx + (b * b);
        } else {
            x++;
            y--;
            dx = 2 * b * b * x;
            dy = 2 * a * a * y;
            p1 = p1 + dx - dy + (b * b);
        }
    }

    // Region 2
    float p2 = (b * b) * ((x + 0.5) * (x + 0.5)) + (a * a) * ((y - 1) * (y - 1)) - (a * a * b * b);

    while (y >= 0) {
        putpixel(x + h, y + k, WHITE);
        putpixel(-x + h, y + k, WHITE);
        putpixel(x + h, -y + k, WHITE);
        putpixel(-x + h, -y + k, WHITE);

        if (p2 > 0) {
            y--;
            dy = 2 * a * a * y;
            p2 = p2 - dy + (a * a);
        } else {
            x++;
            y--;
            dx = 2 * b * b * x;
            dy = 2 * a * a * y;
            p2 = p2 + dx - dy + (a * a);
        }
    }
}

int main() {
    int a, b, h, k;
    int gd = DETECT, gm;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("Enter centre of ellipse (h and k): ");
    scanf("%d %d", &h, &k);

    initgraph(&gd, &gm, "");
    draw(a, b, h, k);
    getch();
    closegraph();
    return 0;
}
