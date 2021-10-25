#include <iostream>
using namespace std;

class Square
{
public:
    double width;  // 宽
    double height; // 高

    // 成员函数声明
    double calcArea(void);
};

// 成员函数定义
double Square::calcArea(void)
{
    return width * height;
}

int main()
{

    // 声明一个盒子类型的变量
    Square square;

    square.width = 3.0;
    square.height = 4.0;

    cout << "正方形的面积是:" << square.calcArea() << endl;

    return 0;
}
