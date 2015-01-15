// $ g++ main.cpp -o tesse -llept -ltesseract
// $ tesse imagem.png

#include <tesseract/baseapi.h>
#include <tesseract/strngs.h>
#include <iostream>

#define idioma "por"

using namespace std;
using namespace tesseract;

int main(int argc, char** argv){

    if (argc != 2){
        cout << "Argumentos invalidos. Tente: $ ./tesse imagem.png" << endl;
        return -1;
    }

    const char* imagem = argv[1];

    TessBaseAPI tess;
    tess.Init(NULL, idioma, OEM_DEFAULT);
    tess.SetPageSegMode(PSM_SINGLE_BLOCK); // http://tess4j.sourceforge.net/docs/docs-1.1/net/sourceforge/tess4j/TessAPI.TessPageSegMode.html

    STRING saida;
    tess.ProcessPages(imagem, NULL, 0, &saida);
    cout << saida.string() << endl;

    return 0;
}
