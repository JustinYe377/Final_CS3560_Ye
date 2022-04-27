
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int char_conut = 0;
int char_count_sum = 0;
int line_count = 0;
int line_count_sum = 0;

int countLine(string text);
int countChar(string text);


int countLine(string text){
    return line_count++;
}

int countChar(string text){
    return text.length();
}

int main(int argc, char **argv){
  
    if(argc > 1){
        string filename = argv[1];
        ifstream file;
        file.open(filename);
         string input;

        while(getline(file,input)){          
            char_count_sum += countChar(input);
            countLine(input);
            
        }
        file.close();
        cout << "This file have Line :" << line_count << endl;
        cout << "This file have Char :" << char_count_sum << endl;
        
    }
    else{
        cout << "run function" << endl;
        cout << countLine("Ohio University") << endl;
        cout << countChar("Athens") << endl;
    }
  
}
