#include <iostream>
#include <string>

class Vector2D {
    public:
        int x;
        int y;

        static Vector2D newVector2D(int x, int y) {
            return Vector2D { x, y };
        }

        std::string toString() {
            std::string vectorToString = std::format("x: {}, y: {}", x, y);
            return vectorToString;
        }
};

int main() {
    Vector2D vec = Vector2D::newVector2D(3, 7);
    std::cout << vec.toString() << '\n';
    return 0;
}