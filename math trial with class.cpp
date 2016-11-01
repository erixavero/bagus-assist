#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Randomizer{
	
	int a;
	int b;
	int x;
	int y;

public: 
	int setA(){
	this->a= rand()%900+536;
	return a;
	}
	
	int getA(){
		return a;
	}
	
	int setB(){
	this->b= rand()%900+284;
	return b;
	}
	
	int getB(){
		return b;
	}
	
	int setX(){
	this->x= rand()%861+49;
	return x;
	}
	
	int getX(){
		return x;
	}
	
	int setY(){
	this->y= rand()%617+70;
	return y;
	}
	
	int getY(){
		return y;
	}
};

class Score{
	int score= 0;

public:
	void scoreCount(int c, int answer){
		if(c == answer)
			this->score = score+1;
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
	if(num.getA()<1000){cout<<" ";}cout<< num.getA() <<endl;
	if(num.getB()<1000){cout<<" ";}cout<< num.getB() <<endl;
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


void Math::mathMinus(){
	
	Randomizer num;
	Score count;

	do{
	cout<<"How many sessions? (max 5) "; cin>>session;
	}while(session<0 || session>5);
	
	for(int i=0; i<session; i++)
	{
	int c= num.setA()+num.setB();
	if(num.getA()<1000){cout<<" ";}cout<< num.getA() <<endl;
	if(num.getB()<1000){cout<<" ";}cout<< num.getB() <<endl;
	cout<<"----- -" <<endl; 
	cin>> answer;
	
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"EASY AIN'T IT?" <<endl;
	}
	else if (answer==c && num.setA()%3==0){
		cout<<"EVERYTHING MAKES SENSE NOW!" <<endl;
	}
	else if (answer==c && num.setA()%2==0){
		cout<<"I KNOW THIS ISN'T YOUR FIRST TIME!" <<endl;
	}
	else if (answer!=c && num.setB()%3==0){
		cout<<"AND I THOUGHT MY JOKES WERE BAD! THE ANSWER IS " << c <<endl;
	}
	else{cout<< "YOUR MATH TEACHERS ARE ASHAMED! THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}
}

void Math::mathMulti(){
	
	Randomizer num;
	Score count;

	do{
	cout<<"How many sessions? (max 5) "; cin>>session;
	}while(session<0 || session>5);
	
	for(int i=0; i<session; i++)
	{
	int c= num.setX()+num.setY();
	if(num.getX()<1000){cout<<" ";}cout<< num.getX() <<endl;
	if(num.getY()<1000){cout<<" ";}cout<< num.getY() <<endl;
	cout<<"----- x" <<endl; 
	cin>> answer;
	
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"YOUR LIFE HAS MEANING AGAIN!" <<endl;
	}
	else if (answer==c && num.setX()%5==0){
		cout<<"*SLOW CLAP*" <<endl;
	}
	else if (answer==c && num.setY()%3==0){
		cout<<"YOU'RE THE MAN(OR WOMAN, IT DEPENDS) NOW!" <<endl;
	}
	else if (answer!=c && num.setX()%3==0){
		cout<<"YOU WANT ROASTS WITH THAT? THE ANSWER IS " << c <<endl;
	}
	else{cout<< "MAYBE YOU PREFER CARD GAME? THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}
}

void Math::mathDivid(){

	Randomizer num;
	Score count;
	
	do{
	cout<<"How many sessions? (max 5) "; cin>>session;
	}while(session<0 || session>5);

	int c= num.setY()/num.setX();
	if(num.getY()<100){cout<<" ";} cout<<num.getY() <<endl;
	cout<<"-----" <<endl; 
	if(num.getX()<100){cout<<" ";}cout<<num.getX() <<endl
	<<"= ";
	
	cin>> answer;
	
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"YOUR BRAIN HAS EVOLVED!" <<endl;
	}
	else if (answer==c && num.setX()%5==0){
		cout<<"YOU GOT THE TOUCH!" <<endl;
	}
	else if (answer==c && c%2==0){
		cout<<"ARE YOU STILL SINGLE?" <<endl;
	}
	else if (answer!=c && num.setY()%5==0){
		cout<<"MY BUM IS ITCHY... THE ANSWER IS " << c <<endl;
	}
	else{cout<< "HELLO DARKNESS, MY OLD FRIEND. THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}

void mathChoice(){
	
	Math game;
	
	int problem;
	
	cout<<"MeTH GENERATOR" <<endl <<"1.(+)		2.(-)		3.(X)		4. (/) IGNORE DECIMALS" <<endl;
	cout<<"Make a choice: "; cin>>problem;
	switch(problem){
		case 1 : game.mathPlus();break;
		case 2 : game.mathMinus();break;
		case 3 : game.mathMulti();break;
		case 4 : game.mathDivid();break;
	}

}

int main(){
	
	srand(time(0));
	
	mathChoice();
	
	return 0;
}
