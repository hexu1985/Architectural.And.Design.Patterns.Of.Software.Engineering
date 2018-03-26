#include "company.h"
#include "clerk.h"
#include "teamleader.h"

Company::Company() {
    initializeSampleData();
}


void Company::initializeSampleData() {
    std::vector<std::shared_ptr<Employee>> team1;
    team1.push_back(std::make_shared<Clerk>("Markus", "Mueller", 48200.0f));
    team1.push_back(std::make_shared<Clerk>("Silvia", "Neustedt", 45500.0f));

    std::vector<std::shared_ptr<Employee>> team2;
    team2.push_back(std::make_shared<Clerk>("Alexandra", "Weiss", 37120.0f));
    team2.push_back(std::make_shared<Clerk>("Micheal", "Kienzle", 35500.0f));

    auto leader1 = std::make_shared<Teamleader>("Frank", "Hirschle", 40000.0f, 400.0f, "Team 1");
    auto leader2 = std::make_shared<Teamleader>("Corinna", "Steib", 35000.0f, 350.0f, "Team 2");

    personnel.push_back(leader1);
    personnel.push_back(leader2);
    personnel.insert(personnel.end(), team1.begin(), team1.end());
    personnel.insert(personnel.end(), team2.begin(), team2.end());
}

std::vector<std::shared_ptr<Employee>> Company::getPersonnel() {
    return personnel;
}

