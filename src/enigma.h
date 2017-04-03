
#ifndef _ENIGMA_H_
#define _ENIGMA_H_

# define  BUFFER_LENGTH_COMMAND  32
char command [BUFFER_LENGTH_COMMAND];
char *pCommand;

# define  BUFFER_LENGTH_ARGUMENT  96
char argument [BUFFER_LENGTH_ARGUMENT];
char *pArgument;

# define  BUFFER_LENGTH_MESSAGE  1024
char message [BUFFER_LENGTH_MESSAGE];
char *pMessage;

# define  STRCMP_EQUAL  0

extern void apply_settings_default(void);
extern void print_config(void);
extern char *process_message(char *pInputString);

int main (void);


#endif