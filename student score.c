#include <stdio.h>

int main() {
	FILE* fprt;
	int n, i, j;
	float score[100], tempscore;
	int no[100], tempno;

	//input
	printf("Welcome to score program\nThis program make you score arranged from highest to lowest\n");
	printf("\nHow many student :");
	scanf_s("%d", &n);
	
	//input score
	for (i = 0; i < n; i++) {
		printf("Enter student %d score :", i + 1);
		scanf_s("%f", &score[i]);
		no[i] = i + 1; //เก็บลำดับเดิม
	}

	//เรียงมากไปน้อย
	for (i = 0; i < n-1; i++) {
		for (j = i + 1;j < n;j++) {
			if (score[i] < score[j]) {
				//สลับคะแนน
				tempscore = score[i];
				score[i] = score[j];
				score[j] = tempscore;

				//เลขลำดับ
				tempno = no[i];
				no[i] = no[j];
				no[j] = tempno;
			}
		}
	}
	

	//สร้างไฟล์
	if (fopen_s(&fprt, "C:\\Users\\Public\\Student_score.txt", "w") != 0) {
		printf("Error: cannot create file.\n");
		return 1;
	}

	//เขียนลงไฟล์
	for (i = 0; i < n; i++) {
		fprintf(fprt, "%d. Student %d : %.2f\n", i + 1, no[i], score[i]);
	}

	fclose(fprt);
	printf("\nSave to file success\n");
	printf("file path is C:\\Users\\Public\\\n");

	//เปิดไฟล์
	if (fopen_s(&fprt, "C:\\Users\\Public\\Student_score.txt", "r") != 0) {
		printf("Error: cannot open file.\n");
		return 1;
	}


	//แสดงในไฟล์
	printf("\nScores are arranged from highest to lowest\n");
	char line[100];
	while (fgets(line, sizeof(line), fprt)) {
		printf("%s", line);
	}

	//ปิดไฟล์
	fclose(fprt);

	return 0;
}
