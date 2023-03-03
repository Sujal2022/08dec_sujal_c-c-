#include <iostream>
using namespace std;
class Matrix 
{
    private:
        int size;
        int *elements;

    public:
        Matrix(int s) 
		{
            size = s;
            elements = new int[size];
        }

        Matrix operator+ (const Matrix& m) 
		{
            Matrix result(size);
            for (int i = 0; i < size; i++) 
			{
                result.elements[i] = elements[i] + m.elements[i];
            }
            return result;
        }

        void input() 
		{
            cout << "Enter the elements of the matrix:\n";
            for (int i = 0; i < size; i++) 
			{
                cin >> elements[i];
            }
        }

        void display() 
		{
            cout << "The elements of the matrix are:\n";
            for (int i = 0; i < size; i++) 
			{
                cout << elements[i] << " ";
            }
            cout << endl;
        }
};

int main() 
{
    int size;
    cout << "Enter the size of the matrices:\n";
    cin >> size;

    Matrix m1(size), m2(size);
    m1.input();
    m2.input();

    Matrix result = m1 + m2;
    result.display();

    return 0;
}

