#include<iostream>
class student{
    int roll ;
    char name[10];
    float fees;
    public:
    void accept(void)
{
    cout<<"enter the roll,name and fees of the student/n";
    cin>>roll;
    cin>>name;
    cin>>fees;

}
void display(void)
{
    cout<<"the accepted data is";
    cout<<"\n roll no="<<roll;
cout<<"\n name="<<name;
cout<<"\n fees="<<fees;

}
};
int main()
{
    student s;
    s.accept();
    s.display();
    return 0;
    


