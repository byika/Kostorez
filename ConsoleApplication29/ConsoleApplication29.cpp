// ConsoleApplication29.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    //2. Паралельна ли прямая.
    float x1, x2, y1, y2;

    std::cout << "1 TOchKA (x,y): \n";
    std::cin >> x1 >> y1;

    std::cout << "2 TOchKA (x,y): \n";
    std::cin >> x2 >> y2;

    if (x1 == x2 && y1 == y2) {
        std::cout << "TlPYAMAYA - TOchKA \n";
    }
    else if (x1 == x2) {
        std::cout << "TlAPALELbHA OCU y \n";
    }
    else if (y1 == y2) {
        std::cout << "TlAPALELbHA OCU x \n";
    }
    else {
        std::cout << "HE TlAPALELbHA \n";
    }
    

    //3.Есть ли вещественная часть.

    float num;

    std::cout << "BBEDUTE chUCLO: \n";
    std::cin >> num;


    if (num - int(num) != 0) {
        std::cout << "chUCLO UMEET BEshECTBEHHUYU chACTb \n";
    }
    else {
        std::cout << "chuCLO HE UMEET BEshECTBEHHUYU chACTb \n";
    }


    //4.Счастливый ли билет.

    int b1, b2, b3, b4, b5, b6, b;

    std::cout << "BBEDUTE HOMEP bULETA \n";
    std::cin >> b;

    b1  = b / 100000 % 10;
    b2  = b / 10000 % 10;
    b3  = b / 1000 % 10;
    b4  = b / 100 % 10;
    b5  = b / 10 % 10;
    b6  = b % 10;

    if (b > 999999){
        std::cout << "HETlPABULbHblU HOMEP \n";
    }
    else if (b1 + b2 + b3 == b4 + b5 + b6) {
        std::cout << "TlO3DPABLYAYU \n";
    }
    else {
        std::cout << "HE TlOBE3LO \n";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
