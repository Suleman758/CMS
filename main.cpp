#include <iostream>
using namespace std;

void enrollCourse() {
    char courses[5] = {'A', 'B', 'C', 'D', 'E'};

    cout << "Available Courses:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". Course " << courses[i] << endl;
    }

    char enrolledCourses[5];
    int count = 0;
    int choice;
    char more;

    do {
        cout << "Enter the course number you want to enroll in (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            enrolledCourses[count++] = courses[choice - 1];
            cout << "Enrolled in Course " << courses[choice - 1] << endl;
        } else {
            cout << "Invalid choice. Please select a valid course number." << endl;
        }

        cout << "Do you want to enroll in another course? (y/n): ";
        cin >> more;
    } while ((more == 'y' || more == 'Y') && count < 5);

    cout << "You have enrolled in the following courses: ";
    for (int i = 0; i < count; i++) {
        cout << enrolledCourses[i] << " ";
    }
    cout << endl;
}

void attendanceManagement() {
    int students;
    cout << "Enter the number of students: ";
    cin >> students;

    string names[students];
    char attendance[students];

    // Input student names and attendance
    for (int i = 0; i < students; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Mark attendance for " << names[i] << " (P/A): ";
        cin >> attendance[i];
    }

    // Display attendance record
    cout << "\nAttendance Record:\n";
    for (int i = 0; i < students; i++) {
        cout << names[i] << " - " << (attendance[i] == 'P' || attendance[i] == 'p' ? "Present" : "Absent") << endl;
    }
}

void timetableScheduling() {
    string days[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    char courses[5] = {'A', 'B', 'C', 'D', 'E'};

    cout << "\nTimetable:\n";
    for (int i = 0; i < 5; i++) {
        cout << days[i] << ": ";
        for (int j = 0; j < 5; j++) {
            cout << courses[j] << " ";
        }
        cout << endl;
    }
}

void feeManagement() {
    const int totalFee = 300000;
    int option;
    cout << "\nFee Management:\n";
    cout << "1. Pay Online\n";
    cout << "2. Generate Fee Challan\n";
    cout << "Choose an option (1-2): ";
    cin >> option;

    if (option == 1) {
        int installment;
        cout << "Choose installment plan:\n";
        cout << "1. Single Payment - PKR " << totalFee << "\n";
        cout << "2. 3 Installments - PKR " << totalFee / 3 << " each\n";
        cout << "Enter your choice (1-2): ";
        cin >> installment;

        if (installment == 1) {
            cout << "You selected Single Payment. Payment successful!\n";
        } else if (installment == 2) {
            cout << "You selected 3 Installments. First payment successful!\n";
        } else {
            cout << "Invalid installment choice!\n";
        }
    } else if (option == 2) {
        cout << "Fee Challan Generated! Print and pay at the bank.\n";
    } else {
        cout << "Invalid option. Try again.\n";
    }
}

void gradeManagement() {
    cout << "\nGrade Management: " << endl;
    cout << "Passing Criteria: 50%" << endl;
    cout << "Grade Distribution:" << endl;
    cout << "A: 85-100%" << endl;
    cout << "B: 70-84%" << endl;
    cout << "C: 55-69%" << endl;
    cout << "D: 50-54%" << endl;
    cout << "F: Below 50%" << endl;
}

void hostelManagement() {
    const int maxRooms = 100;
    const int hostelFee = 150000;
    int availableRooms = maxRooms;

    cout << "\nHostel Management:\n";
    cout << "Hostel Charges per Semester: PKR " << hostelFee << endl;

    cout << "Available Rooms: " << availableRooms << endl;

    int payment;
    cout << "Enter payment amount (PKR " << hostelFee << "): ";
    cin >> payment;

    if (payment == hostelFee) {
        cout << "Payment successful! "<< endl;
        cout << "Choose your floor (1-5): ";
        int floor;
        cin >> floor;

        cout << "Choose your room (1-" << maxRooms / 5 << "): ";
        int room;
        cin >> room;

        if (room > 0 && room <= maxRooms / 5) {
            availableRooms--;
            cout << "Room " << room << " on Floor " << floor << " allotted successfully! " << endl;
        } else {
            cout << "Invalid room selection! " << endl;
        }
    }
    else {
        cout << "Payment failed. Please pay the required amount. " << endl;
    }
}

void libraryManagement() {
    const int totalBooks = 1500;
    const int totalRooms = 5;
    int availableRooms = totalRooms;

    cout << "\nLibrary Management:\n";
    cout << "Library Timings: 8:00 AM - 8:00 PM\n";
    cout << "Total Books Available: " << totalBooks << endl;

    cout << "1. Issue Book\n";
    cout << "2. Reserve Room for Group Discussion\n";
    cout << "Enter your choice (1-2): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        string bookName;
        cout << "Enter the book name: ";
        cin.ignore();
        getline(cin, bookName);
        cout << "Book '" << bookName << "' issued successfully!\n";
    } else if (choice == 2) {
        if (availableRooms > 0) {
            cout << "Room " << totalRooms - availableRooms + 1 << " reserved successfully for group discussion!\n";
            availableRooms--;
        } else {
            cout << "No rooms available for reservation!\n";
        }
    } else {
        cout << "Invalid choice!\n";
    }
}

void gymManagement() {
    const int gymFee = 5000;
    cout << "\nGym Management:\n";
    cout << "Monthly Fee: PKR " << gymFee << endl;
    cout << "Gym Timings: " << endl;
    cout << "Male: 6:00 AM - 10:00 AM" << endl;
    cout << "Female: 10:00 AM - 3:00 PM" << endl;
    cout << "Co-Ed: 4:00 PM - 10:00 PM" << endl;

    cout << "Do you want to subscribe to gym membership? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int payment;
        cout << "Enter payment amount (PKR " << gymFee << "): ";
        cin >> payment;

        if (payment == gymFee) {
            cout << "Payment successful! Gym membership activated." << endl;
        } else {
            cout << "Payment failed. Please pay the required amount." << endl;
        }
    } else {
        cout << "Gym membership not activated." << endl;
    }
}

void withdrawCourse() {
    string courses[5] = {"A", "B", "C", "D", "E"};
    string enrolledCourses[5];
    int count = 0;
    int choice;
    char more;

    cout << "You are currently enrolled in the following courses:" << endl;
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". Course " << enrolledCourses[i] << endl;
    }

    do {
        cout << "Enter the course number you want to withdraw from (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= count) {
            cout << "Withdrawn from Course " << enrolledCourses[choice - 1] << endl;
            for (int j = choice - 1; j < count - 1; j++) {
                enrolledCourses[j] = enrolledCourses[j + 1];
            }
            count--;
        } else {
            cout << "Invalid choice. Please select a valid course number." << endl;
        }

        cout << "Do you want to withdraw from another course? (y/n): ";
        cin >> more;
    } while ((more == 'y' || more == 'Y') && count > 0);

    cout << "Remaining enrolled courses: ";
    for (int i = 0; i < count; i++) {
        cout << enrolledCourses[i] << " ";
    }
    cout << endl;
}

void carPooling(){
    string studentName;
    cout << "\nCar Pooling Management:" << endl;
    cout << "Enter student name: ";
    cin >> studentName;
    cout << "Parking slot reserved for " << studentName << ". Green sticker generated! " << endl;
}

void societies() {
    string societyList[5] = {"Drama Society", "Music Club", "Debate Society", "Art Club", "Sports Society"};
    int choice;

    cout << "\nAvailable Societies:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << societyList[i] << endl;
    }

    cout << "Enter the number of the society you want to join (1-5): ";
    cin >> choice;

    if (choice >= 1 && choice <= 5) {
        cout << "You have joined " << societyList[choice - 1] << "!" << endl;
    } else {
        cout << "Invalid choice. Please select a valid society number." << endl;
    }
}

void eportal() {
    int choice;
    cout << "1.Harrasement report " << endl;
    cout << "2.Drug report " << endl;
    cout << "3.Cafe report " << endl;
    cout << "Enter your choice (1-3) :" << endl;
    cin >> choice;

    string hr,dr,cr;

    if (choice == 1) {
        cout << "Enter harassement report "<< endl;
        cin.ignore();
        getline(cin, hr);
        cout << "Harassement Report generated successfully " << endl;
    }
    else if (choice == 2) {
        cout << "Enter drug report " << endl;
        cin.ignore();
        getline(cin, dr);
        cout << "Drug Report generated successfully " << endl;
    } else if (choice == 3) {
        cout << "Enter cafe report " << endl;
        cin.ignore();
        getline(cin, cr);
        cout << "Cafe Report generated successfully " << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

}

void scholarship(){
    double gpa;
    char grades[5];
    int eligibleGrades = 0;

    cout << "Enter your GPA: ";
    cin >> gpa;

    cout << "Enter grades for 5 subjects (A/B/C/D/F): ";
    for (int i = 0; i < 5; i++) {
        cin >> grades[i];
        if (grades[i] == 'A' || grades[i] == 'B') {
            eligibleGrades++;
        }
    }

    if (gpa >= 3.5 && eligibleGrades == 5) {
        cout << "Congratulations! You are eligible for a scholarship." << endl;
    } else {
        cout << "Sorry, you do not meet the scholarship criteria." << endl;
    }
}

void seatingPlan() {
    const int rows = 5;
    const int cols = 5;
    string seating[rows][cols] = {""};
    int totalSeats = rows * cols;
    int assignedSeats = 0;

    cout << "\nClass Seating Plan Management:\n";

    while (true) {
        int choice;
        cout << "\nMenu:\n";
        cout << "1. Assign Seat to a Student\n";
        cout << "2. View Seating Plan\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (assignedSeats >= totalSeats) {
                cout << "All seats are occupied. Cannot assign more seats.\n";
                continue;
            }

            string name;
            int row, col;
            cout << "Enter student's name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter row number (1-" << rows << "): ";
            cin >> row;
            cout << "Enter column number (1-" << cols << "): ";
            cin >> col;

            if (row >= 1 && row <= rows && col >= 1 && col <= cols) {
                if (seating[row - 1][col - 1].empty()) {
                    seating[row - 1][col - 1] = name;
                    assignedSeats++;
                    cout << "Seat assigned to " << name << " at (" << row << ", " << col << ").\n";
                } else {
                    cout << "Seat (" << row << ", " << col << ") is already occupied by " << seating[row - 1][col - 1] << ".\n";
                }
            } else {
                cout << "Invalid row or column. Please try again.\n";
            }
        } else if (choice == 2) {
            cout << "\nCurrent Seating Plan:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (seating[i][j].empty()) {
                        cout << "[Empty]\t";
                    } else {
                        cout << "[" << seating[i][j] << "]\t";
                    }
                }
                cout << endl;
            }
        } else if (choice == 3) {
            cout << "Exiting seating plan management. " << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again. " << endl;
        }
    }
}

void healthInsurance() {
    const int insuranceCostBasic = 10000;
    const int insuranceCostPremium = 20000;

    cout << "\nHealth Insurance Management: " << endl;
    cout << "Available Health Insurance Plans: "<< endl;
    cout << "1. Basic Plan - PKR " << insuranceCostBasic << " per year " << endl;
    cout << "   Coverage: General Checkups, Emergency Services "<< endl;
    cout << "2. Premium Plan - PKR " << insuranceCostPremium << " per year "<< endl;
    cout << "   Coverage: General Checkups, Emergency Services, Specialist Consultations, Comprehensive Coverage "<< endl;

    int choice;
    cout << "Select a plan (1 for Basic, 2 for Premium): ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        int payment;
        int planCost = (choice == 1) ? insuranceCostBasic : insuranceCostPremium;
        string planType = (choice == 1) ? "Basic Plan" : "Premium Plan";

        cout << "You selected the " << planType << ". "<< endl;
        cout << "Please enter the payment amount (PKR " << planCost << "): ";
        cin >> payment;

        if (payment == planCost) {
            cout << "Payment successful! You are now enrolled in the " << planType << ". "<< endl;
        } else {
            cout << "Payment failed. Please pay the exact amount to enroll in the plan. "<< endl;
        }
    } else {
        cout << "Invalid selection. Please try again. "<< endl;
    }
}


void menu() {
    int choice;
    do {
        cout << "\nMenu Options:" << endl;
        cout << "1. Enroll in Course" << endl;
        cout << "2. Attendance Management" << endl;
        cout << "3. Timetable Scheduling" << endl;
        cout << "4. Fee Management" << endl;
        cout << "5. Exam and Grade Management" << endl;
        cout << "6. Hostel Management" << endl;
        cout << "7. Library Management" << endl;
        cout << "8. Gym membership" << endl;
        cout << "9. Withdraw course" << endl;
        cout << "10. Car pooling" << endl;
        cout << "11. Join society"<< endl;
        cout << "12. E-portal" << endl;
        cout << "13. Scholarship application" << endl;
        cout << "14. Seating plan " << endl;
        cout << "15. Health insurance " << endl;

        cout << "Enter your choice (1-15): ";
        cin >> choice;

        switch (choice) {
            case 1:
                enrollCourse();
            break;
            case 2:
                 attendanceManagement();
            break;
            case 3:
                timetableScheduling();
            break;
            case 4:
                feeManagement();
            break;
            case 5:
                gradeManagement();
            break;
            case 6:
                hostelManagement();
            break;
            case 7:
                libraryManagement();
            break;
            case 8:
                gymManagement();
            break;
            case 9:
                withdrawCourse();
            break;
            case 10:
                carPooling();
            break;
            case 11:
                societies();
            break;
            case 12:
                eportal();
            break;
            case 13:
                scholarship();
            break;
            case 14:
                seatingPlan();
            break;
            case 15:
                healthInsurance();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 16);
}

void loginpage() {
    string correctusername = "Bnu";
    string correctpassword = "Bnu";

    string username, password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    if (username == correctusername && password == correctpassword) {
            cout << "Welcome " << endl;
            menu();
    }
    else {
        cout << "You entered an invalid username or password." << endl;
    }
}

int main() {
    cout << "WELCOME" << endl;
    loginpage();

    return 0;
}
