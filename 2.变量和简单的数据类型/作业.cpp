#include <iostream>

int main() {
    // 方程的系数
    double a1 = 2, b1 = 3, c1 = 8;
    double a2 = 4, b2 = -1, c2 = 2;

    // 计算行列式
    double D = a1 * b2 - a2 * b1;

    // 检查是否有唯一解
    if (D == 0) {
        std::cout << "方程组没有唯一解。" << std::endl;
    } else {
        // 计算 x 和 y
        double x = (c1 * b2 - c2 * b1) / D;
        double y = (a1 * c2 - a2 * c1) / D;

        std::cout << "方程的解是: x = " << x << ", y = " << y << std::endl;
    }

    return 0;
}
