#include <iostream>
#include <bitset>
using namespace std;

int main() {
   cout << "I can show you 2's complement representation of an integer ^__^ " << endl;
   
   int num;
   while (42) {
      try {
         cout << "Give me a number, or press Ctrl+c to exit: " << endl;
         cin >> num;
         
         // poorly considered overflow protection..
         if (num > 127 or num < -128) {
            throw std::invalid_argument( "overflow! " );;
         }

         // hard coded length of rep cuz bitset requires constent length..
         // feel free to modify this parameter here
         // Suggestion on how to accept user input will be apprecaited 
         bitset<8> rep(num);
         cout << " => " << rep << endl;
      } catch (exception& e) {
         cout << e.what() << endl;
         return 1;
      }
   }

   return 0;
}
