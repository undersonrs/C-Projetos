#include <iostream>

using namespace std;

class Carros
{
public:
int ano, km;
string placa, modelo, marca;

bool aceleracao, motor;

void LigarMotor()
{
    motor = true;
    cout << "Motor do veiculo foi ligado" << endl;
}

void DesligarMotor()
{
    motor = false;
    cout << "Motor do veiculo foi desligado" << endl;
}

void Acelerar()
{
    if (motor == true)
    {
        cout << "Comando de aceleracao recebido!" << endl;    
        cout << "Motor do veiculo esta ligado, pode iniciar a aceleracao!" << endl;
    }
    else
    {
        cout << "Comando de aceleracao recebido!" << endl;    
        cout << "Nao sera possivel acelerar pois o motor esta desligado!" << endl;
    }
}

};

int main()
{
Carros meuIdea;
meuIdea.ano = 2012;
meuIdea.km = 112000;
meuIdea.marca = "Fiat";
meuIdea.modelo = "Idea";

cout << meuIdea.ano << endl;
cout << meuIdea.km << endl;
cout << meuIdea.marca << endl;
cout << meuIdea.modelo << endl;

meuIdea.LigarMotor();

meuIdea.Acelerar();

}