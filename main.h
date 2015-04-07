typedef struct node {
    int value;
    struct node *next;
} NextPlaceOps;

int main();
char* InitiateCharArray (int);
int* InitiateIntArray (int);
char** InitiateMultiCharArray (int, int);
int GetPossibleOptions (int);
int GetRandomNumber (int);
int GetPossibleOptions (int);
void ListPrint (NextPlaceOps*);
void ListPushEnd (NextPlaceOps*, int);
