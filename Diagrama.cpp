#include <iostream>
#include <string>

using namespace std;

// =======================
// Clase Base: Persona
// =======================
class Persona {
protected:
    string cui;
    string nombres;
    string apellidos;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    bool genero; // true = masculino, false = femenino

public:
    // Constructor
    Persona() {
        cui = "";
        nombres = "";
        apellidos = "";
        direccion = "";
        telefono = 0;
        fecha_nacimiento = "";
        genero = true;
    }

    // Métodos CRUD
    void crear() {
        cout << "Ingrese CUI: ";
        cin >> cui;

        cout << "Ingrese nombres: ";
        cin >> nombres;

        cout << "Ingrese apellidos: ";
        cin >> apellidos;

        cout << "Ingrese direccion: ";
        cin >> direccion;

        cout << "Ingrese telefono: ";
        cin >> telefono;

        cout << "Ingrese fecha de nacimiento: ";
        cin >> fecha_nacimiento;

        cout << "Genero (1=Masculino, 0=Femenino): ";
        cin >> genero;
    }

    void leer() {
        cout << "\n--- Datos de Persona ---" << endl;
        cout << "CUI: " << cui << endl;
        cout << "Nombres: " << nombres << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Fecha Nacimiento: " << fecha_nacimiento << endl;
        cout << "Genero: " << (genero ? "Masculino" : "Femenino") << endl;
    }

    void actualizar() {
        crear();
    }

    void borrar() {
        cui = "";
        nombres = "";
        apellidos = "";
        direccion = "";
        telefono = 0;
        fecha_nacimiento = "";
        genero = true;

        cout << "Datos borrados correctamente.\n";
    }
};

// =======================
// Clase Derivada: Docente
// =======================
class Docente : public Persona {
private:
    string codigo;
    string nit;
    float salario;
    string profesion;

public:
    // Constructor
    Docente() {
        codigo = "";
        nit = "";
        salario = 0.0;
        profesion = "";
    }

    // Setter
    void setDatosDocente(string c, string n, float s, string p) {
        codigo = c;
        nit = n;
        salario = s;
        profesion = p;
    }

    // Getter
    string getCodigo() { return codigo; }
    string getNit() { return nit; }
    float getSalario() { return salario; }
    string getProfesion() { return profesion; }

    // Leer
    void leer() {
        Persona::leer();
        cout << "--- Datos de Docente ---" << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "NIT: " << nit << endl;
        cout << "Salario: " << salario << endl;
        cout << "Profesion: " << profesion << endl;
    }

    void ingresarDocente() {
        crear(); // datos de persona

        cout << "Ingrese codigo: ";
        cin >> codigo;

        cout << "Ingrese NIT: ";
        cin >> nit;

        cout << "Ingrese salario: ";
        cin >> salario;

        cout << "Ingrese profesion: ";
        cin >> profesion;
    }
};

// =======================
// Clase Derivada: Estudiante
// =======================
class Estudiante : public Persona {
private:
    string carnet;

public:
    // Constructor
    Estudiante() {
        carnet = "";
    }

    // Setter
    void setCarnet(string c) {
        carnet = c;
    }

    // Getter
    string getCarnet() {
        return carnet;
    }

    // Leer
    void leer() {
        Persona::leer();
        cout << "--- Datos de Estudiante ---" << endl;
        cout << "Carnet: " << carnet << endl;
    }

    void ingresarEstudiante() {
        crear(); // datos de persona

        cout << "Ingrese carnet: ";
        cin >> carnet;
    }
};

// =======================
// MAIN
// =======================
int main() {

    Docente d;
    Estudiante e;

    cout << "\n--- INGRESAR DOCENTE ---\n";
    d.ingresarDocente();
    d.leer();

    cout << "\n--- INGRESAR ESTUDIANTE ---\n";
    e.ingresarEstudiante();
    e.leer();

    return 0;
}