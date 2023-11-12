#include<iostream>

void change(int *x) {
    *x = 10;
}

int main() 
{
    int *x = new int(5);
    change(x);
    std::cout << *x << std::endl;
    delete x;
    return 0;

}
/*  int *y = &x;
    x = 6;
    int z = 10;
    y = &z; 

    x = 5;
    *y = 60; 

    std::cout << &x << std::endl;

    std::cout << x << " " << *y << " " << z <<std::endl;
    return 0;
}
*/