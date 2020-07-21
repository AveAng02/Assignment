#include <iostream>

int main()
{
    int i = 0, j = 0, choice = 0;
    
    Vector v1, v2, v3;
    
    while(choice != 9)
    {
        std::cout << "----------------------------------------" << std::endl;
        std::cout << " Enter a choice:\n 1.Addition\n 2.Subtraction\n 3.Magnitude\n 4.Dot Product\n";
        std::cout << " 5.Cross Product\n 6.Scaler Multiplication\n 7.Scaler Division\n 8.Normalization\n 9.Break\n";
        std::cout << "----------------------------------------" << std::endl;
        std::cin >> choice;
        
        switch(choice)
        {
            case 1:
                std::cout << "Enter 1st Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                Vector v1(i, j);
                
                std::cout << "Enter 2nd Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                Vector v2(i, j);
                
                Vector v3 = v1.add(v2);
                
                std::cout << "The added vector is: x = " << v3.getX() << " y = " << v3.getY() << std::endl;
                break;
                
            case 2:
                std::cout << "Enter 1st Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1(i, j);
                
                std::cout << "Enter 2nd Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v2(i, j);
                
                v3 = v1.sub(v2);
                
                std::cout << "The added vector is: x = " << v3.getX() << " y = " << v3.getY() << std::endl;
                break;
                
            case 3:
                std::cout << "Enter Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1(i, j);
                
                std::cout << "The magnitude of the vector is : " << v1.mod() << std::endl;
                break;
                
            case 4:
                std::cout << "Enter 1st Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1(i, j);
                
                std::cout << "Enter 2nd Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v2(i, j);
                
                std::cout << "The Dot product is : " << v1.Dot(v2);
                break;
                
            case 9:
                break;
        }
    }
}
