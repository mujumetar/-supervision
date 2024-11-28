#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    int roll_no;
    string name;
    float chem_marks;
    float maths_marks;
    float phy_marks;

    float calculate_percentage() {
        return (chem_marks + maths_marks + phy_marks) / 3;
    }
};

int main() {
    Student students[5]; 
    
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        
        cout << "Roll No => ";
        cin >> students[i].roll_no;
        
        cout << "Name => ";
        cin.ignore(); 
        getline(cin, students[i].name);
        
        cout << "Chemistry Marks => ";
        cin >> students[i].chem_marks;
        
        cout << "Mathematics Marks => ";
        cin >> students[i].maths_marks;
        
        cout << "Physics Marks => ";
        cin >> students[i].phy_marks;
    }
    
   
    cout << "\nMark Sheet of Students:\n";
    cout << setw(10) << "Roll No" << setw(20) << "Name" << setw(15) << "Chemistry" 
         << setw(15) << "Mathematics" << setw(15) << "Physics" << setw(15) << "Percentage" << endl;
    
    for (int i = 0; i < 5; i++) {
        float percentage = students[i].calculate_percentage();
        
        cout << setw(10) << students[i].roll_no
             << setw(20) << students[i].name
             << setw(15) << students[i].chem_marks
             << setw(15) << students[i].maths_marks
             << setw(15) << students[i].phy_marks
             << setw(15) << fixed << setprecision(2) << percentage << "%" << endl;
    }
    
    return 0;
}
