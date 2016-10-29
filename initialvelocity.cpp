//Initial Velocity

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	// common variables
	const float PI = 3.141592653589793238462643383279502884197169399375;
	float iv = 0;
	
	
	// Intermediate values
	float vvi = 0;
	float time = 0;
	float vdisp = 0;
	float vvf = 0;
	float hvi = 0;
	float angle = 0;
	
	//Opening statements
	
	cout << "So you need some help in finding the initial velocity of a projectile. Well today EDCOM is in a helping mood"<<endl;
	cout << "First of all do you know the angle at which the projectile was launched?"<<endl;
	cout << "Option 1: Yes"<<endl;
	cout << "Option 2: No"<<endl;
	cout << "1 or 2"<<endl;
	
	int choice = 0;
	
	cin >> choice;
		
			
	if (choice == 1){
		
		int choice2 = 0;
		
		
		cout << "What unit your angle is in?"<<endl;
		cout << "Option 1 : Degrees; Option 2 : Radians."<<endl;
		cin >> choice2;
		
		while (choice2 != 1 && choice2 != 2){
			
			cout << "Follow EDCOM's instructions properly. Try again."<<endl;
			cin >> choice2;
			
		}
		
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
		
		else {
			cout << "Please enter the the angle between 0 and 1.570796 radians:"<<endl;
			cin >> angle;
			while (angle < 0 || angle > (PI/2)){
				cout << "EDCOM does not like the input angle. Try again"<<endl;
				cin >> angle;
			}
			
		}
		// asking for the other inputs
		
		cout << "Which set of information is available to you?"<<endl;
		cout << "Option 1: Total time taken for the motion and the verticle displacement."<<endl;
		cout << "Option 2: Final verticle velocity and the verticle displacement."<<endl;
		cout << "Option 3: Final verticle velocity and the total time taken for the whole motion."<<endl;
		cout << "Your choice. 1 or 2 or 3?"<<endl;
		
		int choice3 = 0;
		cin >> choice3;
		
		while (choice3 !=1 && choice3 !=2 && choice3 !=3){
			cout << "Follow EDCOM's instructions properly. Try again.";
			cin >> choice3;
		}
		
		if (choice3 == 1){
			cout << "Enter the total time in seconds"<<endl;
			
			cin >> time;
			while (time <= 0){
				cout << "You cannot trick EDCOM so don't even bother. Try again.";
				cin >> time;
			}
			cout << "Enter the total verticle displacement of the projectile from the start of the motion (The convention is upwards is + and downwards is -)"<<endl;
			
			cin >> vdisp;
							
			vvi = ((vdisp + 4.9*(time*time))/(time));
			
		}
		
		else if (choice3 == 2){
			cout << "Enter the final verticle velocity in meters per second (The convention is upwards is + and downwards is -) "<<endl;
			
			cin >> vvf;
			
			while (vvf >= 0){
				cout << "Error: EDCOM knows this cannot be possible. Try again"<<endl;
				cin >> vvf;
			}
			
			cout << "Enter the total verticle displacement of the projectile from the start of the motion (The convention is upwards is + and downwards is -)"<<endl;
			
			cin >> vdisp;
			
			vvi = sqrt ((vvf*vvf)+(2*19.6*vdisp));
			
			if ((vvf*vvf)+(2*19.6*vdisp) < 0){
				cout << "Error: EDCOM knows this cannot be calculated. Check your inputs again."<<endl;
				return -1;
				
			}
		}
		
		else {
			cout << "Enter the final verticle velocity in meters per second (The convention is upwards is + and downwards is -) "<<endl;
			
			cin >> vvf;
			
			while (vvf >= 0){
				cout << "Error: EDCOM knows this cannot be possible. Try again"<<endl;
				cin >> vvf;
			}
			
			cout << "Enter the total time in seconds"<<endl;
			
			cin >> time;
			while (time <= 0){
				cout << "You cannot trick EDCOM so don't even bother. Try again.";
				cin >> time;
			}
			
			vvi = vvf + (9.8*time);
			
		}
		
		// Calculating the the initial velocity
		
		iv = ((vvi)/sin(angle));
		
		cout << "According to my calculations, the initial velocity of the projectile is "<< iv <<" meters per second."<<endl;
		
		return 0;
		
	}
	// no angle is given; RANGE IS GIVEN
	
	else if (choice == 2){
		
		cout << "So you dont know the angle then. So as a bonus, EDCOM will also calculate the angle above the horizontal for you as well."<<endl;
		
		cout << "Enter the range of the projectile in meters."<<endl;
		
		float range = 0;
		
		cin >> range;
		while (range <=0){
			cout << "EDCOM is not an idiot. Try again."<<endl;
			cin >> range;
			
		}
		
		cout << "Which set of information is available to you?"<<endl;
		cout << "Option 1: Total time taken for the motion and the verticle displacement."<<endl;
		cout << "Option 2: Final verticle velocity and the verticle displacement."<<endl;
		cout << "Option 3: Final verticle velocity and the total time taken for the whole motion."<<endl;
		cout << "Your choice. 1 or 2 or 3?"<<endl;
		
		int choice4 = 0;
		cin >> choice4;
		
		while (choice4 !=1 && choice4 !=2 && choice4 !=3){
			cout << "Follow EDCOM's instructions properly. Try again.";
			cin >> choice4;
		}
		
		if (choice4 == 1){
			cout << "Enter the total time in seconds"<<endl;
			
			cin >> time;
			while (time <= 0){
				cout << "You cannot trick EDCOM so don't even bother. Try again.";
				cin >> time;
			}
			cout << "Enter the total verticle displacement of the projectile from the start of the motion (The convention is upwards is + and downwards is -)"<<endl;
			
			cin >> vdisp;
			
			vvi = ((vdisp + 4.9*(time*time))/(time));
			
			hvi = (range)/time; 
			
		}
		
		else if (choice4 == 3){
			
			cout << "Enter the final verticle velocity (The convention is upwards is + and downwards is -) "<<endl;
			
			cin >> vvf;
			
			while (vvf >= 0){
				cout << "Error: EDCOM knows this cannot be possible. Try again"<<endl;
				cin >> vvf;
			}
			
			cout << "Enter the total time in seconds"<<endl;
			
			cin >> time;
			while (time <= 0){
				cout << "You cannot trick EDCOM so don't even bother. Try again.";
				cin >> time;
			}
			
			vvi = vvf + (9.8*time);
			
			hvi = range/time;
			
		}
		
		else {
			cout << "Enter the final verticle velocity (The convention is upwards is + and downwards is -) "<<endl;
			
			cin >> vvf;
			
			while (vvf >= 0){
				cout << "Error: EDCOM knows this cannot be possible. Try again"<<endl;
				cin >> vvf;
			}
			
			cout << "Enter the total verticle displacement of the projectile from the start of the motion (The convention is upwards is + and downwards is -)"<<endl;
			
			cin >> vdisp;
			
			vvi = sqrt((vvf*vvf) - 2*(-9.8)*vdisp);
			
			if (((vvf*vvf) - 2*(-9.8)*vdisp) < 0){
				cout << "Error: EDCOM knows this cannot be calculated. Check your inputs again."<<endl;
				return -1;
				
			}
			
			time = (vvf - vvi)/-9.8 ;
			
			
			hvi = range/time;
			
		}
		
		iv = sqrt ((hvi*hvi) + (vvi*vvi));

		angle = atan((vvi/hvi));
		
		float degrees = (angle/PI)*180;
		
		
		cout << "According to my calculations, the initial velocity is "<< iv <<" meters per second and the angle of the projectile from the positive x-axis is "<< angle <<" radians or "<< degrees <<" degrees.";
		
		return 0;
		
	}
	
	else{
		cerr << "Rule Number 1: OBEY EDCOM'S INSTRUCTIONS ALL THE TIMES. Run the program again.";
		return -1;
	}
}	