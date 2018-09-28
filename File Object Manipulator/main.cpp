// 10627130 資工二甲 林冠良 & 10627131 資工二甲 李峻瑋
#include <iostream> // cout, endl
#include <fstream> // open, is_open, close, ignore
#include <string> // string, find_last_of, substr
#include <vector> // vector, push_back

using namespace std ;

typedef struct DataBase {
    string uselessData ;
    int schoolNum ;
    int departmentNum ;
    int student ;
    int graduated ;
} datatype ;

class FunctionNVarieblesArea {
    
} ;

int main() {
    int command = 0 ;
    char continueOrNot = '\0' ;
    cout << "*****************************************" << endl ; // welcome message
    cout << "*****    File Object Manipulator    *****" << endl ;
    cout << "***** 0 : Quit                      *****" << endl ;
    cout << "***** 1 : Read, count and copy      *****" << endl ;
    cout << "***** 2 : Filter and update         *****" << endl ;
    cout << "***** 3 : Merge two files           *****" << endl ;
    cout << "*****************************************" << endl ;
    
    do {
        cout << endl << "Please enter your choice :" << endl ;
        cin >> command ; // read in user command
        
        while ( command > 3 || command < 0 ) { //wrong command situation
            cout << "Error command! please enter an acceptable command :" << endl ;
            cin >> command ;
        } // while()
        
        if ( command == 0 ) { // bye :(((
            cout << "Bye :(((" << endl ;
            return 0 ;
        } // if()
        
        if ( command == 1 ) { // read, count and copy
            cout << "Please enter the file you want to read and copy: ( 204 or 205 )" << endl ;
            int fileN = 0 ;
            cin >> fileN ;
            while ( fileN != 204 && fileN != 205 ) {
                cout << "Wrong file name! Please try again:" << endl ;
                cin >> fileN ;
            }
            if ( fileN == 204 ) fopen( "input204.txt", "r+" ) ;
            if ( fileN == 205 ) fopen( "input205.txt", "r+" ) ;
        }
    } while( continueOrNot == 'Y' || continueOrNot == 'y' ) ;
} // main()
