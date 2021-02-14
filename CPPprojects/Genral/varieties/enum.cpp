#include <iostream>
using namespace std;
// if enumarators is not intialised it means having value in icreasinng order
// from zero ;
enum colors{red, black};
enum suit{heart, diamond, spade=3, club};
int main() {
   cout <<"The value of enum color : "<<red<<","<<black;
   cout <<"\nThe default value of enum suit : "<<heart<<","<<diamond<<","<<spade<<","<<club;
   return 0;
}