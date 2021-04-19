#include <string>

using namespace std;

class Player
{
public:                            // these are just the basic stats of the player, still thinking of how to implement the stage/inventory
    void setName(string);
    void health(double);
    void maxHealth();
    void setDamage();
    string getName();
    double getHealth();
    double getMaxHealth();
    int getDamage();
    private:
    string pName;
    double pHealth;
    double pMaxHealth;
    int pDamage;
    int pLevel;
};
