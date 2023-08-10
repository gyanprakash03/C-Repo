#include <stdio.h>
//unit converter
int km_to_miles (int km) {
    float miles = (float) km/0.621371;
    printf("--> %d KMs is equal to %f miles\n\n",km,miles);
    return miles; 
}

int inches_to_feet (int inches) {
    float feet = (float) inches/12.000000;
    printf("--> %d Inches is equal to %f feet\n\n",inches,feet);
    return feet;
}

int cm_to_inches (int cm) {
    float inches = (float) cm/2.540000;
    printf("--> %d CMs is equal to %f Inches\n\n",cm,inches);
    return inches;
}

int pound_to_kg (int pound) {
    float kgs = (float) pound*0.453592;
    printf("--> %d Pounds is equal to %f kgs\n\n",pound,kgs);
    return kgs;
}

int inches_to_metres (int inches) {
    float metres = (float) inches*0.0254;
    printf("--> %d Inches is equal to %f metres\n\n",inches,metres);
    return metres;
}

void main()
{
    int unit;
    int value;
    start:
    printf(" WHICH UNIT DO YOU WANT TO CONVERT ?\n");
    printf("> KMs to miles  [press 1]\n");
    printf("> Inches to Feet  [press 2]\n");
    printf("> CMs to Inches  [press 3]\n");
    printf("> Pound to KGs  [press 4]\n");
    printf("> Inches to Metres  [press 5]\n");
    scanf("%d",&unit);
    printf("Enter the value\n");
    scanf("%d",&value);
    switch (unit)
    {
    case 1:
        km_to_miles(value);
        break;
    case 2:
        inches_to_feet(value);
        break;
    case 3:
        cm_to_inches(value);
        break;
    case 4:
        pound_to_kg(value);
        break;
    case 5:
        inches_to_metres(value);
        break;
    default:
        printf("Error : invalid entry\n\n");
        break;
    }
    char entry;
    enter:
    scanf("%c",&entry);
    switch (entry)
    {
    case 'q':
        break;
    case 'r':
        goto start;
        break;
    default:
        printf("press 'q' to quit or press 'r' to restart\n");
        goto enter;
        break;
    }
    
}
