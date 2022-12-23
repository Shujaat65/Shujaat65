#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char a[100][50];
char c = 'c';
char e = '=';
int index = 0, flag = 0;
char label[50], mne[50], opnd[50], name[50];
FILE *f1, *f2, *f3;
f1 = fopen("input.txt", "r");
f2 = fopen("symtab.txt", "w+");
f3 = fopen("littab.txt", "w+");
fscanf(f1, "%s%s%s", label, mne, opnd);
fscanf(f1, "%s%s%s", label, mne, opnd);
while (strcmp(mne, "END") != 0)
{
flag = 0;
if (strcmp(label, "-") != 0)
{
for (int i = 0; i < index; i++)
{
if (strcmp(label, a[i]) == 0)
{
flag = 1;
printf("duplicate label (%s) identified in the program\n", label);
}
}
if (flag == 0)
{
strcpy(a[index], label);
printf("%s\n", a[index]);
fprintf(f2, "%s\n", a[index]);
index++;
}
if (opnd[0] == c || (opnd[0] == e))
{
fprintf(f3, "%s\n", opnd);
printf("%s\n", opnd);
}
}
fscanf(f1, "%s%s%s", label, mne, opnd);
}
fclose(f1);
fclose(f2);
fclose(f3);
return 0;
}