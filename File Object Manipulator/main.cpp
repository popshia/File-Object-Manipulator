// 10627130 資工二甲 林冠良 & 10627131 資工二甲 李峻瑋
#include <iostream> // cout, endl
#include <fstream> // open, is_open, close, ignore
#include <string> // string, find_last_of, substr
#include <vector> // vector, push_back

using namespace std ;

static int FileN = 0 ;


struct DataBase {
    string uselessData = "\0" ;
    int schoolNum = 0 ;
    int departmentNum = 0 ;
    int student = 0 ;
    int graduated = 0 ;
    string wholeSentence = "\0" ;
} ;

class FunctionNVarieblesArea {
    vector<DataBase> dataBase ;
    string uselessShit = "\0" ;
    char slashN = '\0' ;
    
public:
    
    void ReadNCopy() {
        getline( cin, uselessShit ) ;
        cin.get( slashN ) ;
        getline( cin, uselessShit ) ;
        cin.get( slashN ) ;
        getline( cin, uselessShit ) ;
        cin.get( slashN ) ;
        
        for ( int i = 0 ; ! cin.eof() ; i ++ ) {
            getline( cin, dataBase[i].wholeSentence ) ;
            cin.get( slashN ) ;
        } // input the data to dataBase
        
        if ( FileN == 204 ) {
            fopen( "copy204.txt", "w" ) ;
            for ( int i = 0 ; i < dataBase.size(); i ++ ) cout << dataBase[i].wholeSentence << endl ;
        } // copy to the new "copy204.txt" file
        
        else if ( FileN == 205 ) {
            fopen( "copy205.txt", "w" ) ;
            for ( int i = 0 ; i < dataBase.size(); i ++ ) cout << dataBase[i].wholeSentence << endl ;
        } // copy to the new "copy205.txt" file
    } // ReadNCopy()
    
} ;

int main() {
    int command = -1 ;
    bool continueOrNot = false ;
    bool work = false ;
    FunctionNVarieblesArea Class ;
    
    do {
        cout << "*****************************************" << endl ; // welcome message
        cout << "*****    File Object Manipulator    *****" << endl ;
        cout << "***** 0 : Quit                      *****" << endl ;
        cout << "***** 1 : Read, count and copy      *****" << endl ;
        cout << "***** 2 : Filter and update         *****" << endl ;
        cout << "***** 3 : Merge two files           *****" << endl ;
        cout << "*****************************************" << endl ;
        cout << endl << "Please enter your choice :" << endl ;
        
        cin >> command ; // read in user command
        
        if ( command == 0 ) { // bye :(((
            cout << "Bye :(((" << endl ;
            return 0 ;
        } // quit
        
        if ( command > 3 || command < 0 ) {
            cout << "Error command! please enter an acceptable command :" << endl << endl ;
            continueOrNot = true ;
        } // wrong command

        if ( command == 1 ) { // read, count and copy
            bool function1Confirm = false ;
            
            do {
                cout << "Please enter the file  ( 201 - 205 ) you want to read and copy or [0] to quit:" << endl ;
                cin >> FileN ;
            
                if ( FileN == 0 ) {
                    function1Confirm = true ;
                    continueOrNot = true ;
                } // quit
                
                else if ( FileN != 201 && FileN != 202 && FileN != 203 && FileN != 204 && FileN != 205 )
                    cout << "*****  input" << FileN << ".txt does not exist!  *****" << endl ;
            
                else if ( FileN == 201 ) {
                    fopen( "input201.txt", "r" ) ;
                    function1Confirm = true ;
                    Class.ReadNCopy() ;
                    work = true ;
                } // 204
            
                else if ( FileN == 202 ) {
                    fopen( "input202.txt", "r" ) ;
                    function1Confirm = true ;
                    Class.ReadNCopy() ;
                    work = true ;
                } // 204
            
                else if ( FileN == 203 ) {
                    fopen( "input203.txt", "r" ) ;
                    function1Confirm = true ;
                    Class.ReadNCopy() ;
                    work = true ;
                } // 204
            
                else if ( FileN == 204 ) {
                    fopen( "input204.txt", "r" ) ;
                    function1Confirm = true ;
                    Class.ReadNCopy() ;
                    work = true ;
                } // 204
            
                else if ( FileN == 205 ) {
                    fopen( "input205.txt", "r" ) ;
                    function1Confirm = true ;
                    Class.ReadNCopy() ;
                    work = true ;
                } // 205
            } while( ! function1Confirm ) ;
            
        } // mission 1
        
        if ( command == 2 ) {
            cout << "Please enter the file ( 201 - 205 ) you want to filter or [0] to quit:" << endl ;
            cin >> FileN ;
            
            while ( FileN != 201 && FileN != 202 && FileN != 203 && FileN != 204 && FileN != 205 && FileN != 0 ) {
                cout << "*****  copy" << FileN << ".txt does not exist!  *****" << endl ;
                cin >> FileN ;
            } // wrong filename
            
            if ( FileN == 0 ) continueOrNot = true ;
            
            else if ( FileN == 201 ) {
                if ( fopen( "copy201.txt", "r+" ) == NULL ) cout << "*****  copy201.txt does not exist!  *****" << endl ;
            } // test if you have already create a copy file
            
            else if ( FileN == 202 ) {
                if ( fopen( "copy202.txt", "r+" ) == NULL ) cout << "*****  copy202.txt does not exist!  *****" << endl ;
            } // test if you have already create a copy file
            
            else if ( FileN == 203 ) {
                if ( fopen( "copy203.txt", "r+" ) == NULL ) cout << "*****  copy203.txt does not exist!  *****" << endl ;
            } // test if you have already create a copy file
            
            else if ( FileN == 204 ) {
                if ( fopen( "copy204.txt", "r+" ) == NULL ) cout << "*****  copy204.txt does not exist!  *****" << endl ;
            } // test if you have already create a copy file
            
            else if ( FileN == 205 ) {
                if ( fopen( "copy205.txt", "r+" ) == NULL ) cout << "*****  copy205.txt does not exist!  *****" << endl ;
            } // test if you have already create a copy file
            
            // FunctionNVarieblesArea.Filter() ;
        } // mission 2
        
        if ( command == 3 ) {
            int firstFile = 0 ;
            int secondFile = 0 ;
            bool firstOpen = false ;
            
            while ( ! firstOpen ) {
                cout << "Please enter the first file ( 201 - 205 ) that you want to merge or [0] to quit:" << endl ;
                cin >> firstFile ;
                
                if ( firstFile == 0 ) continueOrNot = true ;
                
                else if ( firstFile != 201 && firstFile != 202 && firstFile != 203 && firstFile != 204 && firstFile != 205 )
                    cout << "*****  copy" << firstFile << ".txt does not exist!  *****" << endl ;
                
                else if ( firstFile == 201 ) {
                    if ( fopen( "copy201.txt", "r" ) == NULL ) cout << "*****  copy201.txt does not exist!  *****" << endl ;
                    else firstOpen = true ;
                } // 201
                
                else if ( firstFile == 202 ) {
                    if ( fopen( "copy202.txt", "r" ) == NULL ) cout << "*****  copy202.txt does not exist!  *****" << endl ;
                    else firstOpen = true ;
                } // 202
                
                else if ( firstFile == 203 ) {
                    if ( fopen( "copy203.txt", "r" ) == NULL ) cout << "*****  copy203.txt does not exist!  *****" << endl ;
                    else firstOpen = true ;
                } // 203
                
                else if ( firstFile == 204 ) {
                    if ( fopen( "copy204.txt", "r" ) == NULL ) cout << "*****  copy204.txt does not exist!  *****" << endl ;
                    else firstOpen = true ;
                } // 204
                
                else if ( firstFile == 205 ) {
                    if ( fopen( "copy205.txt", "r" ) == NULL ) cout << "*****  copy205.txt does not exist!  *****" << endl ;
                    else firstOpen = true ;
                } // 205
                
                cout << "Please enter the second file ( 201 - 205 ) that you want to merge or [0] to quit:" << endl ;
                cin >> secondFile ;
                        
                while ( secondFile != 201 && secondFile != 202 && secondFile != 203 && secondFile != 204 && secondFile != 205 && secondFile != 0 ) {
                    cout << "*****  copy" << secondFile << ".txt does not exist!  *****" << endl ;
                    cin >> secondFile ;
                } // wrong filename
                        
                if ( secondFile == 0 ) continueOrNot = true ;
                        
                // else ( secondFile == 201 || secondFile == 202 || secondFile == 203 || secondFile == 204 || secondFile == 205 ) FunctionNVarieblesArea.Merge( firstFile, secondFile ) ;
            } // if the first input is acceptable
        } // mission 3
        
    } while( continueOrNot ) ;
} // main()
