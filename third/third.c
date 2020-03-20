#include<stdio.h>
#include<stdlib.h>

double** allocate (double m, double n){
        double** temp = malloc(m * sizeof(double*));
        for(int i=0; i<m; i++){
                temp[i] = malloc(n * sizeof(double));
        }
        return temp;
}

double** transpose(double** x, double k, double n){
	double** temp=allocate(k,n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			temp[j][i]=x[i][j];
		}
	}
	return temp;
}

double** multiply(double** matrixA, double** matrixB, double m, double o, double p){
	double** result=allocate(m,p);
        for (int i = 0; i < m; i++){
                for (int j = 0; j < p; j++){
                        result[i][j] = 0;
                        for (int l = 0; l < o; l++){
                                result[i][j] = result[i][j] + (matrixA[i][l]*matrixB[l][j]);
                        }
                }
        }
	return result;
}

double ** inverse(double** matrix, int r){
	double** augmented = allocate(r,2*r);
	double temp;
	double temp2;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < r; j++){
			augmented[i][j] = matrix[i][j];
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = r; j < 2*r; j++){
			if(i==j-r){
				augmented[i][j]=1;
			}else{
				augmented[i][j]=0;
			}
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			if(i!=j){
				temp = augmented[j][i]/augmented[i][i];
				for(int k=0;k<2*r;k++){
					augmented[j][k] = augmented[j][k] - temp*augmented[i][k];
				}
			}
		}
	}

	for(int i=0;i<r;i++){
		temp2 = augmented[i][i];
		for(int j=0;j<2*r;j++){
			augmented[i][j] = augmented[i][j]/temp2;
		}
	}

	double** inverse = allocate(r,r);
	for(int i = 0; i < r; i++){
		for(int j = 0; j < r; j++){
			inverse[i][j] = augmented[i][j+r];
		}
	}

	return inverse;
}


int main(int argc, char** argv){
        double k = 0;
        double n = 0;
        double dataA;

        if (argc != 3){
                printf("insufficient arguments\n");
                exit(0);
        }
        FILE* fp = fopen(argv[1], "r");
        if(fp == NULL){
                printf("file does not exist\n");
                exit(0);
        }
	FILE* fp2 = fopen(argv[2], "r");
	if(fp2 == NULL){
		printf("file does not exist\n");
		exit(0);
	}

        fscanf(fp, "%lf\n%lf\n", &k, &n);
	k = k+1;

        double** temp=allocate(n,k+1);
	double** x=allocate(n,k);
	double** y=allocate(n,1);
	double** transposeX=allocate(k,n);
	double** product1=allocate(k,k);
	double** inverseMatrix=allocate(k,k);
	double** product2=allocate(k,n);
	double** w=allocate(k,1);

        for(int i=0; i < n; i++){
		temp[i][0]= 1;
                for(int j=1; j < k+1; j++){
     			fscanf(fp, "%lf%*c", &dataA);       
          		temp[i][j] = dataA;
	        }
        }
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			x[i][j] = temp[i][j];
			//printf("%lf\t", x[i][j]);
		}
		//printf("\n");
	}

	int index = (int) k;
	for(int i = 0; i < n; i++){
		y[i][0]=temp[i][index];
		//printf("%lf\n", y[i][0]);
	}
	transposeX = transpose(x, k, n);
	/*for(int i = 0; i < k; i++){
		for(int j = 0; j < n; j++){
			printf("%lf\t", transposeX[i][j]);
		}
		printf("\n");
	}*/
	product1 = multiply(transposeX, x, k, n, k);
	/*for(int i = 0;  i < k; i++){
		for(int j  = 0; j < k; j++){
			printf("%lf\t", product1[i][j]);
		}
		printf("\n");
	}*/
	inverseMatrix = inverse(product1, k);
	/*for(int i = 0; i < k; i++){
		for(int j = 0; j < k; j++){
			printf("%lf\t", inverseMatrix[i][j]);
		}
		printf("\n");
	}*/
	product2 = multiply(inverseMatrix, transposeX, k, k, n);
	w = multiply(product2, y, k, n, 1);
	/*for(int i =0; i < k; i++){
		for(int j = 0; j < 1; j++){
			printf("%lf\n", w[i][j]);
		}
	}*/

	int a = 0;
	int index2 = (int) k;
	double dataB;
	fscanf(fp2, "%d\n", &a);
	
	for(int i=0; i < a; i++){
		double sum = 0;
		double temp[index2];
		temp[0] = 1;
		for(int j=1; j < k; j++){
                        fscanf(fp2, "%lf%*c", &dataB);
                        temp[j] = dataB;
                }
		for(int l = 0; l < k; l++){
			sum+=w[l][0]*temp[l];
		}
		printf("%0.0lf\n", sum);
		/*for(int h = 0; h < k; h++){
			temp[h]=0;
		}*/
        }
	free(temp);
	free(x);
	free(y);
	free(transposeX);
	free(product1);
	free(inverseMatrix);
	free(product2);
	free(w);
	return 0;
}

