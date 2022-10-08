/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1 Task D
I wrote a program that can stream in a maze and set up the array then take in directions to see if they can traverse the custom maze.
*/


#include <iostream>
#include <file.open("maze_and_directions.txt");>
using namespace std;
int main()

{
file.open("maze_and_directions.txt");

int i=-1,j=0,x=0;             

char f[100];                   

cin.getline(f,100); 
	
file.open("maze_and_directions.txt");

while(f[x] != '\0')           
{

if (f[x] =='D')  
{
  i++;
}
if (f[x] == 'U')                 
{
          i--;
}
if(f[x] == 'R')                 
{
	j++;
}
if(f[x] == 'L')                 
{
	j--;
}
x++;
}

if (i == 3 && j == 4)         
cout<<"You got out of the maze.";
else
cout<<"You are stuck in the maze.";

return 0;

}
