#include <stdio.h>

typedef struct Vector2 {
    int x;
    int y;
} Vector2;

Vector2 rotate_clockwise(Vector2 vec);

void print_vector(Vector2 vec);

Vector2 new_vector(int x, int y);