#include <stdio.h>

typedef struct Vector2 {
    int x;
    int y;
} Vector2;

void rotate_clockwise(Vector2 *vec_ptr);

void print_vector(Vector2 vec);

void print_info(Vector2 vec);

Vector2 new_vector(int x, int y);