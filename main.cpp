#include <iostream>
#include "CubicBezier.hpp"
#include "Point.hpp"

using namespace std;

int main() {

    //Mit den folgenden Methoden aufrufen erzeugen wir 4 Kontrollpunkte mit jeweils einem X und einem Y Punkt.
    CubicBezier bezier;
    bezier.setPoint(0, Point(0, 0));
    bezier.setPoint(1, Point(1, 4));
    bezier.setPoint(2, Point(5, 6));
    bezier.setPoint(3, Point(7, 0));

    //Für die weitere Berechnung erstellen wir zwei Segmente mit den Eigenschaften von CubicBezier
    CubicBezier segment1;
    CubicBezier segment2;

    //Methode in der Klasse bezier wird mit den zwei Segmenten mit den Punkten übergeben. Der T Wert gibt die Gewichtung der Punkte an.
    bezier.Subdivide((float)0.5, &segment1, &segment2);

    //Ausgabe für alle errechneten Werte.
    cout << endl << "Segment 1" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Punkt" << i << ": " << segment1.points[i].m_x << "  " << segment1.points[i].m_y << endl;
    }

    cout << "Segment 2" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Punkt" << i << ": " << segment2.points[i].m_x << "  " << segment2.points[i].m_y << endl;
    }


    cout << endl << "subDivMatrix für die rechte Hälfte" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Stelle " << i << " " << "x: " << bezier.subDivMatrix1[i].m_x << "Y: " << bezier.subDivMatrix1[i].m_y << endl;
    }

    cout << "subDivMatrix für die linke Hälfte" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Stelle " << i << " " << "x: " << bezier.subDivMatrix2[i].m_x << "Y: " << bezier.subDivMatrix1[i].m_y << endl;
    }

    return 0;
}


