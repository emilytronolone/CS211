#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool boardIsValid(char** grid){
	int temp;
	for(int i =0; i < 16; i++){
		for(int j =  0; j < 16; j++){
			temp = grid[i][j];
				for(int k = j+1; k < 16;  k++){
					if(temp==grid[i][k] && temp!='-' && grid[i][k]!='-'){
						return false;
					}
				}
		}
	}
	for(int i =0; i < 16; i++){
		for(int j =  0; j < 16; j++){
			temp = grid[j][i];
				for(int k = j+1; k < 16;  k++){
					if(temp==grid[k][i] && temp!='-' && grid[k][i]!='-'){
						return false;
					}
				}
		}
	}
/*	for(int i = 0; i < 16; i+=4){
		for(int j =0; j < 16; j+=4){
			for(int k=i; k<i+4; k++){
				for(int l=j; l <j+4; l++){
					temp = grid[k][l];
						for(int m = l+1; m < 4; m++){
							if(temp==grid[k][m] && temp!='-' && grid[k][m]!='-'){
								return false;
							}
						}
				}
			}
		}
	}*/				
	return true;
}


char* column(char** grid, char* temp, int c){
	for(int i = 0; i < 16; i++){
		if(grid[i][c] == '0'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='0'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '1'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='1'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '2'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='2'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '3'){
			for(int j=0; j < 16; j++){
				if(temp[j]=='3'){
					temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '4'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='4'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '5'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='5'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '6'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='6'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '7'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='7'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '8'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='8'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == '9'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='9'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == 'A'){	
			for(int j=0; j < 16; j++){
                                if(temp[j]=='A'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == 'B'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='B'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == 'C'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='C'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == 'D'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='D'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == 'E'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='E'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[i][c] == 'F'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='F'){
                                        temp[j] = 'x';
                                }
                        }
		}
	}
	return temp;
}

char* row(char** grid, char* temp, int r){
	for(int i = 0; i < 16; i++){
		if(grid[r][i] == '0'){
			for(int j=0; j < 16; j++){
				if(temp[j]=='0'){
					temp[j] = 'x';
				}
			}
		}else if(grid[r][i] == '1'){
			for(int j = 0; j < 16; j++){
				if(temp[j] == '1'){
					temp[j] = 'x';
				}
			}
		}else if(grid[r][i] == '2'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='2'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == '3'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='3'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == '4'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='4'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == '5'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='5'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == '6'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='6'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == '7'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='7'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == '8'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='8'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == '9'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='9'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == 'A'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='A'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == 'B'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='B'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == 'C'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='C'){
                                       temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == 'D'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='D'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == 'E'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='E'){
                                        temp[j] = 'x';
                                }
                        }
		}else if(grid[r][i] == 'F'){
			for(int j=0; j < 16; j++){
                                if(temp[j]=='F'){
                                        temp[j] = 'x';
                                }
                        }
		}
	}
	return temp;
}

char* subgrid(char** grid, char* temp, int r, int c){
	int startRow;
	int startColumn;
	int gridRow = r/4;
	int gridColumn = c/4;
	if(gridRow == 0){
		startRow = 0;
		if(gridColumn==0){
			startColumn = 0;
		}
		if(gridColumn==1){
			startColumn = 4;
		}
		if(gridColumn==2){
			startColumn = 8;
		}
		if(gridColumn==3){
			startColumn = 12;
		}
	}else if(gridRow == 1){
		startRow = 4;
		if(gridColumn==0){
			startColumn = 0;
		}
		if(gridColumn==1){
			startColumn = 4;
		}
		if(gridColumn==2){
			startColumn = 8;
		}
		if(gridColumn==3){
			startColumn = 12;
		}
	}else if(gridRow == 2){
		startRow = 8;
		if(gridColumn==0){
		startColumn = 0;
		}
		if(gridColumn==1){
			startColumn = 4;
		}
		if(gridColumn==2){
			startColumn = 8;
		}
		if(gridColumn==3){
			startColumn = 12;
		}
	}else if(gridRow == 3){
		startRow = 12;
		if(gridColumn==0){
			startColumn = 0;
		}
		if(gridColumn==1){
			startColumn = 4;
		}
		if(gridColumn==2){
			startColumn = 8;
		}
		if(gridColumn==3){
			startColumn = 12;
		}
	}

	for(int i = startRow; i < startRow+4; i++){
		for(int j = startColumn; j < startColumn+4; j++){
                	if(grid[i][j] == '0'){
                        	for(int j=0; j < 16; j++){
                                	if(temp[j]=='0'){
                                        	temp[j] = 'x';
                               		}
                       		}
			}else if(grid[i][j] == '1'){
				for(int j = 0; j < 16; j++){
					if(temp[j] == '1'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == '2'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='2'){
                                        temp[j] = 'x';
                              		}
                        	}
			}else if(grid[i][j] == '3'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='3'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == '4'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='4'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == '5'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='5'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == '6'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='6'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j]== '7'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='7'){
                                        temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == '8'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='8'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == '9'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='9'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == 'A'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='A'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == 'B'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='B'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == 'C'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='C'){
					       temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == 'D'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='D'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j] == 'E'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='E'){
						temp[j] = 'x';
					}
				}
			}else if(grid[i][j]== 'F'){
				for(int j=0; j < 16; j++){
					if(temp[j]=='F'){
						temp[j] = 'x';
					}
				}
               		}
       		}
	}
        return temp;
}


char entry(char** grid, char* temp, int r, int c){
	char* temp2 = row(grid, temp, r);
	char* temp3 = column(grid, temp2, c);
	char* temp4 = subgrid(grid, temp3, r, c);
	int counter = 0;
	for(int i = 0; i < 16; i++){
		if(temp4[i]!='x'){
			counter++;
		}
	}
	if(counter==1){
		for(int i = 0; i < 16; i++){
			if(temp4[i]!='x'){
				return temp4[i];
			}
		}	
	}
	return 0;
}

int main(int argc, char** argv){
	bool isValid;
	char yeet;
	char start[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; 

	char **input = malloc(16 * sizeof(char *));
	for(int i=0; i<16; i++){
		input[i] = malloc(16 * sizeof(char));
	}

	if (argc != 2){
		printf("insufficient arguments\n");
		exit(0);
	}

	FILE* fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("file does not exist\n");
		exit(0);
	}

	for(int i = 0; i < 16; i++){
		for(int j = 0; j < 16; j++){
			input[i][j] = '0';
		}
	}

	for(int i=0; i < 16; i++){
		for(int j=0; j < 16; j++){
			fscanf(fp, "%c\t", &yeet);
			input[i][j] = yeet;
		}
	}

	isValid = boardIsValid(input);
	if(!isValid){
		printf("no-solution\n");
		return 0;
	} 
	for(int m = 0; m < 16;  m++){
		for(int k = 0; k < 16; k++){
			if(input[m][k]=='-' || input[m][k]=='\0'){
				for(int i = 0; i < 16; i++){
					for(int j = 0; j < 16; j++){
						if(input[i][j] == '-'){
							input[i][j] = entry(input, start, i, j);
							start[0] = '0';
							start[1] = '1';
							start[2] = '2';
							start[3] = '3';
							start[4] = '4';
							start[5] = '5';
							start[6] = '6';
							start[7] = '7';
							start[8] = '8';
							start[9] = '9';
							start[10] = 'A';
							start[11] = 'B';
							start[12] = 'C';
							start[13] = 'D';
							start[14] = 'E';
							start[15] = 'F';
						}
						if(input[i][j] == '\0'){
							input[i][j] = entry(input, start, i, j);
							start[0] = '0';
							start[1] = '1';
							start[2] = '2';
							start[3] = '3';
							start[4] = '4';
							start[5] = '5';
							start[6] = '6';
							start[7] = '7';
							start[8] = '8';
							start[9] = '9';
							start[10] = 'A';
							start[11] = 'B';
							start[12] = 'C';
							start[13] = 'D';
							start[14] = 'E';
							start[15] = 'F';
						}
					}
				}
			}
		}
	}
	for(int i = 0; i < 16; i++){
		for(int j = 0; j < 16; j++){
			printf("%c\t", input[i][j]);
		}
		printf("\n");
	}
	free(input);
	return 0;
}
