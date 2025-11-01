// Write a program to demonstrate the multiple inheritances.

#include <iostream>
using namespace std;
class student
{
protected:
int rno, m1, m2;

public:
   void get()
{
cout << "Enter the Roll no: ";
cin >> rno;
cout << "Enter the two marks: ";
cin >> m1 >> m2;
}
};
class sports
{
protected:
int sm; // sm = Sports mark
public:
void getsm()
{
cout << "Enter the sports mark: ";
cin >> sm;
}
};
class statement : public student, public sports
{
int tot;
float avg;

public:
void display()
{
tot = m1 + m2 + sm;
avg = tot / 3.0; // use float division
cout << "\n--- Student Report ---\n";
cout << "Roll No : " << rno << endl;
cout << "Total : " << tot << endl;
cout << "Average : " << avg << endl;
}
};
int main()
{
statement obj;
obj.get(); // input for academic marks
obj.getsm(); // input for sports marks
obj.display(); // display total and average
return 0;
}