#include <iostream>
#include <string>

using namespace std;

class World{

private:
    string _name;

public:

    //World();
    //~World();
    void sayIt();
    void setName(string value);

};

void World::setName(string value){

    _name = value;

}
void World::sayIt(){

    cout << "Hello " << _name << "!" <<  endl;
}

int main()
{


    World objeto;


    objeto.setName("teste");
    objeto.sayIt();
    return 0;
}
