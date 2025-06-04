#include "test.h"

int main(int argc, char const *argv[])
{
    Vector2 vec = new_vector(2, 4);
    Vector2 *vec_ptr = &vec;
    rotate_clockwise(vec_ptr);
    print_vector(vec);
    print_info(vec);
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

void print_vector(Vector2 vec) {
    printf("x-coord: %d, ", vec.x);
    printf("y-coord: %d\n", vec.y);
}

void print_info(Vector2 vec) {
    int size = (int)sizeof(vec);
    int size_of_address = (int)sizeof(&vec);
    printf("The size is %d\n", size);
    printf("The address is %p\n", &vec);
    printf("The size of the address is %d\n", size_of_address);
}
