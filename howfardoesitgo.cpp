// How far does it go?

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	const float PI = 3.141592653589793238462643383279502884197169399375;
	
	cout << "You want to calculate how far your projectile can go? I can help you out."<<endl;
	
	cout << "There are two options for giving me the input"<<endl;
	cout << "Option 1: Give me the the initial velocity and the angle above the horizontal."<<endl;
	cout << "Option 2: Give me the horizontal and the verticle components of the velocity."<<endl;
	
	cout << "Your Choice. 1 or 2?"<<endl;
	int choice = 0;
	cin >> choice;
	
	//common variables
	
	float time = 0;
	float hight =0;
	float distance =0;
	
	
	
		if (choice == 1){
		
			float v =0;
			float angle = 0;
			int choice2;
			cout << "Please enter the initial velocity (positive) in meters per seconds"<<endl;
			cin >> v;
			
			while (v <= 0){
				cout << "EDCOM does not like negative numbers or 0. Try again"<<endl;
				cin >> v;
			}
			
		
			cout << "What unit your angle is in?"<<endl;
			cout << "Option 1 : Degrees; Option 2 : Radians."<<endl;
			cin >> choice2;
		
			if (choice2 == 1){
				cout << "Please enter the the angle between 0 and 90 degrees:"<<endl;
				float dangle = 0;
				cin >> dangle;
				while (dangle <= 0 || dangle >= 90){
					cout << "EDCOM does not like the input angle. Try again"<<endl;
					cin >> dangle;
				}
				angle = (dangle*PI)/180;
						
			}
		
			else if (choice2 ==2) {
				cout << "Please enter the the angle between 0 and 1.570796 radians:"<<endl;
				cin >> angle;
				while (angle < 0 || angle > (PI/2)){
					cout << "EDCOM does not like the input angle. Try again"<<endl;
					cin >> angle;
				}
			
			}
			else {
				cout << "EDCOM orders you to follow EDCOM's commands. Run the program again.";
				return -1;
			}
		
			float Hv = (v * cos(angle));
			float Vv = (v * sin(angle));
		
			// checking the hight
		
		
			cout << "At which hight in meters would you like the projectile to launch? (Above gound is + and below ground is -) "<<endl;
			cin >> hight ;
			hight = -hight;
			
			
			
			
			// Calculating the time
		
		
		
			time = ((-Vv) + sqrt( (Vv*Vv)- (4*-4.9*-hight)))/(2*-4.9);
			if ((Vv*Vv)- (4*-4.9*-hight) < 0){
				time = -1;
			}
			else if (time <= 0){
				time = ((-Vv) - sqrt( (Vv*Vv)- (4*-4.9*-hight)))/(2*-4.9);
				
				if ((Vv*Vv)- (4*-4.9*-hight) < 0){
					time = -1;
				}
			}
		
			//horizontal distance 
		
			distance = (Hv*time);
			
		}
		
		else if (choice == 2){
			
			float Hov =0;
			float Vov =0;
			
			cout << "Please enter the horizontal (positve) velocity in meters per second"<<endl;
			cin >> Hov;
			if (Hov <=0){
				cout << "Never disobey EDCOM. Try again from the beginning."<<endl;
				return -1;
				
			}
			
			cout << "Please enter the verticle (positive) velocity from the beginning"<<endl;
			cin >> Vov;
			if (Vov <=0){
				cout << "Never disobey EDCOM. Try again from the beginning."<<endl;
				return -1;
				
			}
			
			cout << "At which hight in meters would you like the projectile to launch? (Above gound is + and below ground is -) "<<endl;
			cin >> hight;
			hight = -hight;
			
			time = ((-Vov) + sqrt( (Vov*Vov)- (4*-4.9*-hight)))/(2*-4.9);
			
			if (time < 0){
				time = ((-Vov) - sqrt( (Vov*Vov)- (4*-4.9*-hight)))/(2*-4.9);
			}
			
			distance = (Hov*time);
			
		}
		else {
			cerr << "Rule Number 1: OBEY EDCOM'S INSTRUCTIONS ALL THE TIMES. Run the program again.";
			return -1;
			
		}
		
		
	if (time == -1){
		cout << "EDCOM doesn't like the values. Try again.";
	}
	else {
	cout << "Well according to my calculations, the horizontal distance covered is "<< distance <<" meters."<<endl;
	}
	return 0;
	
	
} 
