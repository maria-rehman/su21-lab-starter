#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
     int count = 0;
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        if (str[i] == letter) {
            count++;
        }
    }
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    
    // Initialize counts to zero
    dna_seq->A_count = 0;
    dna_seq->C_count = 0;
    dna_seq->G_count = 0;
    dna_seq->T_count = 0;
    
    // Traverse the sequence and count nucleotide occurrences
    for (int i = 0; dna_seq->sequence[i] != '\0'; i++) {
        switch (dna_seq->sequence[i]) {
            case 'A':
                dna_seq->A_count++;
                break;
            case 'C':
                dna_seq->C_count++;
                break;
            case 'G':
                dna_seq->G_count++;
                break;
            case 'T':
                dna_seq->T_count++;
                break;
            default:
                // Handle unexpected characters if needed
                break;
        }
    }

    return;
}
