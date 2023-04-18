// Online C++ compiler to run C++ program online
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Livro
{
    string strTitulo;
    string strAutor;
    int iDataPublicacao;
};

struct Dot
{
    unsigned short usRed;
    unsigned short usGreen;
    unsigned short usBlue;
};

struct Biblioteca
{
    string strNome;
    int iTamanhoAcervo;
    struct Livro livros[1000];
};

void adicionarLivro(struct Biblioteca&, struct Livro);
void listarLivros(struct Biblioteca);

int main() {
    /*struct
    {
        int iIdade;
        string strNome;
    } alunoEMAP1;
    
    alunoEMAP1.iIdade = 19;
    alunoEMAP1.strNome = "Guilherme";
    
    cout << "Idade do aluno: " << alunoEMAP1.iIdade << endl;
    cout << "Nome do aluno: " << alunoEMAP1.strNome << endl;

    struct
    {
        int iIdade;
        string strNome;
    } alunoEMAP2, alunoEMAP3;
    
    alunoEMAP2.iIdade = 22;
    alunoEMAP2.strNome = "Matheus";
    
    cout << "Idade do aluno: " << alunoEMAP2.iIdade << endl;
    cout << "Nome do aluno: " << alunoEMAP2.strNome << endl;*/
    
    /*struct Livro livro1;
    livro1.strTitulo = "Outliers: The Story of Succes";
    livro1.strAutor = "Malcolm Gladwell";
    livro1.iDataPublicacao = 2008;
    
    struct Livro livro2;
    livro2.strTitulo = "How to Grow Old";
    livro2.strAutor = "Marcus Tullius Cícero";
    livro2.iDataPublicacao = -44;
    
    cout << livro1.strTitulo<< ", by " << livro1.strAutor << ", Published in: " << livro1.iDataPublicacao << "." << endl;
    cout << livro2.strTitulo<< ", by " << livro2.strAutor << ", Published in: " << livro2.iDataPublicacao << "." << endl;*/
    
    /*struct Dot screen[640][480];
    screen[0][0].usRed = 0;
    screen[0][0].usGreen = 0;
    screen[0][0].usBlue = 0;
    
    screen[0][1] = {255, 192, 203};
    
    cout << "RGB(" << screen[0][0].usRed << "," << screen[0][0].usGreen << "," << screen[0][0].usBlue << ")" << endl;
    
    cout << "RGB(" << screen[0][1].usRed << "," << screen[0][1].usGreen << "," << screen[0][1].usBlue << ")" << endl;*/
    
    struct Biblioteca biblioteca;
    biblioteca.strNome = "Biblioteca do Tio Rafa";
    biblioteca.iTamanhoAcervo = 0;
    
    struct Livro livro1;
    livro1.strTitulo = "Outliers: The Story of Succes";
    livro1.strAutor = "Malcolm Gladwell";
    livro1.iDataPublicacao = 2008;
    
    biblioteca.livros[biblioteca.iTamanhoAcervo] = livro1;
    biblioteca.iTamanhoAcervo+=1;
    
    struct Livro livro2;
    livro2.strTitulo = "How to Grow Old";
    livro2.strAutor = "Marcus Tullius Cícero";
    livro2.iDataPublicacao = -44;
    
    biblioteca.livros[biblioteca.iTamanhoAcervo] = livro2;
    biblioteca.iTamanhoAcervo+=1;
    
    cout << "Nome: " << biblioteca.strNome << endl;
    cout << "Tamanho do Acervo: " << biblioteca.iTamanhoAcervo << endl;
    
    listarLivros(biblioteca);
    
    struct Livro livro3;
    livro3.strTitulo = "Morro dos Ventos Uivantes";
    livro3.strAutor = "Emille Bronte";
    livro3.iDataPublicacao = 1847;
    
    adicionarLivro(biblioteca, livro3);
    listarLivros(biblioteca);
    
    
    
    return 0;
}

void listarLivros(struct Biblioteca biblioteca)
{
    cout << "Livros do Acervo: " << endl;
    
    for(int i = 0; i < biblioteca.iTamanhoAcervo; i++)
    {
        cout << "\t" << biblioteca.livros[i].strTitulo << ", by " << biblioteca.livros[i].strAutor << ", Published in " << biblioteca.livros[i].iDataPublicacao << "." << endl;
    }
}

void adicionarLivro(struct Biblioteca& biblioteca, struct Livro livroAdicionado)
{
    biblioteca.livros[biblioteca.iTamanhoAcervo] = livroAdicionado;
    biblioteca.iTamanhoAcervo+=1;
}









