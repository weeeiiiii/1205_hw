#include <stdio.h>

struct card {
   char *face; /* 定義指標 face，用於存儲牌的點數 */
   char *suit; /* 定義指標 suit，用於存儲牌的花色 */
};

int main(void)
{
    struct card aCard;      /* 定義結構變數 aCard */
    struct card *cardPtr;   /* 定義一個指向結構的指標 cardPtr */

    aCard.face = "Ace";   /* 將 "Ace" 賦值給 aCard 的 face 成員 */
    aCard.suit = "Spades"; /* 將 "Spades" 賦值給 aCard 的 suit 成員 */

    cardPtr = &aCard; /* 將 aCard 的地址賦值給指標 cardPtr */

    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
       cardPtr->face, " of ", cardPtr->suit,
       (*cardPtr).face, " of ", (*cardPtr).suit);
       
    return 0;
}