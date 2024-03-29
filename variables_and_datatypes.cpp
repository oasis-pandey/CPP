#include <iostream>

int main(){
    // Integers:
    int age = 5;
    int number = 12;
    int roll_number = 13;

    // Printing Integers:
    std::cout << age << '\n';

    // Strings
    std::string name="Oasis ";
    std::string last_name="Pandey";
    // Printing strings:
    std::cout << name <<'\n';
    std::cout << last_name<<'\n';
    std::cout << "Your name is " << name << last_name << "."<< '\n';

    //Boolean 
    bool eat =true;
    bool dance=false;
    //Printing bool
    std::cout << "eat = "<< eat<<'\n'; //1 for true and 0 for false
    std::cout <<"dance = "<<dance<<'\n';

    //Double ( used for points)
    double GPA=3.74;
    //printing doubles
    std::cout <<GPA<<"\n";

    // If you use const then it becomes read only and its value cannot be altered.
    const double PI=3.14159;
    // double PI=100; If you run this , you'll get confilicting declaration error!
    std::cout << PI;
    
    return 0;
}