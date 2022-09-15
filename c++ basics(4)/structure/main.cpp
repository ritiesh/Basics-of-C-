#include <iostream>

using namespace std;
struct Smartphone{
        string name;
        int price;
        int storage;
        string color;
    };
struct Person{
int age;
string name;
Smartphone Smartphone;
};

    void mobilestore(Smartphone smartphone)
    {
    cout<<smartphone.color<<endl;
    cout<<smartphone.name<<endl;
    cout<<smartphone.price<<endl;
    cout<<smartphone.storage<<endl;
    }
    void printperson(Person person)
    {

        cout<<person.age<<endl;
        cout<<person.name<<endl;
        mobilestore(person.Smartphone)
    }

int main()
{
    Smartphone smart1;
    smart1.name="samsung galaxy";
    smart1.price=10000;
    smart1.storage=64;
    smart1.color="green";

    Smartphone smart2;
    smart2.name="IPHONE";
    smart2.price=20000;
    smart2.storage=128;
    smart2.color="yellow";

    //mobilestore(smart1);
    //mobilestore(smart2);

    Person p;
    p.name="rage";
    p.age=40;
    p.Smartphone=smart1;

    printperson(p);



    return 0;
}
