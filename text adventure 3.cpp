#include
#include

using namespace std;

int main()
{
string name;
int choice;
}
cout << "Willkommen zu unserem Abenteuer!" << endl;
cout << "Wie ist dein Name?" << endl;
cin >> name;

cout << "Hallo " << name << ", du wachst in einem dunklen Raum auf." << endl;
cout << "Du siehst eine Tür und ein Fenster." << endl;
cout << "Was möchtest du tun?" << endl;
cout << "1. Die Tür öffnen" << endl;
cout << "2. Durch das Fenster schauen" << endl;
cin >> choice;

if (choice == 1)
{
    cout << "Die Tür ist verschlossen." << endl;
    cout << "Was möchtest du tun?" << endl;
    cout << "1. Nach einem Schlüssel suchen" << endl;
    cout << "2. Die Tür einschlagen" << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "Du findest einen Schlüssel unter dem Bett." << endl;
        cout << "Was möchtest du tun?" << endl;
        cout << "1. Die Tür öffnen" << endl;
        cout << "2. Durch das Fenster schauen" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Du öffnest die Tür und entkommst dem Raum." << endl;
            cout << "Herzlichen Glückwunsch, du hast das Spiel gewonnen!" << endl;
        }
        else if (choice == 2)
        {
            cout << "Du schaust durch das Fenster und siehst nichts Besonderes." << endl;
            cout << "Was möchtest du tun?" << endl;
            cout << "1. Die Tür öffnen" << endl;
            cout << "2. Weiter durch das Fenster schauen" << endl;
            cin >> choice;

            // Hier kannst du weitere Entscheidungen und Handlungen hinzufügen
        }
    }
    else if (choice == 2)
    {
        cout << "Du schlägst die Tür ein und entkommst dem Raum." << endl;
        cout << "Herzlichen Glückwunsch, du hast das Spiel gewonnen!" << endl;
    }
}
else if (choice == 2)
{
    cout << "Du schaust durch das Fenster und siehst nichts Besonderes." << endl;
    cout << "Was möchtest du tun?" << endl;
    cout << "1. Die Tür öffnen" << endl;
    cout << "2. Weiter durch das Fenster schauen und sterben" << endl;
    cin >> choice;

    // Hier kannst du weitere Entscheidungen und Handlungen hinzufügen
}

return 0;
