#include <iostream>

using namespace std;


struct Monkey{

    void makeAnnoyingNoises(){
        cout<<"EEEEEEEEK... HERE TO RUIN YOUR DAY..."<<endl;
    }

};

struct Hamnah : Monkey{

    int bankBalance;

    void speak(){
        cout<<"Im the monkey Hamnah! Others know me as hominind!"<<endl;
    }

    void startEating(int* matchas){
        // input is number of matches given
        // return how much matchas homind ate
        cout<<"What the... why so many mathces.."  <<*matchas<<"  matchas to be exact.."<<"Im going to eat them all!!"<<endl;
        
        int moneyUsed  = *matchas * 8;
        bankBalance -= moneyUsed;
        cout<<"Just spent $"<<moneyUsed<<" on useless matchas.. My bank account is now at $"<<bankBalance<<endl;
        *matchas = 0;
        cout<<"I now only have "<<*matchas<<" left 😢"<<endl;
        
    }

    // return the number of hours scrolled on social media today
    int scroll(){
       
        return 1000*5;


    }




    void spendMoney(){
        cout<<"Hey friends! God gave me money to spend! We only live once, never save..."<<endl;
        bankBalance -= 900;
        cout<<"I now have "<<bankBalance<<" dollars"<<endl;
    }


    void sleep(int freeTime){
        cout<<"Phew, that was a lot of work for the day, lots of eating, MOTW, and scrolling, time to sleep!!"<<endl;
        cout<<"Just slept for "<<freeTime<<" hours!😴"<<endl;
    }

    void askForLoan(){
        cout<<"Im begging you guys!! I need this! I never make financially irresponsible decisions, I'll pay it back in two weeks!!"<<endl;
        
        if(bankBalance < 0){
            bankBalance = -bankBalance;
            cout<<"Uzair says... fine... I'll give you $"<< bankBalance<<endl;
        }
        else{
        cout<<"Dad says... fine, I'll give you $20"<<endl;
        bankBalance += 20;
        }
    
    }

};

int main(){

    Hamnah planetEarthHomind;
    planetEarthHomind.bankBalance = 901;

    planetEarthHomind.makeAnnoyingNoises();
    cout<<endl;
    planetEarthHomind.speak();
    cout<<endl;
    int matchas;

    matchas = 30;
    planetEarthHomind.startEating(&matchas);
    cout<<endl;
    planetEarthHomind.spendMoney();
    cout<<endl;

    if(planetEarthHomind.bankBalance < 1000){
        planetEarthHomind.askForLoan();
    }
    cout<<endl;

    cout<<"Scrolled for "<<planetEarthHomind.scroll()<<" hours📱"<<endl;
    cout<<endl;
    planetEarthHomind.sleep(9);
    cout<<endl;

   

    




}