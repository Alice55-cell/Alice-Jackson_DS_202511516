#include <iostream>
#include <string>
#include "notepad.h"

int main(){
	int choice;
	char  filename;
   char  writefile;
	char readfile;
	char appendfile;
	
	
	
	do{
	std::cout<<"\n=========SIMPLE NOTEPAD======="<<std::endl;
	std::cout<<"\n1. Write File\n ";
	std::cout<<"\n2. Read File \n";
	std::cout<<"\n3. Append File \n";
	std::cout<<"\n4. Exit\n ";
	std::cout<<"\n Enter choice:";
	std::cin >> choice;
	}
	
		while(choice != 4);
	
		switch (choice){
		case 1:
			std::cout<<"Enter filename to create/write:"<<std::endl;
			std::cin >>filename;
			writefile;
			
			case 2:
			std::cout<<"Enter filename to read:"<<std::endl;
			std::cin >>filename;
			readfile;
			
			case 3:
			std::cout<<"Enter filename to append to:"<<std::endl;
			std::cin >>filename;
			appendfile;
			
			case 4:
			std::cout<<"\n Exiting the notepad program:"<<std::endl;
			
			default:
				std::cout<<"Invalid choice! please enter number from 1 and 4"<<std::endl;
	}
	
	
	return 0;
}