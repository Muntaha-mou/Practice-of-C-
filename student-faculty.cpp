#include<iostream>
using namespace std;
class student
{
    private:
        int studentId;
    protected:
        string name;
    public:
        student(int id,string n)
        {
            studentId=id;
            name=n;
        }
        friend class faculty;

};
class faculty
{
public:
    void display(student s)
    {
        cout<<"Student Id="<<s.studentId<<endl;
        cout<<"Student name="<<s.name<<endl;
    }
};
int main()
{
    student s(245,"Jim");
    faculty f;
    f.display(s);
    return 0;
}
