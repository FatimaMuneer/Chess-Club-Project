#include<iostream>
#include<conio.h>
#include <cstring>
using namespace std;

class Player 
{
    public:
        string name;
        int age;
        int rating;
        string title;

        Player(string n, int a, int r, string t) {
            name = n;
            age = a;
            rating = r;
            title = t;
        }

        void displayPlayer() {
            cout << "\nName: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Rating: " << rating << endl;
            cout << "Title: " << title << endl;
        }
};
class club{
	
	 private:
        Player players[20] = {
            Player("Ding Liren", 30, 2811, "Grand Master"),
            Player("Jane", 25, 2000, "FIDE Master"),
            Player("Mark", 30, 1700, "Candidate Master"),
            Player("Samantha", 27, 2100, "International Master"),
            Player("David", 29, 1900, "National Master"),
            Player("Karen", 24, 2000, "FIDE Master"),
            Player("Alex", 26, 1850, "Candidate Master"),
            Player("Olivia", 23, 2100, "International Master"),
            Player("Mike", 31, 1700, "National Master"),
            Player("Emily", 28, 2000, "FIDE Master"),
            Player("Max", 24, 1850, "Candidate Master"),
            Player("Sophia", 26, 2100, "International Master"),
            Player("Luke", 27, 1750, "National Master"),
            Player("Grace", 22, 2000, "FIDE Master"),
            Player("Daniel", 29, 1900, "Candidate Master"),
            Player("Anna", 25, 2100, "International Master"),
            Player("William", 26, 1950, "National Master"),
            Player("Lily", 23, 2000, "FIDE Master"),
            Player("Ryan", 27, 1800, "Candidate Master"),
            Player("Ella", 30, 2200, "Master")
        };
        int noof = 20 ;
		
	public:
		void welcome();	
		void searchPlayer();
		void bytitle();
		void leaderboard();
		void mango();
		
};
      
void club :: welcome ()
{
	 cout << "\n\t\t** Welcome to Chess Club **" << endl;
    cout << "\n" << endl;
    cout << "Select an option\n" << endl;
    cout << "1) Join club" << endl;
    cout << "2) Search a player" << endl;
    cout << "3) Check leaderboard" << endl;
    cout << "4) Check match schedule" << endl;
    cout << "5) Exit the club" << endl;
    cout<<"\n\nPlease select an option:"<<endl;

	int op;
	
	cin >> op;
	system("cls");
	
	switch(op)
	{
		case 1:
			{
			
		int age,rating;
		char name [60];
		char title[40];
		cin.ignore();
		cout<<"\n*Register your self here*\n\n"<<endl;
		cout<<"Enter your name\n";
		cin.get(name,100);
		cout<<endl;
		cout<<"Enter your Age\n";
	    cin>>age;
	    cout<<endl;
	    cout<<"Enter your Chess Rating"<<endl;
	    cin>>rating;
	    cout<<endl;
		cout<<"enter title\n";
		cin.ignore(); 
		cin.get(title,40);
	   system("cls");
	   	cout<<"\n\n**CONGRATULATIONS YOU HAVE JOINED THE CHESS CLUB**\n\n";
	   	cout<<"\t\t\t----Member Data----"<<endl<<endl;
	   	cout<<"Name:\t"<<name<<endl;
	   	cout<<"Age:\t"<<age<<endl;
	   	cout<<"Rating:\t"<<rating<<endl;
	   	cout<<"Title:\t"<<title<<endl;	
        mango();			
        break;
  
    }

	 case 2:
	 {
	 
		cout<<"\t\t\t\n\n -----Please select an option -----\n"<<endl;
		cout<<" 1) Search by Name\n\n";
		cout<<" 2) Search by Title\n\n";
		cout<<" 3) Search by Rating\n\n";
		int xo;
		cin >> xo;
		system("cls");
		
		switch(xo)
		{
			case 1:
					system("cls");
			    	searchPlayer();	
					mango();		
			    	break;
			case 2 :
					
					bytitle();
					mango();
				    break;
				    
			deafult :
			cout<<"wrong entry "<<endl;
			break;	    
				    
		}
	

	break;
}
	case 3:
	{
		leaderboard();
        mango();		
	break;
		}
	
	
	case 5:
            exit(0);
            break;

     default:
            cout << "Invalid option! Please try again." << endl;
            break;
}

welcome();

}

 void club :: searchPlayer() 
 {
            char name[30];
            bool found = false;
            cout << "\n\n\tEnter name of the player you want to search: ";
            cin.ignore();
            cin.get(name,30);
            for(int i = 0; i < noof; i++)
			 {
            	if(players[i].name == name) 
				{
                    found = true;
                    players[i].displayPlayer();
                    break;
                }            
            }       
{
	if(!found) 
    cout << "\nNo player found with the name\t" << name << endl;
}
             }
  void club :: bytitle()
  {
	//system("cls");
  	char name[30];
            bool found = false;
            cout << "Enter Title of player to search: ";
            cin.ignore();
            cin.get(name,30);
            
            for(int i = 0; i < noof; i++) 
			{
            	if(players[i].title == name) 
				{
                    found = true;
                    players[i].displayPlayer();	
                }      
            }
            if(!found) 
			{
                cout << "No player found having the Title of:\t " << name << endl;
            }
  }
  void club :: leaderboard(){
  	
     cout<<"=+=+=+=+=+=+=+=LEADERBOARD=+=+=+=+=+=+=+="<<endl;
	 
	 for(int i=0; i<noof; i++)
	 {
	    players[i].displayPlayer();
		 }
}
void club :: mango(){
		
		cout<<"\n\nPress 1 to go back to the Main Menu"<<endl; 
        cout<<"Press 2 to Exit the program"<<endl;
        
        cout<<"\n\nPlease select an option:\n"<<endl;
        int x;
        cin>>x ;
        system("cls");
        if (x==1)
        void Welcome( );
        else if (x==2)
        exit(0);
        else
        cout<<"Please select correct option"<<endl;
	
}
  

int main ()
{
club x;
    x.welcome();
    x.searchPlayer();
    x.bytitle();
    x.leaderboard();
    x.mango();
}