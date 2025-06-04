#include "test.h"

int main(int argc, char const *argv[])
{
    Vector2 vecs[3] = {new_vector(1, 2), new_vector(5, 3), new_vector(4, 4)};

    for (int i = 0; i < 3; i++) {
        Vector2 *vec_ptr = &vecs[i];
        rotate_clockwise(vec_ptr);
    }

    for (int i = 0; i < 3; i++) {
        print_vector(&vecs[i]);
        print_info(&vecs[i]);
    }

    return 0;
}

Vector2 new_vector(int x, int y) {
    Vector2 vec = {
        .x = x,
        .y = y
    };

    return vec;
}

void rotate_clockwise(Vector2 *vec_ptr) {
    int temp = -vec_ptr->x;
    vec_ptr->x = vec_ptr->y;
    vec_ptr->y = temp;
}

void print_vector(Vector2 *vec_ptr) {
    printf("x-coord: %d, ", vec_ptr->x);
    printf("y-coord: %d\n", vec_ptr->y);
}

void print_info(Vector2 *vec_ptr) {
    printf("The size is %zu\n", sizeof(*vec_ptr));
    printf("The address is %p\n", vec_ptr);
    printf("The size of the address is %zu\n", sizeof(vec_ptr));
}
