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
	

			

		
		//mutator
		void setFirstName(std::string);
		void setLastName(std::string);
		void setTeamName(std::string);
		void setJerseyNum(int);
		void setPosition(std::string);
		void setBatting(char);
		void setThrowing(char);
		void setAtBats(int);
		void setBattingAverage(double);
		void setHR(int);
		void setRBI(int);
		void setSB(int);
		void setOPS(double);
		void setERA(double);
		
		
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
