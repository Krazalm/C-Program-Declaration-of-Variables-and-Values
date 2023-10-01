#include <iostream>
#include <string>

using namespace std;

void monday() {
    system("Color 0A");
    cout << "_____________________________________________________________________________" << endl;
    cout << "| Day           | Time                | Class         | Room | Professor    |" << endl;
    cout << "| Monday        |--------------------|---------------|------|---------------|" << endl;
    cout << "|               | 8:00 AM - 9:00 AM  | Math Class    | 101  | Dr. Smith     |" << endl;
    cout << "|               | 9:00 AM - 10:00 AM | Science Class | 102  | Dr. Johnson   |" << endl;
    cout << "|               | 10:00 AM - 11:00 AM| English Class | 103  | Prof. Lee     |" << endl;
    cout << "|               | 11:00 AM - 12:00 PM| Lunch Break   |      |               |" << endl;
    cout << "|               | 12:00 PM - 1:00 PM | History Class | 104  | Prof. Davis   |" << endl;
    cout << "|               | 1:00 PM - 2:00 PM  | Art Class     |  105 | Prof. Kim     |" << endl;
    cout << "|               | 2:00 PM - 3:00 PM  | Music Class   | 106  | Dr. Rodriguez |" << endl;
    cout << "______________________________________________________________________" << endl;
}

void tuesday() {
    cout << "_____________________________________________________________________________" << endl;
    cout << "| Day           | Time                | Class         | Room | Professor    |" << endl;
    cout << "| Tuesday       |--------------------|---------------|------|---------------|" << endl;
    cout << "|               | 8:00 AM - 9:00 AM  | Science Class | 102  | Dr. Johnson   |" << endl;
    cout << "|               | 9:00 AM - 10:00 AM | Math Class    | 101  | Dr. Smith     |" << endl;
    cout << "|               | 10:00 AM - 11:00 AM| History Class | 104  | Prof. Davis   |" << endl;
    cout << "|               | 11:00 AM - 12:00 PM| Lunch Break   |      |               |" << endl;
    cout << "|               | 12:00 PM - 1:00 PM | English Class | 103  | Prof. Lee     |" << endl;
    cout << "|               | 1:00 PM - 2:00 PM  | Music Class   | 106  | Dr. Rodriguez |" << endl;
    cout << "|               | 2:00 PM - 3:00 PM  | Art Class     | 105  | Prof. Kim     |" << endl;
    cout << "_____________________________________________________________________________" << endl;
}

void wednesday() {
    cout << "_____________________________________________________________________________" << endl;
    cout << "| Day           | Time                | Class         | Room | Professor    |" << endl;
    cout << "| Wednesday     |--------------------|---------------|------|---------------|" << endl;
    cout << "|               | 8:00 AM - 9:00 AM  | English Class | 103  | Prof. Lee     |" << endl;
    cout << "|               | 9:00 AM - 10:00 AM | Science Class | 102  | Dr. Johnson   |" << endl;
    cout << "|               | 10:00 AM - 11:00 AM| Math Class    | 101  | Dr. Smith     |" << endl;
    cout << "|               | 11:00 AM - 12:00 PM| Lunch Break   |      |               |" << endl;
    cout << "|               | 12:00 PM - 1:00 PM | Music Class   | 106  | Dr. Rodriguez |" << endl;
    cout << "|               | 1:00 PM - 2:00 PM  | Art Class     | 105  | Prof. Kim     |" << endl;
    cout << "|               | 2:00 PM - 3:00 PM  | History Class | 104  | Prof. Davis   |" << endl;
    cout << "_____________________________________________________________________________" << endl;
}

void thursday() {
    cout << "_____________________________________________________________________________" << endl;
    cout << "| Day           | Time                | Class         | Room | Professor    |" << endl;
    cout << "| Thursday      |--------------------|---------------|------|---------------|" << endl;
    cout << "|               | 8:00 AM - 9:00 AM  | Art Class     | 105  | Prof. Kim     |" << endl;
    cout << "|               | 9:00 AM - 10:00 AM | English Class | 103  | Prof. Lee     |" << endl;
    cout << "|               | 10:00 AM - 11:00 AM| Science Class | 102  | Dr. Johnson   |" << endl;
    cout << "|               | 11:00 AM - 12:00 PM| Lunch Break   |      |               |" << endl;
    cout << "|               | 12:00 PM - 1:00 PM | Math Class    | 101  | Dr. Smith     |" << endl;
    cout << "|               | 1:00 PM - 2:00 PM  | History Class | 104  | Prof. Davis   |" << endl;
    cout << "|               | 2:00 PM - 3:00 PM  | Music Class   | 106  | Dr. Rodriguez |" << endl;
    cout << "_____________________________________________________________________________" << endl;
}

void friday() {
    cout << "_____________________________________________________________________________" << endl;
    cout << "| Day           | Time                | Class         | Room | Professor    |" << endl;
    cout << "| Friday        |--------------------|---------------|------|---------------|" << endl;
    cout << "|               | 8:00 AM - 9:00 AM  | History Class | 104  | Prof. Davis   |" << endl;
    cout << "|               | 9:00 AM - 10:00 AM | Art Class     | 105  | Prof. Kim     |" << endl;
    cout << "|               | 10:00 AM - 11:00 AM| English Class | 103  | Prof. Lee     |" << endl;
    cout << "|               | 11:00 AM - 12:00 PM| Lunch Break   |      |               |" << endl;
    cout << "|               | 12:00 PM - 1:00 PM | Science Class | 102  | Dr. Johnson   |" << endl;
    cout << "|               | 1:00 PM - 2:00 PM  | Math Class    | 101  | Dr. Smith     |" << endl;
    cout << "|               | 2:00 PM - 3:00 PM  | Music Class   | 106  | Dr. Rodriguez |" << endl;
    cout << "_____________________________________________________________________________" << endl;
}

void display() {
    string day, result;
    cout << "Enter a day (Monday to Friday): ";
    cin >> day;

    if (day == "Monday" || day == "monday" || day == "Lunes" || day == "lunes") {
        monday();
    }
    else if (day == "Tuesday" || day == "tuesday" || day == "Martes" || day == "martes") {
        tuesday();
    }
    else if (day == "Wednesday" || day == "wednesday" || day == "Miercoles" || day == "miercoles" || day == "Miércoles" || day == "miércoles") {
        wednesday();
    }
    else if (day == "Thursday" || day == "thursday" || day == "Huwebes" || day == "huwebes") {
        thursday();
    }
    else if (day == "Friday" || day == "friday" || day == "Biyernes" || day == "biyernes") {
        friday();
    }
    else if (day == "Lun-Vie" || day == "lun-vie" || day == "Mon-Fri" || day == "mon-fri") {
        monday();
        tuesday();
        wednesday();
        thursday();
        friday();
    }
    else if (day == "Mar-Vie" || day == "mar-vie" || day == "Tue-Fri" || day == "tue-fri") {
        tuesday();
        wednesday();
        thursday();
        friday();
    }
    else if (day == "Mie-Vie" || day == "mie-vie" || day == "Wed-Fri" || day == "wed-fri") {
        wednesday();
        thursday();
        friday();
    }
    else if (day == "Huw-Vie" || day == "huw-vie" || day == "Thu-Fri" || day == "thu-fri") {
        thursday();
        friday();
    }
    else if (day == "Biy-Vie" || day == "biy-vie" || day == "Fri" || day == "fri") {
        friday();
    }
    else {
        cout << "Invalid day entered." << endl;
        return;
    }

    // Display additional information
    cout << "*****************************************" << endl;
    cout << "Far Eastern University Scheduling System" << endl;
    cout << "*****************************************" << endl;
}



int main() {
    string firstName, lastName;
    int birthYear, currentYear = 2023;
    int age;
    char rescheduleChoice;

    do {
        cout << "Enter your first name: ";
        cin >> firstName;

        cout << "Enter your last name: ";
        cin >> lastName;

        cout << "Enter your birth year: ";
        cin >> birthYear;

        age = currentYear - birthYear;

        cout << "Hello " << firstName << " " << lastName << ", your age is " << age << "." << endl;

        do {
            display();

            cout << "Do you want to reschedule? (y/n): ";
            cin >> rescheduleChoice;

            
            rescheduleChoice = tolower(rescheduleChoice);
        } while (rescheduleChoice == 'y');

        cout << "Do you want to start again? (y/n): ";
        cin >> rescheduleChoice;

      
        rescheduleChoice = tolower(rescheduleChoice);

    } while (rescheduleChoice == 'y');

    cout << "Goodbye! Have a great day." << endl;

    return 0;
}
