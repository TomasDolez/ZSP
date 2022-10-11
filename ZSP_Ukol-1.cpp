// ZSP_Ukol-1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

void u1_1()
{
    int count_of_items = 0;
    int price_for_item_wo_vat = 0;
    const float vat = 0.2;

    printf("Zadej pocet kusu a cenu bez DPH\n");
    printf("Format:\n");
    printf("Pocet Cena\n");
    scanf("%d %d", &count_of_items, &price_for_item_wo_vat);
    int price_of_item_with_vat = price_for_item_wo_vat + (price_for_item_wo_vat * vat);
    printf("Cena bez DPH/ks %d Kc\tCena s DPH/ks %d Kc\n", price_for_item_wo_vat, price_of_item_with_vat);
    printf("Pocet kusu: %d\tCena bez DPH %d Kc\tCena s DPH (20 %%) %d Kc\n",count_of_items, count_of_items*price_for_item_wo_vat,count_of_items * price_of_item_with_vat);
}

void u1_2()
{
    const float pass_average = 1.5;
    int marks[5] = {0,0,0,0,0};
    printf("Zadej 5 znamek");
    printf("Format:\n");
    printf("z1 z2 z3 z4 z5\n");
    scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    printf("Znamky: %d\t%d\t%d\t%d\t%d\n",marks[0], marks[1], marks[2], marks[3], marks[4]);
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += marks[i];
    }
    float average = (float)sum / 5;
    printf("%.2f\n", average);
    bool failed = false;
    bool passed = false;
    bool passed_with_distinction = true;
    for (int i = 0; i < 5; i++){
        if(marks[i] == 5)
            failed = true;
        else if(marks[i] > 2 || average > pass_average)
            passed = true;
    }
    if (failed){
        printf("Prospel s vyznamenanim: Ne\n");
        printf("Prospel: Ne\n");
        printf("Neprospel: Ano\n"); 
    }else if (passed){
        printf("Prospel s vyznamenanim: Ne\n");
        printf("Prospel: Ano\n");
        printf("Neprospel: ne\n"); 
    } else {
        printf("Prospel s vyznamenanim: Ano\n");
        printf("Prospel: Ne\n");
        printf("Neprospel: Ne\n"); 
    }
}

void u1_3()
{
    char currency[4] = "";
    float course = 0.0;
    int count = 0;
    printf("Zadedej menu, kurz a pocet meny\n");
    printf("Format:\n");
    printf("Mena Kurz Pocet\n");
    scanf("%s %f %d", currency, &course, &count);
    printf("1 %s = %f Kc\n", currency, course);
    printf("Nakup: %d %s\n", count, currency);
    printf("Celkem: %d x %f = %.1f Kc Zaokrouhleno: %d Kc\n", count, course, course * count, (int)round(course * count));
}


int main()
{
    printf("Tomas Dolezal\ndolez117\n07-Oct-2022\n");
    u1_1();
    u1_2();
    u1_3();
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
