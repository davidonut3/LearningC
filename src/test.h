#include <stdio.h>

struct Vector2 {
    int x;
    int y;
};

void rotate_clockwise(struct Vector2 vec);

void print_vector(struct Vector2 vec);

struct Vector2 new_vector(int x, int y);