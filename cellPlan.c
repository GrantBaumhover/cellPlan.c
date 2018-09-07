#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

double numberOfGBUsed = 0;
double numberOfGBAllowed = 0;
int currentDay = 0;
int daysLeft = 0;
double dailyGBUsed = 0;
double suggestedGBPerDay = 0;
double amountExceeded = 0;
double notExceeding = 0;
double suggestedDailyAmount = 0;

printf("Please enter the GB allowed per month: ");
scanf("%lf", &numberOfGBAllowed);

printf("Please enter the current day of the 30 day period: ");
scanf("%d", &currentDay);

printf("Please enter the total amount of GB used so far: ");
scanf("%lf", &numberOfGBUsed);

daysLeft = 30 - currentDay;
dailyGBUsed = numberOfGBUsed / currentDay;
suggestedGBPerDay = numberOfGBAllowed / 30;
amountExceeded = (dailyGBUsed * 30) - numberOfGBAllowed;
suggestedDailyAmount = (numberOfGBAllowed - numberOfGBUsed) / daysLeft;

printf("\n%d days used, %d days remaining\n",currentDay, daysLeft);
printf("Average Daily Use: %lf GB/day\n\n", dailyGBUsed);
  if (dailyGBUsed >= suggestedGBPerDay) {
  printf("You are EXCEEDING your average daily use %lf GB/day\n", suggestedGBPerDay);
  printf("Continuing this high usage, you will exceed your data plan by %lf GB\n\n", amountExceeded);
} else {
  printf("You are NOT EXCEEDING your average daily use %lf GB/day\n", suggestedGBPerDay);
  printf("Continuing this usage, you will will be below your data plan by %lf", -amountExceeded);
}
printf("To stay below your plan, use no more than %lf GB/day\n", suggestedDailyAmount);

  return 0;

}
