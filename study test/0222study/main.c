#include <stdio.h>

#define RANGE 50

int main()
{
	int prime[RANGE + 1];

	// 일단 전부 소수로 가정한다.
	for (int i=1; i<=RANGE; i++){
    prime[i]=i;
    printf("%d\n", prime[i]);
    }
	// 2부터 배수를 찾아 지운다.
   for (int h=1; h<=RANGE; h++){
       if (h%2 == 0){
           prime[h]=0;
       }
   }
   //3의 배수를 찾아서 지운다
   for (int l=4; l<=RANGE; l++){
       if(l%3 ==0){
           prime[l]=0;
       }
   }

   for (int l=6; l<=RANGE; l++){
       if(l%5 ==0){
           prime[l]=0;
       }
   }
   for (int l=8; l<=RANGE; l++){
       if(l%7 ==0){
           prime[l]=0;
       }
   }

	
	// 남은 소수 출력
	printf("%d까지의 소수만 출력\n", RANGE);
    for (int k =2; k<=RANGE; k++){
        if (prime[k]){
            printf("%d ", k);

            
		}
	}
}

/*int main()
{
	char song[] = "by the rivers of babylon, there we sat down"
		"yeah we wept, when we remember zion."
		"when the wicked carried us away in captivity"
		"required from us a song"
		"now how shall we sing the lord's song in a strange land";
	int alpha[26] = { 0, };  

    for (int i=0; i<=sizeof(song); i++){
        if (song[i]>='a' && song[i]<='z')
        alpha[song[i]-'a']++;
    }



   for (int c='a'; c<='z'; c++)
   printf("%c - %d개\n", c, alpha[c-'a']);

}*/