#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Car {
    char brand[50];       
    char manufacturer[50];
    char type[50];        
    int year;             
    int reg_year;         
};

int main() {
    setlocale(LC_ALL, "RUS"); 

  
    struct Car cars[6] = {
        { "Toyota", "Toyota Motor Corp", "Седан", 2005, 2006 },
        { "BMW", "BMW AG", "Внедорожник", 2008, 2008 },
        { "Toyota", "Toyota Motor Corp", "Кроссовер", 2010, 2011 },
        { "Toyota", "Toyota Motor Corp", "Хэтчбек", 2004, 2005 },
        { "Audi", "Audi AG", "Универсал", 2006, 2007 },
        { "Toyota", "Toyota Motor Corp", "Седан", 2006, 2008 }
    };

    int count = 6; 

    printf("--- Сведения о машинах марки 'Toyota' , зарегистрированных до 2007 года--- \n\n");

    
    int found = 0; 
    for (int i = 0; i < count; i++) {
       
        if (strcmp(cars[i].brand, "Toyota") == 0 && cars[i].reg_year < 2007) {

         
            printf("Марка: %s\n", cars[i].brand);
            printf("Производитель: %s\n", cars[i].manufacturer);
            printf("Тип: %s\n", cars[i].type);
            printf("Год выпуска: %d\n", cars[i].year);
            printf("Год регистрации: %d\n", cars[i].reg_year);
            printf("----------------------------------------\n");

            found = 1;
        }
    }

    
    if (!found) {
        printf("Машин с такими параметрами не найдено.\n");
    }

    return 0;
}