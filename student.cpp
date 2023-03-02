


//                                              ........saber sabzi project ce 1400 .........
#include "stdio.h"
#include "string"
#include "fstream"
#include "iostream"
#include "stdlib.h"
#include <iomanip>
#include <unistd.h>
#define fopen_s(fp, fmt, mode)  ({\
    *(fp)=fopen( (fmt), (mode));\
    (*(fp) ) ? 0:errno;\
})
// accountName = admin  *******
// accountPass = 1381   *******
using namespace std;
void menu();


FILE* fp;
int main();
int countforstudentfile;
int countforlessonfile;
int countforlessofile;
int countforstudenfile;
// --------------------------------------------------*STUDENT CLASSES*---------------------------------------------------
class Student
{
public:

    string name;
    string family;
    int id;
    int terms;
    void setDetails();
    void getDetails();
    void showinfo_s();
};

// -------------------
class lesson
{
public:
    string lesson;
    int id;
    float marks;
    int lesson_units;
    void setlessons();
    void getlessons();
    void showinfo_l();
};

// -------------------
Student studentArray[100];
lesson lessonsArray[100];

// --------------------------------------------------*FUNCS OF PROJECT*---------------------------------------------------

void Student::setDetails()
{
    int i;
    cout << "*Enter the FIRST NAME : " << endl;
    cin >> name;
    cout << "*Enter the LAST NAME : " << endl;
    cin >> family;
    cout << "*Enter the ID : " << endl;
    cin >> id;
    cout << "*Enter your SEMESTER : " << endl;
    cin >> terms;
}
//  ----------------------------------------

void Student::getDetails()
{
    cout << "**First Name** : " << name <<" , **Last Name** : "<< family <<  " , **Id** : " << id << " , **Semester** : " << terms << endl;
}

//  ----------------------------------------
void Student::showinfo_s()
{



    
            int i = 0;
            cout << "For student " << i + 1 << " :" << endl;
            cout << "**Name** : " << name<<" "<< family << " , **Id** : " << id << " , **Semester** : " << terms << endl;
        



}
//  ----------------------------------------
void lesson::showinfo_l()
{

     
      cout << "For lesson " << " :" << endl;
      cout << " **id** :" << id << " , **Lesson** : " << lesson << " , **Units** : " << lesson_units << " , **Mark** : " << marks << endl;

}
//  ----------------------------------------
void student_info()
{

    int count;
    system("clear");
    cout << "*Enter the count of students* : --- ";
    cin >> count;
    countforstudentfile = count; 
    if (count > 0)
    {

        for (int i = 0; i < count; i++)
        {
            cout << "For student " << i + 1 << " :" << endl;
            studentArray[i].setDetails();
        }


        cout << "\n You have entered information : " << endl;
        for (int i = 0; i < count; i++)
        {
            studentArray[i].getDetails();
        }
    }
    else
    {
        cout << "*Please enter a valid number*." << endl;
    }

    int s;
    cout << "BACK TO MAIN MENU WITH  1 --->>>";
    cin >> s;


    switch (s)
    {

    case 1: menu();

    default: cout << " !! WRONG NUMBER !" << endl; break;

    }


}


// -------------------------------------------------------------------
void  lesson::setlessons()
{

    cout << "*Enter the LESSON : " << endl;
    cin >> lesson;
    cout << "*Enter the stu ID : " << endl;
    cin >> id;
    cout << "*Enter the UNITS : " << endl;
    cin >> lesson_units;
    cout << "*Enter your MARK : " << endl;
    cin >> marks;




}


// -----------------
void lesson::getlessons()
{


    cout << " **id** :" << id << " , **Lesson** : " << lesson << " , **Units** : " << lesson_units << " , **Mark** : " << marks << endl;


}

// --------------------------------------------------------------------

void lesson_info()
{

    system("clear");
    cout << " ***LESSON INFO*** " << endl;
    int count;
    cout << "*Enter the count of lessons* : --- ";
    cin >> count;

    countforlessonfile = count;
    if (count > 0)
    {

        
        for (int i = 0; i < count; i++)
        {
            cout << "For lesson " << i + 1 << " :" << endl;
            lessonsArray[i].setlessons();
        }


        cout << "\n You have entered information : " << endl;
        for (int i = 0; i < count; i++)
        {
            lessonsArray[i].getlessons();
        }
    }
    else
    {
        cout << "*Please enter a valid number*." << endl;
    }



    int s;
    cout << "BACK TO MAIN MENU WITH  1 --->>>";
    cin >> s;


    switch (s)
    {

    case 1: menu();

    default: cout << " !! WRONG NUMBER !" << endl; break;

    }
}

// --------------------------------------------------------------------


// -------------------------
void averagestu()
{
    system("clear");
    cout << " ***CALCULATE SYSTEM*** " << endl;
    cout << "*Enter the count of lessons for getting average* : --- ";
    int x;
    double n, v, i, sum = 0, avg, k = 0;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        cout << "Enter grade then unit : " << endl;
        cin >> n >> v;
        sum += n * v;
        k += v;
    }
    avg = (sum / k);
    cout << "\n You have entered information : " << endl;
    cout << avg << endl;
    int s;
    cout << "BACK TO MAIN MENU WITH  1 --->>>";
    cin >> s;

    switch (s)
    {

    case 1: menu();

    default: cout << " !! WRONG NUMBER !" << endl; break;

    }

}
// -------------------------

void show_info()
{
    system("clear");
    cout << " *** STUDENT INFORMATION ***" << endl;
    int count;
    cout << "*Enter the count of students that you want thier info* : --- ";
    cin >> count;
    countforstudentfile = count; 
    if (count > 0)
    {
        for (int i = 0; i < count; i++)
        {
            studentArray[i].showinfo_s();
        }

    
     for (int i = 0; i < count; i++)
        {
            lessonsArray[i].showinfo_l();
        }

    }
    cout<<"******************************************************************"<<endl;
        int s;
    cout << "BACK TO MAIN MENU WITH  1 --->>>";
    cin >> s;


    switch (s)
    {

    case 1: menu();

    default: cout << " !! WRONG NUMBER !" << endl; break;

    }
}

// -------------------------



// hours, minutes, seconds of timer
int hours = 0;
int minutes = 0;
int seconds = 0;

// function to display the timer
void displayClock()
{
	system("clear");

	cout << setfill(' ') << setw(55) << "10 SECONDS TO SHOW INFO PLEASE WAIT!   *TIMER*	 \n";
	cout << setfill(' ') << setw(55) << " --------------------------\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
	cout << setfill('0') << setw(2) << minutes << " min | ";
	cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
	cout << setfill(' ') << setw(55) << " --------------------------\n";
}

void timer()
{
    for ( int i = 0; i < 1; i++)
    {

	while (true)
    {
        
    
		// display the timer
		displayClock();

		// sleep system call to sleep
		// for 1 second
		sleep(1);


		seconds++;

	
		if (seconds == 10)
        {
			show_info();
		}


        }


    }


}




// -------------------------
void save_info()
{
    system("clear");
    cout << "*** INFO SAVED ***" << endl;

    fopen_s(&fp, "counter.dat", "wb");
    fwrite(&countforstudentfile, sizeof(countforstudentfile), 1, fp);
    fclose(fp);

    fopen_s(&fp, "counter.dat", "wb");
    fwrite(&countforlessonfile, sizeof(countforlessonfile), 1, fp);
    fclose(fp);


    fopen_s(&fp, "Student.dat", "wb");
    if (!fp)
    {
        cout << "There is no file like this";
        exit(0);

    };
    for (int i = 0; i < countforstudentfile; i++)
    {
        fwrite(&studentArray[i], sizeof(studentArray[i]), 1, fp);
    }
    fclose(fp);

    fopen_s(&fp, "lesson.dat", "wb");
    if (!fp)
    {

        cout << "There is no file like this";
        exit(0);

    };
    for (int i = 0; i < countforlessonfile; i++)
    {
        fwrite(&lessonsArray[i], sizeof(lessonsArray[i]), 1, fp);
    }
    fclose(fp);

    int n;
    cout << "BACK TO MAIN MENU WITH  1 --->>>";
    cin >> n;


    switch (n)
    {

    case 1: menu();

    default: cout << " !! WRONG NUMBER !" << endl; break;

    }

}



// -------------------------
void load_info()
{
    system("clear");


    fopen_s(&fp, "counter.dat", "rb");
    fread(&countforstudentfile, sizeof(countforstudentfile), 1, fp);
    fclose(fp);

    fopen_s(&fp, "counter.dat", "rb");
    fread(&countforlessonfile, sizeof(countforlessonfile), 1, fp);
    fclose(fp);


    cout << "*** INFO LOADED ***" << endl;




    fopen_s(&fp, "Student.dat", "rb");
    if (!fp)
    {
        cout << "There is no file like this";
        exit(0);

    };
    for (int i = 0; i < countforstudentfile; i++)
    {
        fread(&studentArray[i], sizeof(studentArray[i]), 1, fp);
    }
    fclose(fp);

    fopen_s(&fp, "lesson.dat", "rb");
    if (!fp)
    {

        cout << "There is no file like this";
        exit(0);

    };
    for (int i = 0; i < countforlessonfile; i++)
    {
        fread(&lessonsArray[i], sizeof(lessonsArray[i]), 1, fp);
    }
    fclose(fp);

    int s;
    cout << "BACK TO MAIN MENU WITH  1 --->>>"<<endl;
    cin >> s;


    switch (s)
    {

    case 1: menu();

    default: cout << " !! WRONG NUMBER !" << endl; break;

    }

}






void menu()
{

    int num;
    system("clear");
    cout << "**********************!WELLCOME TO SYSTEM!**********************  " << endl;

    cout << "* PLEASE CHOOSE A NUMBER TO CONTINUE !                         *" << endl;
    cout << "* 1) *ADD STUDENT INFO                                         *" << endl;
    cout << "* 2) *ADD LESSON INFO                                          *" << endl;
    cout << "* 3) *CALCULATE AVERAGE                                        *" << endl;
    cout << "* 4) *SHOW INFO                                                *" << endl;
    cout << "* 5) *SAVE INOFORMATION                                        *" << endl;
    cout << "* 6) *LOAD INOFORMATION                                        *" << endl;
    cout << "* 7) *INFO OF PROGRAMMER                                       *" << endl;
    cout << "* 8) *EXIT                                                     *" << endl;
    cout << "****************************************************************" << endl;
    while (true)
    {
        cout << "  PLEASE ENTER HERE (1 - 8) ! --->>>    ";
        cin >> num;
        cout << endl;
        switch (num)
        {
        case 1: student_info(); break;
        case 2: lesson_info(); break;
        case 3: averagestu(); break;
        case 4: timer(); break;
        case 5: save_info(); break;
        case 6: load_info(); break;
        case 7: cout << " ************-----saber sabzi 1400 CE faculty, a front-end coder PROFESSOR: MR HORR-----**************" << endl; break;
        case 8: exit(0); break;

        default: cout << " ! WRONG NUMBER TRY AGAIN (1 - 8) !" << endl; break;
        }
    }
    
}
// --------------------------------------------------*MUNU OF PROJECT*---------------------------------------------------
int main()
{
    system("clear");
    int loginAttempt = 0;
    string accountName;
    accountName = "admin";
    string accountPass;
    accountPass = "1381";
    string loginName;
    string loginPassword;


    while (loginAttempt < 3)
    {
    cout << "**** LOGIN PART FOR PROFESSOR ****"<<endl;
    cout << "ENTER LOGIN NAME: ";
    cin >> loginName;
    cout << "ENTER PASSWORD: ";
    cin >> loginPassword;
    if (loginName == accountName && loginPassword == accountPass) 
  {
    menu();
    break;
  }
      else
    {
      cout << "Invalid login attempt. Please try again.\n" << '\n';
      loginAttempt++;
    }
  }
      if (loginAttempt == 3)
    {
      cout << "Too many login attempts! The program will now EXIT.";
      return 0;
    }
}