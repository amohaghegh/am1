#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Player{
	public :
	int score,score2,bat,bowl,wicket,wicket2,ballsLeft;
	bool isStrike;
	const int pitchLength=100;
		
		Player()
		{
			score=0;
			wicket=0;
			score2=0;
			wicket2=0;
			bat=-1;
			bowl=-1;
		}
		void setBallsLeft(int O)
		{
			ballsLeft=O;
		}
		void batting()
		{
		
			cout<<endl;
			cout<<"\nEnter 1 for strike and 0 for defense :\t";
			cin>>isStrike;
			if(isStrike==0)
			{
				bat=0;
				srand(time(NULL));
				bat=rand()%6;
				if(bat==0)
				{
					cout<<"Missed the ball...!\nNo run in this ball";
				}
				else if(bat==1)
				{
					cout<<"Lbw...The Player is out";
					wicket++;
					
				}
				else if(bat==2)
				{
					cout<<"Bowled...!\nThe player is out";
					wicket++;
					
				}
				else if(bat==3 || bat==4)
				{
					cout<<"Good defense...!\nNo run in this ball";
				
				}
				else
				{
					cout<<"Wide Ball given By The Umpire";
					score++;
					ballsLeft++;
				}
				ballsLeft--;
			}
			else
			{
				int extra;
				extra=rand()% 15;
				if(extra==5)
				{
					cout<<"No Ball Given by the Umpire\n";
					score++;
					ballsLeft++;
				}
				bat=0;
				bat=rand()%17;
				if(bat==0)
				{
					cout<<"Tried to strike but failed to score...!";
					

				}
				else if(bat==1 || bat==3 || bat==5 || bat==7)
				{
					cout<<"Good strike for a single";
					score++;
					
				}
				else if(bat==2 || bat==14)
				{
					cout<<"Good strike for double";
					score=score+2;
					
				}
				else if(bat==4 || bat==12)
				{
					cout<<"Well played...\nFour runs";
					score=score+4;

				}
				else if(bat==6 || bat==13)
				{
					cout<<"woaahhhhh...!!!\nIt's a Sixerrr";
					score=score+6;

				}
				else if(bat==8 || bat==9)
				{
					cout<<"In the Air and caught by the fielder..!";
					wicket++;
				}
				else if(bat==10)
				{
					cout<<"Bowled...!\nThe player is out";
					wicket++;
				}
				else if(bat==11)
				{
					cout<<"Tried to hit But Lbw it is";
					wicket++;
					
				}
				else if(bat==16 && extra!=5)
				{
					cout<<"Wide Ball given By the Umpire";
					score++;
					ballsLeft++;
				}
				else 
				{
					cout<<"Tried to hit But missed the Ball";
				}
				ballsLeft--;
				cout<<endl;
				
				if((bat>7 && bat<12) && extra==5)
				{
					cout<<"\nBut Luckily It is No Ball";
					wicket--;
				}
			}
			
		}
		void bowling()
		{
			
			cout<<endl;
			int bowlDistance;
			int angle;
			cout<<"\nEnter the distance of ball from Yourself (50-100) :\t";
			cin>>bowlDistance;
			while(bowlDistance>100 || bowlDistance<50)
			{
				cout<<"\nEnter Valid Distance (50-100) :\t";
				cin>>bowlDistance;
			}
			cout<<"\nEnter Angle of deflection (60 degree to 120 degree) :\t";
			cin>>angle;
			if((angle>95 && angle<=120) ||( angle<85 && angle>=60))
			{
				cout<<"It is a Spin ball\n";
			}
			else if(angle<60 || angle>120)
			{
				cout<<"Wide ball given by the Umpire\n";
				score2++;
			}
			else 
			{
				cout<<"It is a fast ball\n";
			}
			bowl=rand()%8;
			if(angle>=60 && angle<=120)
			{
				if(bowl==0)
				{
					cout<<"No Ball given by the Umpire\n";
					score2++;
					ballsLeft++;
				}
				else if(bowl>0 && (bowlDistance>=50 && bowlDistance <70))
				{
					cout<<"Bouncer...!\n";
				}
				else if(bowl>0 && (bowlDistance>=90 && bowlDistance <101))
				{
					cout<<"Yorker...!\n";
				}
			}
			bat=0;
			bat=rand()%21;
			if(angle>=60 && angle<=120)
			{
				cout<<endl;
				if(bat==0)
				{
					cout<<"Tried to strike but failed to score...!";
					
				}
				else if(bat==1 || bat==3 || bat==5 || bat==7)
				{
					cout<<"Good strike for a single";
					score2++;
				
				}
				else if(bat==2 || bat==14)
				{
					cout<<"Good strike for double";
					score2=score2+2;	
					
				}
				else if(bat==4 || bat==12 || bat==19)
				{
					cout<<"Well played...\nFour runs";
					score2=score2+4;
					
				}
				else if(bat==6 || bat==13)
				{
					cout<<"woaahhhhh...!!!\nIt's a Sixerrr";
					score2=score2+6;
				
				}	
				else if(bat==8 || bat==9)
				{
					cout<<"In the Air and caught by the fielder..!";
					wicket2++;
					
				}
				else if(bat==10)
				{
					cout<<"Bowled...!\nThe player is out";
					wicket2++;
					
				}
				else if(bat==11)
				{
					cout<<"Tried to hit But Lbw it is";
					wicket2++;
					
				}
				else if(bat==15 || bat==16)
				{
					cout<<"Missed the ball...!\nNo run in this ball";
					
				}
				else if(bat==17)
				{
					cout<<"Lbw...The Player is out";
					wicket2++;
					
				}
				else if(bat==18)
				{
					cout<<"Bowled...!\nThe player is out";
					wicket2++;
					
				}
				else
				{
					cout<<"Good defense...!\nNo run in this ball";
				
				}
				ballsLeft--;
				cout<<endl;
			}
			
		}
};

class Team
{
	public:
	int decision,targetScore,scoreChase,overs;
	
	Team(){
			decision=0;
			targetScore=0;
			scoreChase=0;
			overs = 0;
		}
	
	void setOvers()
	{
		cout<<"Enter Overs limit of the Match :\t";
		cin>>overs;
		overs=(overs*6);
	}
	int getOvers()
	{
		return overs;
	}
	void showStatus1(Player khilari)
	{
	
		cout<<endl;
		cout<<khilari.score<<"-"<<khilari.wicket;
		cout<<endl;
		cout<<"Balls Left :\t"<<khilari.ballsLeft;
	
	}

	void showStatus2(Player khilari)
	{
		cout<<endl;
		cout<<khilari.score2<<"-"<<khilari.wicket2;
		cout<<endl;
		cout<<"Balls Left :\t"<<khilari.ballsLeft;
	}
	void target(Player khilari)
	{
		if(decision==1)
		{
			cout<<"\n\n\t\tComputer Needs "<<targetScore+1<<" in "<<khilari.ballsLeft<<" Balls\n\nYou're Bowling\n";
		}
		else
		{
			cout<<"\n\n\t\tYou Need "<<targetScore+1<<" in "<<khilari.ballsLeft<<" Balls\n\nYou're Batting\n";
		}
	}
	int toss()	{
		
		cout<<"Select 0 for HEAD and 1 for TAIL :\t";
		cin>>decision;
		bool coin;
		srand(time(NULL));
		coin= rand()%2;
		if(decision==coin)
		{
			cout<<"Congratulations...!\nYou won the toss.";	
			cout<<"Select 0 for bowling and 1 for batting :\t";
			cin>>decision;
			if(decision==0)
			{
				cout<<"\nYou choose to bowl first.\n\nYou're Bowling\n";
			}
			else
			{
				cout<<"\nYou choose to bat first.\n\nYou're Batting\n";
			}
			return decision;
		} 
		else
		{
			cout<<"Computer won the toss";
			decision=rand()%2;
			if(decision==0)
			{
				cout<<" and choose to Bat\n\nYour Bowling\n";
			}
			else
			{
				cout<<" and choose to bowl\n\nYour Batting\n";
			}
			return decision;
		}
	}
	void result(Player khilari)
	{
		
		if(decision==1)
		{
			cout<<"\n\n\t\tYour Stats :\t";
			cout<<khilari.score<<"-"<<khilari.wicket;
			cout<<endl;
			cout<<"\t\tComputer's Stats :\t";
			cout<<khilari.score2<<"-"<<khilari.wicket2;
			cout<<endl;
			cout<<endl;
			if(targetScore>scoreChase)
			{
				cout<<"\n\t\tYou Won the Match By "<<(targetScore-scoreChase)<<" Runs";
			}
			else if(targetScore==scoreChase)
			{
				cout<<"\n\t\tMatch tied";
			}
			else
			{
				cout<<"\n\t\tComputer Won the Match By "<<10-(khilari.wicket2)<<" Wickets";
			}
		}
		else
		{
			cout<<"\n\n\t\tComputer's Stats :\t";
			cout<<khilari.score2<<"-"<<khilari.wicket2;
			cout<<endl;
			cout<<"\t\tYour Stats :\t";
			cout<<khilari.score<<"-"<<khilari.wicket;
			cout<<endl;
			cout<<endl;
			if(targetScore>scoreChase)
			{
				cout<<"\n\t\tComputer Won the Match By "<<(targetScore-scoreChase)<<" Runs";
			}
			else if(targetScore==scoreChase)
			{
				cout<<"\n\t\tMatch tied";
			}
			else
			{
				cout<<"\n\t\tYou Won the Match By "<<10-(khilari.wicket)<<" Wickets";
			}
		}
	}
};

int main()
{
	Team t;
	Player p;
	t.setOvers();
	p.setBallsLeft(t.getOvers());
	int decision;
	decision=t.toss();
	if(decision==1)
	{	
		while(p.ballsLeft>0 && p.wicket<10)
		{
			p.batting();
			t.showStatus1(p);
		}
		t.targetScore=p.score;
		p.setBallsLeft(t.getOvers());
		t.target(p);
		while(p.ballsLeft>0 && p.wicket2<10)
		{
			
			if(t.scoreChase<=t.targetScore)
			{
				p.bowling();
			}
			
			else
			{
				t.result(p);
				exit(0);
			}
			t.scoreChase=p.score2;
			t.showStatus2(p);
		}
		
		t.result(p);
	}
	else
	{
		
		while(p.ballsLeft>0  && p.wicket2<10)
		{
			p.bowling();
			t.showStatus2(p);
		}
		t.targetScore=p.score2;
		p.setBallsLeft(t.getOvers());
		t.target(p);
		while(p.ballsLeft>0  && p.wicket<10)
		{
			
			if(t.scoreChase<=t.targetScore)
			{
				p.batting();
			}
			else
			{
				t.result(p);
				exit(0);
			}
			t.scoreChase=p.score;
			t.showStatus1(p);
		}
		t.result(p);
	}

	return 0;
}
