#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Point;

bool areCollinear(Point p1, Point p2, Point p3) {
    // Calculate the slopes of the lines formed by (p1, p2) and (p1, p3)
    // If the slopes are equal, then p1, p2 and p3 are collinear
    return (p2.y - p1.y) * (p3.x - p1.x) == (p3.y - p1.y) * (p2.x - p1.x);
}

int main() {
    Point p1 = {0, 0};
    Point p2 = {1, 1};
    Point p3 = {2, 2};

    if (areCollinear(p1, p2, p3)) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}
