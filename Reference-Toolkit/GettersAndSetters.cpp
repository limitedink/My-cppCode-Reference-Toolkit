#include <iostream>

class Stove{
    private:
        double temperature = 0.0;

    public:
    //if you have a constructor you can invoke the setters within the contructor
    Stove(double temperature){
        setTemperature(temperature);
    }

    double getTemperature(){
        return temperature;
    }
    void setTemperature(double temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature > 31){
            this->temperature = 31;
        }
        else{
            this->temperature = temperature;
        }
    }
    // can set limits to ur setter (add additional checks and logic)
};

int main()
{
    //Abstraction = hiding unnecessary data from outside a class
    //getter = function that makes a private attribute READABLE
    //setter = function that makes a private attribute WRITABLE

    Stove stove(21.5);

    //stove.temperature = 10000000;

    //stove.setTemperature(21.5);

    std::cout << "The temperature setting is: " << stove.getTemperature() << "c";
    return 0;
}