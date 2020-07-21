#include <iostream>
#include "Vector.h"

int main()
{
    int n = 1, i = 0, j = 0, choice = 0;
    
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
                v1.setCoord(i, j);
                
                std::cout << "Enter 2nd Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v2.setCoord(i, j);
                
                v3 = v1.add(v2);
                
                std::cout << "The added vector is: " << v3.getX() << "i " << v3.getY() << "j" << std::endl;
                break;
                
            case 2:
                std::cout << "Enter 1st Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1.setCoord(i, j);
                
                std::cout << "Enter 2nd Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v2.setCoord(i, j);
                
                v3 = v1.sub(v2);
                
                std::cout << "The added vector is: " << v3.getX() << "i " << v3.getY() << "j" << std::endl;
                break;
                
            case 3:
                std::cout << "Enter Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1.setCoord(i, j);
                
                std::cout << "The magnitude of the vector is : " << v1.Mod() << std::endl;
                break;
                
            case 4:
                std::cout << "Enter 1st Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1.setCoord(i, j);
                
                std::cout << "Enter 2nd Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v2.setCoord(i, j);
                
                std::cout << "The Dot product is : " << v1.Dot(v2) << std::endl;
                break;

            case 5:
                std::cout << "Enter 1st Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1.setCoord(i, j);
                
                std::cout << "Enter 2nd Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v2.setCoord(i, j);

                v3 = v1.Cross(v2);

                std::cout << "The cross product is : " << v3.getX() << "i " << v3.getY() << "j" << std::endl;
                break;

            case 6:
                std::cout << "Enter Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                std::cout << "Enter the multiplying factor : ";
                std::cin >> n;
                v1.setCoord(i, j);
                v1.Multi(n);

                std::cout << "The scaled vector is : " << v1.getX() << "i " << v1.getY() << "j" << std::endl;
                break;

            case 7:
                std::cout << "Enter Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                std::cout << "Enter the division factor : ";
                std::cin >> n;
                v1.setCoord(i, j);
                v1.Divi(n);

                std::cout << "The scaled vector is : " << v1.getX() << "i " << v1.getY() << "j" << std::endl;
                break;

            case 8:
                std::cout << "Enter Vector:\nx = ";
                std::cin >> i;
                std::cout << "y = ";
                std::cin >> j;
                v1.setCoord(i, j);

                v1.normalize();

                std::cout << "The unit vector is : " << v1.getX() << "i " << v1.getY() << "j" << std::endl;
                break;
                
            case 9:
                break;
        }
    }
}
