#include <iostream>
using namespace std;
#include <map>

int main(){

    //create a map
    // map<int,string> student = {
    //     {1,"John"},
    //     {2,"Danny"},
    //     {3,"Tom"},
    //     {4,"Harry"},
    //     {5,"Blake"}
    // };

    map<int,string> student;
    //declare iterator
    map<int,string>::iterator iter = student.begin();

    //add element 
    student[1] = "John";
    student[2] = "Danny";

    student.insert(make_pair(3,"Tom"));
    student.insert(make_pair(4,"Harry"));

    student[5] = "Blake";
    student[5] = "Aaron";

    //find a value present at a particular key in a map
    // iter = student.find(2);
    
    // cout << student.size() << endl;

    // student.clear();

    // cout << student.size() << endl;

    // student.erase(2);

    iter++;
    student.erase(iter);

    student.erase(student.find(2), student.find(4));
    // for(int i = 1; i <= student.size(); i++){
    //     cout << "Student[" << i << "]: " << student[i] << endl;
    // }

    for(iter = student.begin(); iter != student.end(); iter++){
        // cout << iter->first << " - " << iter->second << endl;
        cout << (*iter).first << " - " << (*iter).second << endl;

    }
}







/*
You are given an array of integers. Your task is to find the count of each unique integer in the array and display the result in descending order of the count. Implement a C++ program that solves this problem using the std::map data structure.

int arr[] = {4, 2, 5, 2, 8, 4, 2, 5, 4, 8, 9};
*/



/*
You are given a list of student names and their corresponding scores in an exam. Your task is to determine the top-performing student(s) based on their scores.

    {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78},
        {"David", 92},
        {"Eve", 89}
    };
*/