#ifndef buzzer_included
#define buzzer_included

void buzzer_init();
void buzzer_set_period(short cycles);
void hbday_song();
void chocolate_SE();
void vanilla_SE();
void blueberry_SE();
void strawbeery_SE();

extern int buzzer_sec;
extern char counter_buzzer_sec;

#endif
