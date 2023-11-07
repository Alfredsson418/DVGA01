#include <stdio.h>

/*
Caesarchiffret har fått sitt namn för att hedra Julius Caesar som var en flitig användare av krypterade meddelanden. Han använde chiffret för att kommunicera med Cicero och andra vänner i Rom samt för militära ändamål. Det första exemplet på substitutionschiffer i krigföring finns i Julius Caesars skildring av fälttågen i Gallien.

För att avkoda den här varianten av Caesarskiffer så flyttar man alla bokstäver 3 steg bakåt i alfabetet. Se "Sample Input/Output" för exempel.

I den här uppgiften så har du fått tag på ett medelande skickat av Julius Caesar till X, men Y vill ta reda på vad som står i meddelandet. Du ska skriva ett program till Y som avkodar ett medelande kryptrerat med caesarskiffer, och skriva ut det i vanlig text. Meddelandena är maximalt 100 tecken långa, innehåller bara versaler och inga mellanslag. 
*/

int main() {

    char list[101];

    scanf("%s", list);

    for(int i = 0; i < 100; i++) {

        if (list[i] <= 90 && list[i] >= 65) {
            list[i] -= 3;
            if (list[i] < 65) {
                list[i] += 26;
            }
        }
        
    }

    printf("%s", list);

}