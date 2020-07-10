/******************************************************************************

We needs to find the number of indices i (1≤i≤N−11≤i≤N−1) 
such that the i-th character of this string is a consonant and the i+1th character is a vowel. 

*******************************************************************************/

#include <stdio.h>

int VC(char S[],int N)
    {
    	int j=0,p=0;

    for(j=0;j<N-1;j++)
			{
				if ((S[j+1] == 'a' || S[j+1] == 'e' || S[j+1] == 'i' || S[j+1] == 'o' || 
				S[j+1] == 'u')&&(S[j] != 'a' || S[j] != 'e' || S[j] != 'i' || S[j] != 'o' || S[j] != 'u'))		
						p++;		
			} 
		return (p);
       	
    }

int main(){
	int T,i,N;
	char S[150];
	int t=0,p;
	scanf("%d", &T);              		
	for(i=0;i<T;i++)  
		{
			scanf("%d", &N);              			
			scanf("%s", &S); 
			if(N>1)
			{
			    p=(VC(S,N));
				printf("%d\n",p);
			}
			else
			    printf("%d\n",t);
		}    
}