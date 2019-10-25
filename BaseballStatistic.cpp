#include "BaseballStatistic.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

BaseballStatistic::BaseballStatistic()
{
    
}
BaseballStatistic::BaseballStatistic(string, string, string, int, string,int, int, int, char, char, int, double, int,int, int, double, double)
{
    
}
	

void BaseballStatistic::setFirstName(std::string);
void BaseballStatistic::setLastName(std::string);
		void BaseballStatistic::setTeamName(std::string);
		void BaseballStatistic::setJerseyNum(int);
		void BaseballStatistic::setPosition(std::string);
		void BaseballStatistic::setBatting(char);
		void BaseballStatistic::setThrowing(char);
		void BaseballStatistic::setAtBats(int);
		void BaseballStatistic::setBattingAverage(double);
		void BaseballStatistic::setHR(int);
		void BaseballStatistic::setRBI(int);
		void BaseballStatistic::setSB(int);
		void BaseballStatistic::setOPS(double);
		void BaseballStatistic::setERA(double);
		
		
		//accessor
		std::string getFirstName()const;
		std::string getLastName()const;
		std::string getTeamName()const;
		int getJerseyNum()const;
		std::string getPosition()const;
		int getAge()const;
		char getBatting()const;
		char getThrowing()const;
		int getAtBats()const;
		double getBattingAverage()const;
		int getHR()const;
		int getRBI()const;
		int getSB()const;
		double getOPS()const;
		double getERA()const;
		
		//prints a single statistic row to the terminal
		void print()const;
		
		
};

#endif
