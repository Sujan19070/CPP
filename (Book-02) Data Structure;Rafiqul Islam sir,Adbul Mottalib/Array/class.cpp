#include<iostream>
using namespace std;

class StudentRecord:
    def __init__(self, student_id, credits_completed, cgpa):
        self.student_id = student_id
        self.credits_completed = credits_completed
        self.cgpa = cgpa

def main():
    # Initialize an empty list to store student records
    student_records = []

    # Function to input student details
    def input_student_details():
        for i in range(1, 16):
            print(f"Enter details for student {i}:")
            student_id = input("Enter unique ID: ")
            credits_completed = int(input("Enter number of credits completed: "))
            cgpa = float(input("Enter CGPA: "))
            # Create a StudentRecord object and append it to the list
            student_records.append(StudentRecord(student_id, credits_completed, cgpa))
            print("Record added successfully.\n")

    # Function to display all student records
    def display_student_records():
        print("Student Records:")
        for i, student in enumerate(student_records, 1):
            print(f"Student {i}:")
            print(f"  Unique ID: {student.student_id}")
            print(f"  Credits Completed: {student.credits_completed}")
            print(f"  CGPA: {student.cgpa}\n")

    # Main menu loop
    while True:
        print("1. Input Student Details")
        print("2. Display Student Records")
        print("3. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            input_student_details()
        elif choice == "2":
            display_student_records()
        elif choice == "3":
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Please enter a valid option.\n")

if __name__ == "__main__":
    main()
