#include <iostream>
#include <map>
#include <cmath>
#include <string.h>

using namespace std;

using std::string;
using std::map;

// int main()
// {
//     int i;
//     for(i = 0;i < 10 ;i++)
//        cout << "Alexandra"<<endl;
// }

//================================================================

// int sum(int first_param,int second_param)
// {
//     int result = first_param + second_param;
//     return result;
// }

// int main()
// {
//     int first_number;
//     int second_number;

//     cout << "Input first number:";
//     cin >> first_number;
//     cout << "Input second number:";
//     cin >> second_number;
    
//     int sum_result = sum(first_number,second_number); 
                                                                                         
//     cout << "The sum between "<< first_number << " and " << second_number << " is " << to_string(sum_result) ;

// }

//=========================================================================


// void questions(map<string, int>& Info) {
//     string name;
//     int age;

//     cout << "What is your name? " << endl;
//     std::cin.ignore();  
//     getline(cin, name);
    
//     cout << "How old are you?" << endl;
//     cin >> age;

//     Info[name] = age;
// }

// int main() {
//     map<string, int> Info;
//     string answer;
//   do{
//     cout << "Do you wish to input data? (yes or no):" << endl;
//     cin >> answer;

//     if (answer == "yes") {
//         questions(Info);
//     } else {
//         cout << "No data input." << endl;
//     }
//   } while (answer == "yes");

  
//     for (const auto& pair : Info) {
//         cout << pair.first << ": " << pair.second << endl;
//     }

//     return 0;
// }


//=========================================================================

// int main(){
//     string country;
//     cout<<"Where do you live?"<<endl;
//     cin>>country;
//     cout<<"I've heard great things about "<<country <<". I'd like to go sometimes.";
// }

// ===================================================================

//  int main()
//  {
         
//     cout<< "Please enter a degree value in Celsius:"<<endl;
//     string input;
//     cin >> input;
//     double celsius = stod(input);
//     double fahrenheit  = (9.0/5) * celsius + 32;
//     cout<< celsius << " Celsius is " << fahrenheit <<" Fahrenheit"; 
   
//  }

//==============================================================

// int main()
// {   
//     double length;
//     double width;
//     int height;

//     cout<< "Welcome to box calculator. Please type in length, width and height information: "<<endl;
//     cout<< "length : ";
//     cin>> length;
//     cout<< "width : ";
//     cin>> width;
//     cout<< "height : ";
//     cin>> height;

//     double base = width * length;
//     double volume = base * height;

//     cout<< "The base area is : "<< base<< endl;
//     cout<< "The volume is : "<< volume;

    
// }

//=========================================================================

//Tools

// const int Pen{10};
// const int Marker (20);
// const int Eraser{30};
// const int Rectangle{40};
// const int Circle{50};
// const int Eclipse{60};

// int main()
// {
//     int tool{Eraser};
//     switch (tool)
//     {
//     case Pen:
//         {
//             cout<<"Active tool is Pen."<<endl;
//         }
//                 break;
//     case Marker:
//         {
//             cout<<"Active tool is Marker."<<endl;
//         }
//     case Eraser:
//         {
//             cout<<"Active tool is Eraser."<<endl;
//         }
//     case Rectangle:
//         {
//             cout<<"Active tool is Rectangle."<<endl;
//         }
//     case Circle:
//         {
//             cout<<"Active tool is Circle."<<endl;
//         }
//     case Eclipse:
//         {
//             cout<<"Active tool is Eclipse."<<endl;
//         }
//     default:{
//         cout<<"No match found"
//     }
//         break;
//     }
// }

//========================================================================

//Ternary operators

//  int main()
//  {
//     int input;
//     cout<< "Please Type in an integral value : ";
//     cin>> input;
//      string answer = (input % 2 == 0) ? "even":"odd";

//     cout<< input << " is " << answer ; 
//  }

