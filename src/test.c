#include "test.h"

int main(int argc, char const *argv[])
{
    struct Vector2 vec = new_vector(2, 4);
    rotate_clockwise(vec);
    print_vector(vec);
    printf("Program in C!\n");
    return 0;
}

struct Vector2 new_vector(int x, int y) {
    struct Vector2 vec = {
        .x = x,
        .y = y
    };

    return vec;
}

void rotate_clockwise(struct Vector2 vec) {
    int temp = -vec.x;
    vec.x = vec.y;
    vec.y = temp;
}

void print_vector(struct Vector2 vec) {
    printf("x-coord: %d, ", vec.x);
    printf("y-coord: %d\n", vec.y);
}
