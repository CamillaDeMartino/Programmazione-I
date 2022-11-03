#include <stdio.h>
#include "Header.h"

Studente aggiorna_carriera(Studente stud, int pos_exam, int voto)
{
    stud.libretto[pos_exam - 1] = voto;
    return stud;
}
