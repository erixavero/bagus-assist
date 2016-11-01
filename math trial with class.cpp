#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Randomizer{
	
	srand(unsigned seed= time(0));
	int randomNum=rand();
	int a;
	int b;
	int x;
	int y;

public: 
	int setA(){
	this->a= randomNum%900+536;
	return a;
	}
	int setB(){
	this->b= randomNum%900+284;
	return b;
	}
	
	int setX(){
	this->x= randomNum%861+49;
	return x;
	}
	
	int setY(){
	this->y= randomNum%617+70;
	return y;
	}
};

class Score{
	int score= 0;

public:
	void scoreCount(int c, int answer){
		if(c == answer)
			score++;
	}
	
	int scorePrint(){
		return score;
	}
};


class Math {	
	int answer;
	int session;
	
public:
	
	void mathPlus();
	void mathMinus();
	void mathMulti();
	void mathDivid();
};

void mathChoice();

void Math::mathPlus(){
	
	Randomizer num;
	Score count;

	do{
	cout<<"How many sessions? (max 5) "; cin>>session;
	}while(session<0 || session>5);
	
	for(int i=0; i<session; i++)
	{
	int c= num.setA()+num.setB();
	if(num.setA()<1000){cout<<" ";} cout<< num.setA() <<endl;
	if(num.setB()<1000){cout<<" ";}cout<< num.setB() <<endl;
	cout<<"----- +" <<endl; 
	cin>> answer;
	
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"OH JOY!" <<endl;
	}
	else if (answer==c && num.setA()%3==0){
		cout<<"THE INTERNET SALUTES YOU!" <<endl;
	}
	else if (answer==c && num.setA()%7==0){
		cout<<"YOU MADE IT LOOK EASY!" <<endl;
	}
	else if (answer!=c && num.setA()%7==0){
		cout<< "I NEVER HAD FAITH IN YOU, THE ANSWER IS " << c <<endl;
	}
	else{cout<< "I AM DISAPPOINTED, THE ANSWER IS " << c <<endl;
	}
}
	mathChoice();
}

/*
void Math::mathMinus(){
	
	int c= a-b;
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- -" <<endl; 
	cin>> answer;
	
//	count.scoreCount(c, answer);
//	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"EASY AIN'T IT?" <<endl;
	}
	else if (answer==c && a%3==0){
		cout<<"EVERYTHING MAKES SENSE NOW!" <<endl;
	}
	else if (answer==c && a%7==0){
		cout<<"I KNOW THIS ISN'T YOUR FIRST TIME!" <<endl;
	}
	else if (answer!=c && a%3==0){
		cout<<"AND I THOUGHT MY JOKES WERE BAD! THE ANSWER IS " << c <<endl;
	}
	else{cout<< "YOUR MATH TEACHERS ARE ASHAMED! THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}


void Math::mathMulti(){
	
	int c= x*y;
	if(x<100){cout<<" ";} cout<< x <<endl;
	if(y<100){cout<<" ";}cout<< y <<endl;
	cout<<"----- x" <<endl; 
	cin>> answer;
	
//	count.scoreCount(c, answer);
//	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"YOUR LIFE HAS MEANING AGAIN!" <<endl;
	}
	else if (answer==c && x%5==0){
		cout<<"*SLOW CLAP*" <<endl;
	}
	else if (answer==c && c%3==0){
		cout<<"YOU'RE THE MAN(OR WOMAN, IT DEPENDS) NOW!" <<endl;
	}
	else if (answer!=c && y%3==0){
		cout<<"YOU WANT ROASTS WITH THAT? THE ANSWER IS " << c <<endl;
	}
	else{cout<< "MAYBE YOU PREFER CARD GAME? THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}

void Math::mathDivid(){
	int c= y/x;
	if(y<100){cout<<" ";} cout<< y <<endl;
	cout<<"-----" <<endl; 
	if(x<100){cout<<" ";}cout<< x <<endl
	<<"= ";
	
	cin>> answer;
	
//	count.scoreCount(c, answer);
//	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"YOUR BRAIN HAS EVOLVED!" <<endl;
	}
	else if (answer==c && x%5==0){
		cout<<"YOU GOT THE TOUCH!" <<endl;
	}
	else if (answer==c && c%9==0){
		cout<<"ARE YOU STILL SINGLE?" <<endl;
	}
	else if (answer!=c && x%5==0){
		cout<<"MY BUM IS ITCHY... THE ANSWER IS " << c <<endl;
	}
	else{cout<< "HELLO DARKNESS, MY OLD FRIEND. THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}
*/
void mathChoice(){
	
	Math game;
	
	int problem;
	
	cout<<"MeTH GENERATOR" <<endl <<"1.(+)		2.(-)		3.(X)		4. (/) IGNORE DECIMALS" <<endl;
	cout<<"Make a choice: "; cin>>problem;
	switch(problem){
		case 1 : game.mathPlus();break;
//		case 2 : game.mathMinus();break;
//		case 3 : game.mathMulti();break;
//		case 4 : game.mathDivid();break;
	}

}

int main(){
	
	mathChoice();
	
	return 0;
}
