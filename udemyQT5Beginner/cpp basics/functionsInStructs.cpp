#include <iostream>

struct laptop
{
    int weight;

    double asKilograms()
    {
        return weight * 0.45359237;
    }
};

int main(int argc, char const *argv[])
{
    laptop notebook;
    notebook.weight = 5;

    std::cout << "weight in pounds: " << notebook.weight << "\n";
    std::cout << "weight in kilograms: " << notebook.asKilograms() << "\n";
    return 0;
}

// almost like a class and its logic
// but classes are better and more versatile