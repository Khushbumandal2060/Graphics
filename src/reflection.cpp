#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int x1, y1, x2, y2;

    // Input original line coordinates
    printf("Enter initial point of line (x1 y1): ");
    scanf("%d%d", &x1, &y1);

    printf("Enter final point of line (x2 y2): ");
    scanf("%d%d", &x2, &y2);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw original line in WHITE
    setcolor(WHITE);
    line(x1, y1, x2, y2);

    // Reflect the line over y = x by swapping x and y
    int rx1 = y1, ry1 = x1;
    int rx2 = y2, ry2 = x2;

    // Draw reflected line in GREEN
    setcolor(GREEN);
    line(rx1, ry1, rx2, ry2);

    // Optional: draw y = x line as reference
    setcolor(RED);
    line(0, 0, getmaxx(), getmaxy());

    getch();
    closegraph();
    return 0;
}
