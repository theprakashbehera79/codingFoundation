#include <iostream>
#include <string>
using namespace std;
/* Index 
   1. Variable : A named of memory(RAM) location to store data, which may get change throughout 
      the program execution.
      Source Code 🠖 Compiler/Interpreter 🠖 RAM 🠖 CPU 🠖 Output 
                                             ↳ Stack 🠖 Heap 🠖 BSS Segment 🠖 Data Segment 🠖 Code Segment 
      Data : raw_material, unprocessed & unorganized facts and figures without any context, need to be processe by a computer.
      Types of data :
       > Numeric data (Integers, Real/Floating-point numbers)
       > Textual data (single character, multiple characters/string)
       > Logic data   (true/false)
       > Images
       > Audios
       > Videos
   2. Syntax 
       - Declaration statement 
       - Initialization statement 
   3. Identifier Rules : 
       - Names can contains letters, digits and underscore
       - Names must begin with a letter or an underscore ( _ )
       - Names are case-sensitive ( myVar and MYVAR ) are different variables
       - Names cannot contain whitespaces or special characters like !, #, %, etc , except underscore(_).
       - Reserved keywords can’t be used as an identifiers names .
*/
void syntax_concept(){
    // Syntax : type variableName = Data; 
    int no_target_mission_active = 3;
    // Declaration    : the process of creation variable 
    // Initialization : the process of assign a data/value to a variable 
    float target_mission_north_latitude;      // declaration statment 
    target_mission_north_latitude = 20.2961;  // initialization statement 
}
void variables_example(){
    int total_members_for_mission = 7;
    float target_mission_north_latitude = 20.2961f;
    double target_mission_south_latitude;
    target_mission_south_latitude = 22.99;
    bool is_fuel_available = false;
    char target_point = 'R';
    wchar_t target_accurate_point = 'R';
    string terrorist_name = "ramesh chandra jena";
    cout << terrorist_name << endl;
}
int main(){
    // syntax_concept();
    variables_example();
    return 0;
}