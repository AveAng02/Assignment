//Name,Roll,Marks for 3 subjects,average,Rank.User Input

#include <iostream>
#include <string>

struct student
{
    std::string name;
    int roll;
    double phy;
    double chem;
    double math;
    double avg;
    int rank;
} temp;

void Details(student* s)
{
    std::cout << "Enter name :";
    std::getline(std::cin, s->name);
    std::cout << "Enter roll :";
    std::cin >> s->roll;
    std::cout << "Enter Marks:\nPhysic:";
    std::cin >> s->phy;
    std::cout << "Chemistry:";
    std::cin >> s->chem;
    std::cout << "Mathematic:";
    std::cin >> s->math;
    s->avg = (s->phy + s->chem + s->math)/3;
}

void ranking(student stu[], int n)
{
    for(int j,max,i = 0; i < n - 1; i++)
    {
        max = i;
        for(j = i + 1; j < n; j++)
        {
            if(stu[max].avg < stu[j].avg)
            {
                max = j;
            }
        }
        if(max != i)
        {
            temp = stu[max];
            stu[max] = stu[i];
            stu[i] = temp;
        }
    }
}

int main()
{
    int n;    
    std::cout << "Enter the number of students:";
    std::cin >> n;
    
    student arr[n];
    
    std::cout << "Enter the details of Students:" << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << "Enter for student " << i + 1 << std::endl;
        Details(&arr[i]);
    }
    
    ranking(arr, n);
    
    std::cout << "The Ranking is :\n";
    for(int i = 0; i < n; i++)
    {
        std::cout << "RANK " << i + 1 << std::endl;
        std::cout << arr[i].name << "\n" << arr[i].roll << "\nMarks : " << arr[i].avg << std::endl;
    }
}


