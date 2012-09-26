//sg
class CaesarBox
{
char *  message;
int dimension;
char ** matrix;
int length;
void transpose();
int power2(int l);
public: 
CaesarBox(char * s);
void encrypt();
void dumpMatrix();
void decrypt();

};

