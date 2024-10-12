#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//char bizim_strcat(char b[], char c[])
//int main(){
     // phytonda  bir  kararkteri bir stringe eþitleyebliyorduj mesela ("a" = yazýlým kulübü) bunun gibi ama c de bnun yapamýyoruz bu yüzden string.h a ihtiyaç duyuyoruz

   //char a[10];
  //char a[]="yazilim kulubu";//a nýn bir zii oldugunu söylüyorum koseli parantez ile ardýndan istersem parantezin ýcýn ebir seyler yazarak cýft týrnagýn ývcýndeký jarakter sayýsýný sýnýrlayabýlýrým
  //printf("%s",a);

  //printf("enter your word\n");
  //scanf("%s",&a);

  //printf("%s\n",a);


//strcat,strncat


    /*char b[] ="yazilim";
    char c[] ="kulubu";
    strcat(b,c);
    printf("%s\n",b);*/  //artýk b ve c yi birleþtirdi  ama aralarýnd aboluk olmaycak sekilde ve ayný zamand artýk b nin degeri




    /*char b[] ="yazilim";
    char c[] ="kulubu";
    bizim_strcat(b,c);






}


char bizim_strcat(char b[], char c[]){


 int i;
 int k = strlen(b);
 for(i =0;i<strlen(c);i++){
    b[k = c[i];
    k=k+1;
 } */










// multi-dimensional arrays
// notice the const keyword before the arrays
// they protect our arrays from being updated in the function
void assingArray(int [][10], int, int);
void mulMatrices(const int [][10], const int [][10], int [][10], int, int, int, int);
void displayMatrices(const int [][10], int, int);

int main(void)
{
	// multi-dim arrays
	// the below arrays represent matrices.
	int matA [10][10], matB [10][10], matRes[10][10];
	int rowA, colA, rowB, colB;
	// enter row and column counts for the first matrix
	printf("rowA colA: ");
	scanf("%d%d", &rowA, &colA);
	// for the second
	printf("rowB colB: ");
	scanf("%d%d", &rowB, &colB);
	// will use this for rand function
	srand(time(NULL));
	// randomly fill the arrays
	assingArray(matA, rowA, colA);
	assingArray(matB, rowB, colB);
	// display them
	printf("Matrix A\n");
	displayMatrices(matA, rowA, colA);
	printf("Matrix B\n");
	displayMatrices(matB, rowB, colB);
	// matrix mult.
	mulMatrices(matA, matB, matRes, rowA, colA, rowB, colB);
	printf("Matrix Result\n");
	// display the result
	displayMatrices(matRes, rowA, colB);

	return 0;
}
// assign some random numbers to our array
void assingArray(int mat[][10], int row, int col)
{
	int i, j;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			mat[i][j] = rand() % 2;
		}
	}
}
// mult. matrices
void mulMatrices(const int matA[][10], const int matB[][10], int matRes[][10], int rowA, int colA, int rowB, int colB)
{
	// check if they are eligible for mult.
	if(colA != rowB)
	{
		printf("colA and rowB do not match\n");
		return ;
	}
	int i, j, k;
	// traverse rows of the first matrix
	for(i = 0; i < rowA; i++)
	{
		// traverse the cols of the second matrix
		for(j = 0; j < colB; j++)
		{
			// i,j is the location in the result matrix
			// where we are going to calculate
			matRes[i][j] = 0;
			// note that both colA and rowB are equal
			// we could go up to either of those
			for(k = 0; k < colA; k++)
			{
				// calculation
				matRes[i][j] = matRes[i][j] + matA[i][k] * matB[k][j];
			}
		}
	}
}
// function to display the matrix contents
void displayMatrices(const int mat[][10], int row, int col)
{
	int i, j;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}


















}
