#include <iostream>
#include <vector>

using text = std::string;
using number = int;
using sign = char; 
//typedef std::string text;
//typedef int number;
//typedef char sign;
// instead of typedef you can also use using keyword as used above
//typedef std::vector<std::pair<std::string, int>> pairlist_t;

/*
  [typedef] = reserved keyword used to create an additional name (alias) for another data type.  

                  New identifier for an existing type  
                  Helps with readability and reduces typos  
                  Use when there is a clear benefit  
                  Replaced with 'using' (work better w/ templates) */
 
int main() {
sign krsna = '$';
number age = 34;
text opp = "emiway";

std::cout<<"A young rapper Krsna from delhi also known for his "<<krsna<<" sign. He is a "<<age<<" year old. "<<'\n';
std::cout<<"His rival is "<<opp<<" who is a new gen rapper from mumbai."<<'\n';

    
    return 0;
}