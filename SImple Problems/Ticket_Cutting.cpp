#include<iostream>
using namespace std;

class CustomerDetails{
    protected:
        string cusName;
        string cusTelNum;
        string cusNationalId;

    public:
    void setCusName(string name){
        cout<<"Enter name : ";
        cin>>cusName;
    }
    void setCusTelNum(string num){
        cout<<"Enter Phone : ";
        cin>>cusTelNum;
    }
    void setCusId(string id){
        cout<<"Enter ID : ";
        cin>>cusNationalId;
    }
    void displayCusDetails(){
        cout<<"Name: "<<cusName<<endl;
        cout<<"Phone: "<<cusTelNum<<endl;
        cout<<"ID no: "<<cusNationalId<<endl;
    }
};

class JourneyDetails{
protected:
    string travelDate;
    string travelTo;
    string travelForm;
    int distance = 0;

public:
    void setTravelDate(string date){
        cout<<"Enter travel date : ";
        cin>>travelDate;
    }
    void setTravelTo(string trTo){
        cout<<"Journey to : ";
        cin>>travelTo;
    }
    void setTravelFrom(string trFr){
        cout<<"Journey from : ";
        cin>>travelForm;
    }
    int setDistance(int distance){
        cout<<"Enter distance : ";
        cin>>distance;
        return distance;
    }
    void showJournyDetails(){
        cout<<"Travel Date : "<<travelDate<<endl;
        cout<<"Journey from : "<<travelForm<<endl;
        cout<<"Journey to : "<<travelTo<<endl;
        cout<<"Distance : "<<distance<<endl;
        cout<<"Per km = 5 taka"<<endl;
        cout<<"Before charge cost : "<<distance * 5<<endl;
    }
};

class TicketIssue: public JourneyDetails, public CustomerDetails{
protected:
    float ticketPrice = 0.00;
    float chrg = 0.00;

public:

    void printTicket(){


        CustomerDetails cus;
        string name, num, id;
        cus.setCusName(name);
        cus.setCusTelNum(num);
        cus.setCusId(id);


        JourneyDetails js;
        string date, trTo, trFr;
        int distance;
        js.setTravelDate(date);
        js.setTravelTo(trTo);
        js.setTravelFrom(trFr);
        js.setDistance(distance);


        cus.CustomerDetails :: displayCusDetails();
        js.JourneyDetails :: showJournyDetails();


        ticketPrice = distance * 5;

        if(distance < 101){
            chrg = ticketPrice * .2 ;
            cout<<"After charge "<< chrg <<endl;
        }
        else if( distance >=  101 &&  distance < 200){
            chrg = ticketPrice * .1 ;
            cout<<"After charge "<< chrg <<endl;
        }
        else if( distance <=  200){
            chrg = ticketPrice;
            cout<<"After charge "<< chrg <<endl;
        }

        cout<<"---------------End of ticket-------------------"<<endl;


    }
};

int main(){

        TicketIssue cus1, cus2;
        cus1.printTicket();

}
