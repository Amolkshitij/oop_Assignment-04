#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// Function
void function()
{
    int n, i;
    int arr[n];
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("After reversal: \n");
    for (i = 0; i < n / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
// Class Object
class student
{
private:
    string name;
    int roll;

public:
    void getdata()
    {
        string ch;
        int n;
        cout << "Enter Name: ";
        cin >> ch;
        ch = name;
        cout << "Enter Roll number: ";
        cin >> n;
        n = roll;
    }
    void display()
    {
        cout << "Name: " << name;
        cout << "Roll Number: " << roll;
    }
};
// Inheritance
// Constructor & Destructor
class Parent
{
public:
    Parent()
    {
        cout << "Inside base class" << endl;
    }
    ~Parent()
    {
        cout << "Destructor evoked" << endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "Inside sub class" << endl;
    }
};
// Polymorphism
float area(int r)
{
    float a;
    float pi = 3.14;
    a = pi * r * r;
    return a;
}
int area(int l, int b)
{
    float a1;
    a1 = l * b;
    return a1;
}
float area(int n, int bs, int h)
{
    float a2;
    a2 = n * bs * h;
    return a2;
}
// Templatte
template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
// Operator Overloading
class Bank
{
    int c;

public:
    Bank()
    {
        c = 0;
    }
    Bank operator++(int)
    {
        c++;
    }
    int get_c()
    {
        return c;
    }
    Bank operator--(int)
    {
        c--;
    }
};
// Exception Handling
double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}
int main()
{
    int c, n;
    do
    {
        cout << "1.Function\n";
        cout << "2. Class & Object\n";
        cout << "3. Inheritance + Constructor Destructor\n";
        cout << "4. Polymorphism\n";
        cout << "5. Template\n";
        cout << "6. Opertor Overloading\n";
        cout << "7. File Handling\n";
        cout << "8. Exception Handling\n";
        cout << "9. Exit\n";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            function();
            break;
        }
        case 2:
        {
            student st;
            st.getdata();
            st.display();
            break;
        }
        case 3:
        {
            Parent P;
            Child Ch;
            break;
        }
        case 4:
        {
            int b, bs, h, r, l;
            float are;
            cout << "\nEnter the Radius of Circle: \n";
            cin >> r;
            are = area(r);
            cout << "\nArea of Circle: " << are << endl;
            cout << "Enter the Base & Hieght of Triangle:\n";
            cin >> bs;
            cin >> h;
            are = area(0.5, b, h);
            cout << "\nArea of Triangle: " << are << endl;
            cout << "\nEnter the Length & Bredth of Rectangle: \n";
            cin >> l >> b;
            are = area(l, b);
            cout << "\nArea of Rectangle: " << are << endl;
            break;
        }
        case 5:
        {
            cout << myMax<int>(3, 7) << endl;
            cout << myMax<double>(3.0, 7.0) << endl;
            cout << myMax<char>('g', 'e') << endl;
            break;
        }
        case 6:
        {
            Bank b;
            cout << "Initial No Of People " << b.get_c() << endl;
            b++;
            b++;
            b++;
            cout << "Present No Of People " << b.get_c() << endl;
            b--;
            b--;
            b--;
            cout << "Present No Of People " << b.get_c() << endl;
            break;
        }
        case 7:
        {
            ofstream MyFile("file.txt");
            MyFile << "Hello, My name is Aditya Bhardwaj.";
            string myText;
            ifstream MyFileRead("file.txt");
            while (getline(MyFileRead, myText))
            {
                cout << myText;
            }
            MyFile.close();
            MyFileRead.close();
            break;
        }
        case 8:
        {
            int x = 50;
            int y = 0;
            double z = 0;
            try
            {
                z = division(x, y);
                cout << z << endl;
            }
            catch (const char *msg)
            {
                cerr << msg << endl;
            }
            break;
        }
        case 9:
        {
            exit(0);
            break;
        }
        }
    } while (c != 9);
    return 0;
}