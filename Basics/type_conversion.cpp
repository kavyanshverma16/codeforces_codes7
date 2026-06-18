#include <iostream>

int main() {
    
int x = 3.14;
char y = 98;
double z = (int) 3.14;
std::cout<< x <<'\n';
std::cout<< y <<'\n';
std::cout<< z <<'\n';
 int correct = 8.0001;
double total = 10.0;
double score1 = (int)(correct/total * 100);
//double score = correct/total * 100;
//int score1 = (double)correct/total * 100;
//double score2 = (correct*4) - (total-correct)*1;

std::cout<< score1 <<"%"<<'\n';
//std::cout<< score2 <<'\n';
std::cout<<total<<'\n';

      return 0;
}
