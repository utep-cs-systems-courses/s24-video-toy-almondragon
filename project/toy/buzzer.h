#ifndef buzzer_included
#define buzzer_included

void buzzer_init();
void buzzer_set_period(short cycles);
void hbday_song();

extern int buzzer_sec;
extern char counter_buzzer_sec;

#endif
