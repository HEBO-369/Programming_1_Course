#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time split_time(long long total_seconds) {
    struct Time result;
    result.hours = (total_seconds / 3600) % 24;
    result.minutes = (total_seconds % 3600) / 60;
    result.seconds = total_seconds % 60;

    return result;
}

int main() {
    long long total_seconds;
    printf("Enter total seconds since midnight: ");
    scanf("%lld", &total_seconds);
    printf("total days: %d \n",  total_seconds / 86400) ;
    struct Time converted_time = split_time(total_seconds);
    printf("Equivalent Time: %d:%d:%d\n",
           converted_time.hours, converted_time.minutes, converted_time.seconds);

    return 0;
}
