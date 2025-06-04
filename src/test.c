#include "test.h"

int main(int argc, char const *argv[])
{
    Vector2 vec = new_vector(2, 4);
    vec = rotate_clockwise(vec);
    print_vector(vec);
    return 0;
}

Vector2 new_vector(int x, int y) {
    Vector2 vec = {
        .x = x,
        .y = y
    };

    return vec;
}

Vector2 rotate_clockwise(Vector2 vec) {
    int temp = -vec.x;
    vec.x = vec.y;
    vec.y = temp;
    return vec;
}

void print_vector(Vector2 vec) {
    printf("x-coord: %d, ", vec.x);
    printf("y-coord: %d\n", vec.y);
}
