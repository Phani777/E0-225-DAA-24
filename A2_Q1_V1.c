 #include <stdio.h>
 int solution[1000] = {0};
 int denom[] = {1,4,7,13,28,52,91,365};
 
 int dynamic (int target){
 int best = target-1;
 for(int i = 0; i < 8; i++){
 if(target >= denom[i] && solution[target-denom[i]]<solution[best]){
 best = target-denom[i];
 }
 }
 solution[target] = 1+solution[best];
 return solution[target];
 }
 int main() {
 int k; printf("Enter the target denomination :"); scanf("%d", &k);
 for(int i = 1; i <= k; i++)
 {dynamic(i);}
 printf ("%d", solution[k]);
 return 0;
 }