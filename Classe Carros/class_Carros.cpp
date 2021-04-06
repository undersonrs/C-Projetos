#include <iostream>

using namespace std;

class Carros
{
public:

// para definicao de um construtor sempre sera necessario cria-lo na parte publica da classe e com a mesma nomenclatura da classe.

int ano, km;

string placa, modelo, marca;

bool aceleracao, motor;

Carros (string mar, string mod, string pla)
{
marca = mar;
modelo = mod;
placa = pla;
}

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

void inserirAno(int a)
{
    ano = a;
}

void inserirKm(int k)
{
    km = k;
}

void Documentos()
{
    cout << "Documentacao do Veiculo" << endl;
    cout << marca  << endl;
    cout << modelo << endl;
    cout << placa << endl;
    cout << ano << endl;

}

};

int main()
{
Carros meuIdea("Fiat", "Idea", "Ezi0818");

meuIdea.inserirAno(2012);
meuIdea.inserirKm(112000);


cout << meuIdea.marca << endl;
cout << meuIdea.modelo << endl;

cout << meuIdea.ano << endl;
cout << meuIdea.km  << endl;

meuIdea.LigarMotor();

meuIdea.Acelerar();

meuIdea.Documentos();

}