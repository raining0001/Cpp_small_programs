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

//====================================================================

// int main()
// {
//     int age;

//     cout<< "Please type in your age : ";
//     cin>> age;

//     if(age >= 21 && age <= 39)
//     {
//         cout<< "You are eligible for the treatment.";
//     }
//     else if(age< 21)
//     {
//         cout<<"Sorry , you are to young for the treatment.";
//     }
//     else
//     {
//         cout<< "Sorry , you are too old for the treatment.";
//     }


// }

//==============================================================

// int main() {
//     map<string, int> Day{
//         {"Monday", 1},
//         {"Tuesday", 2},
//         {"Wednesday", 3},
//         {"Thursday", 4},
//         {"Friday", 5},
//         {"Saturday", 6},
//         {"Sunday", 7}
//     };

//     int answer;
//     cout << "Which day is today [1: Monday, ..., 7: Sunday]: ";
//     cin >> answer;

//     bool validInput = false;

//     // Iterate through the map to find the matching value for the input
//     for (const auto& pair : Day) {
//         if (pair.second == answer) {
//             cout << "Today is " << pair.first << "Let's have some fun." << endl;
//             validInput = true;
//             break;
//         }
//     }

//     if (!validInput) {
//         cout <<answer<< " is not a valid day.Bye! " << endl;
//     }

//     return 0;
// }

//========================================================

// int main() {
//     map<string, int> Day{
//         {"Monday", 1},
//         {"Tuesday", 2},
//         {"Wednesday", 3},
//         {"Thursday", 4},
//         {"Friday", 5},
//         {"Saturday", 6},
//         {"Sunday", 7}
//     };

//     int answer;
//     int answer2;

//     cout << "Which day is today [1: Monday, ..., 7: Sunday]: ";
//     cin >> answer;

//     for (const auto& pair : Day) {
//         if (pair.second == answer) {
//             cout << "Today is " << pair.first << endl;
//             cout << "How many days have passed up to today: ";
//             cin >> answer2;

//             break; // Exit the loop after finding the current day
//         }
//     }

//     // Adjust the value considering the circular nature of days
//     int adjustedValue = (answer - answer2 + 7) % 7;

//     // Find the day corresponding to the adjusted value
//     string adjustedDay;
//     for (const auto& pair : Day) {
//         if (pair.second == adjustedValue) {
//             adjustedDay = pair.first;
//             break;
//         }
//     }

//     cout << "If we went " << answer2 << " days in the past we would hit a " << adjustedDay << endl;

//     return 0;
// }

//===========================================================================

// int main()
// {
//    int x ;
//    int y;

//     cout<<"Welcome to territory control. Please type in your x and y positions."<<endl;
//     cout<< "Type in your x location:"<<endl;
//     cin>> x;
    
//     cout<< "Type in your y location :"<<endl;
//     cin>> y;
//   if ((x < -20 || x > 20) || (y < -10 || y > 10))
// {
//     cout << "You're out of reach!";
// }
// else
// {
//     cout << "You are completely surrounded. Don't move!";
// }
// }   

//=============================================================

// #include <vector>

// int main()
// {
//     std::vector< double>unit_price {10.4,21.5,14.0,15.2,7.9};
//     std::vector<double> number_of_items{60,20,10,30,20,50};

//      double least_cost{99999};
//      unsigned int count{0};
//      while(count<5)
//      {
//         if((unit_price[count]* number_of_items[count]) < least_cost)
//         {
//             least_cost = unit_price[count]*number_of_items[count];
//         }
//         ++count;
//      }

//     std::cout << "The least I can pay is  : " << least_cost;


// }


//==================================================================

// int main()
// {
//     // for (size_t i{0};i<10;++i)
//     // {
//     //     cout<< "i : "<< i << endl;
//     // }

//     size_t i{0};
//     while(i<10)
//     {
//        ++i;
//      }
//      cout<<"Done!"<<endl; 
// }

//======================================================================

//  Do while loops

// int main()
// {
// size_t i{0}; // Iterator declaration
// const int count{10};
// do{
//     cout<<"I LOVE CATS!"<<endl;
//     ++i; // incrementing
// } while (i<count);


// }

//===================================================================

// void multiples_19()
// {
//     unsigned int count{100};
//     do{
//         if((count%19) == 0)
//         {
//             cout<< count << " ";
//         }
//         ++count;
//     }while(count<1001);
// }

//============================================================

// int main()
// {
//     char operation;
//     double operand1;
//     double operand2;
//     bool end{false};

//     cout<<"Simple calculator."<<endl;

//     while(end == false){
//         cout<<"What operation do you want help with? "<<endl;
//         cout<<"+,-,* and / are supported. Please choose one and type below."<<endl; 
//         cin>> operation;

//         cout<<endl;
//         cout<<"Please type in your two operands separated by a space and hit enter: ";
//         cin>>operand1>>operand2;
//         cout<<endl;

//         switch (operation)
//         {
//         case '+' :
//             cout<< operand1 + operand2<<endl;
//             break;
//         case '-':
//             cout << operand1 + operand2 <<endl;
//             break;
//         case '*':
//             cout<< operand1 * operand2 <<endl;
//             break;
//         case '/':
//             cout<< operand1 / operand2 << endl;
//             break;
//         default:
//             cout << operation << " not supported" << endl;
            
//         }

//         cout<< "Continue ? (Y | N) : ";
//         char go_on;
//         cin>> go_on;

//         if(go_on == 'Y'){
//             end = false;
//         } else{
//             end = true;
//         }

//     }

// }

//=======================================================================

// While loop

////increment  -----------

// int main()
// {
//     unsigned int i {0};
//     const unsigned int count{5};
    
//         while(i<=count){
//         cout<< i << endl;
//         ++i;
//     }
//      cout<< "Start!"<<endl;

////decrement ------------

//     i = count;
//     while(i>0){
//         cout<< i << endl;
//         --i;
//      }

//      cout<<"Finish!";

// }


//=========================================================================

// //do while loop

// // incrementing ----------

// int main()
// {
//     size_t i{0};
//     const unsigned int count{10};

//     do{
//         cout<< i<< endl;
//         ++i;
//     } while(i<count);

// // decrementing ------------
//    cout<<endl;
//     i = count;
//     do{
//         cout<< i <<endl;
//         --i;
//     }while(i>0);


// }

//============================================================================

#include <iomanip>

// int main()
// {
//     cout<< "Tabular data visualization with nested for loops"<<endl;

//     const size_t ROW  {12};
//     const size_t COL {3};

//     for (size_t row{0};row<ROW; ++row)
//     {
//         for(size_t col{0};col< COL;++col)
//         {
//             cout<<"( row " << std::setw(2) << row << ",col "<< std::setw(2) << col << ") ";
//         }
//         cout<<endl;
//     }
// }

// while --------------

// int main()
// {
//     const size_t ROW{12};
//     const size_t COL{3};

//     size_t row{0};
//     size_t col{0};

//         while(row<ROW){
//             while(col<COL){
//                 cout<<"(row "<<std::setw(2)<<row<<", col "<<std::setw(2) << col<<")";
//                 ++col;
//             }
//             cout<<endl;
//             col = 0;  //Reset col to 0 to allow printing from 0
//             ++row;   
//         }

// }

// do while ----------

