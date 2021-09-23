#include <iostream>
#include <cmath>
#include <iomanip>

 using namespace std;
 
  int main() {
/* Write a program that calculates the occupancy rate for a hotel. The program should start by asking user how many floors the hotel has. 
A loop should then iterate once for each floor. In each iteration, 
the loop should ask the user for the number of rooms on the floor and how many of them are occupied. After all the iterations, 
the program should display how many rooms the hotel has, how many of them are occupied, how many are unoccupied, 
and the percentage of rooms that are occupied. The percentage may be calculated by dividing the number of rooms occupied by the number of rooms.
Input validation: Do not accept a value less than 1 for the number of floors. Do not accept a number less than 10 for the number of rooms on a floor. 
NOTE: It is traditional that most hotels do not have 13th floor. The loop in this program should skip the entire 13th iteration
*/
  	 int totalFloors = 0;
  	 int roomInEachFloor = 0;
  	 int totalRooms = 0;
  	 int occupiedRoomsInTheFloor = 0;
  	 int totalOccupiedRooms = 0;
  	 float percentOccupied = 0.0f;
  	   
  	   cout << "enter the number of floors " <<endl;
  	   cin >> totalFloors;
  	   
  	    while(totalFloors < 1){
  	    	cout << "please sir re-enter a valid number of floors that must be greater or equal 1 as a logic value " << endl;
  	    	cin >> totalFloors ;
		  }
		  
		  for(int i = 1 ; i <= totalFloors ; i++)
		   {
		  	if (i != 13)
			   {
		  		cout << "enter the number of rooms on the floor " << endl;
		  		cin >> roomInEachFoor ;
		  		
		  		  while (roomInEachFloor < 10)
					{
						cout << "sir you must re-enter a number of rooms greater or equal 10 " << endl;
						cin >> roomInEachFloor;
					}
					
				cout << "how many rooms are occupied ? " << endl;
				cin >> occupiedRoomsInTheFloor;
				  	 
				  	 totalRooms += roomInEachFloor ;
				totalOccupiedRooms += occupiedRoomsInTheFloor;
				  
				
				percentOccupied = totalOccupiedRooms / totalRooms;
				 
				  cout << "the Hotel has total of " << totalFloors << " floors\n";
				  cout << "the Hotel has total of " << totalRooms << " Rooms\n";
				  cout << "the Hotel has total of " << totalOccupiedRooms << " Rooms Occupied\n";
				  cout << "there are " << totalRooms - totalOccupiedRooms << " Available Rooms\n";
				  cout << "the percent of occupied rooms is " << setprecision(2) << fixed << percentOccupied << "%\n";	  		
			  }
		  }
  	        return 0;
  }
