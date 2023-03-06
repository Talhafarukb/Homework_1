#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

class Student {
private:
    std::string name;
    std::string surname;
    std::string albumNumber;
    std::vector<float> grades;
public:
    Student(){}
    Student(std::string n, std::string s,std::string a, std::vector<float> g){
            name = n;
            surname = s;
            grades = g;
            albumNumber =a;
        }

    //Setter and getter for Name
        void set_name(std::string n){
            name = n;
        }

        std::string get_name(){
            return name;
        }

    //Setter and getter for Surname
        void set_Surname(std::string s){
            surname = s;
        }

        std::string get_Surname(){
            return surname;
        }

    //Setter and getter for album number
        void set_AlbumNumber(std::string a) {
               if (a.length() >= 5 && a.length() <= 6) {
                   albumNumber = a;
               }
               else {
                   std::cout << "Invalid album number" << std::endl;
               }
           }

           std::string get_AlbumNumber(){
               return albumNumber;
           }

    //Setter and getter for Grades
        void set_grades(std::vector<float>g){
               grades = g;
           }
        std::vector<float> get_grades(){
            return grades;
        }



        bool add_grade(float grade){
            if(grade >= 2.0 && grade <= 5.0){
                grades.push_back(grade);
                return true;
            }
            return false;
        }
        bool passedornot(){
            int pass = std::count(grades.begin(),grades.end(),2.0);
            if(pass<=1){
                std::cout<<"Passed"<<std::endl;
            }
            else{
                std::cout<<"Failed"<<std::endl;
            }
            return pass;
        }
        float calculateMeanGrade() const {
               float sum = std::accumulate(grades.begin(), grades.end(), 0.0f);
               return sum / grades.size();
           }
        void DisplaySummary(){

            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Surname:"<<surname<<std::endl;
            std::cout<<"Album Number: "<<albumNumber<<std::endl;
            std::cout<<"Grades: ";
            for(float grade : grades){
                std::cout<<grade<<std::endl;

            }
            std::cout<<"Mean Grade: "<<calculateMeanGrade()<<std::endl;
            std::cout<<"Has passed the semester or not: "<<passedornot() <<std::endl;
        }

    };
int main() {
    Student student("Talha", "Bekar", "00007", {3.0, 4.0, 5.0});

    student.DisplaySummary();
    student.add_grade(2.0);
    student.add_grade(2.0);
    student.DisplaySummary();

    return 0;
}
