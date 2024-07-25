﻿#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double averagescore;

public: 
    //Конструктор класса
    Student(const std :: string & name, int age, double averagescore):
        name (name), age (age), averagescore(averagescore){}

    //Getters & Setters
    std::string getname() const { return name; }
    void setname(const std :: string & newname)
    {name = newname;}

    int getage() const { return age; }
    void setage(int newage) 
    { age = newage; }

    double getaveragescore() const { return averagescore; }
    void setaveragescore(double newaveragescore) 
    { averagescore = newaveragescore; }

    //Отобразить информацию студента
    void displayinfo() const {
        std::cout << "NAME: " << name << std::endl;
        std::cout << "AGE: " << age << std::endl;
        std::cout << "SCORE: " << averagescore << std::endl;
    }

    //Успеваемость студента
    std::string evaluareperformance() const {
        if (averagescore > 8.0)
        {
            return "Great";
        }
        else if (averagescore >= 6.0)
        {
            return "Good";
        }
        else
        {
            return "Need to improve grades";
        }
    }
};

int main() {
    //Пример использования класса Student
    Student student1 ("Sasha", 20, 7.5);
    Student student2 ("Kirill", 22, 9.2);
    Student student3("Varya", 19, 5.8);

    //Вывод информации о студентах
    std::cout << "\nstudent (1): \n";
    student1.displayinfo();
    std::cout << "ACHIEVEMENT: " << student1.evaluareperformance() << std::endl;

    std::cout << "\nstudent (2): \n";
    student2.displayinfo();
    std::cout << "ACHIEVEMENT: " << student2.evaluareperformance() << std::endl;

    std::cout << "\nstudent (3): \n";
    student3.displayinfo();
    std::cout << "ACHIEVEMENT: " << student3.evaluareperformance() << std::endl;

    //Изменить информацию о студентах
    student1.setage(19);
    student1.setaveragescore(8.8);

    std::cout << "\nupdated data student (1): \n";
    student1.displayinfo();
    std::cout << "ACHIEVEMENT: " << student1.evaluareperformance() << std::endl;

    return 0;
}



