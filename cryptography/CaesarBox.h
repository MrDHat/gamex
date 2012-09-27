//sg
class CaesarBox
{
char *  message;
int attempts;
int score;
int dimension;
char ** matrix;
int length;
void transpose();
void encrypt();
void dumpMatrix(int ,int);
void decrypt();
void waitForInput();
int power2(int l);
public: 
CaesarBox(char * s);
void init(); //start the show
};

