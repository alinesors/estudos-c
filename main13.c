//Creie uma função que receba um vetor ordenado de alunos e um aluno para inserir de maneira ordenada
//o vetor tem capacidade 10 e ele vai passar a nota o nome e a posição a ser inserido.

void inserirALUNO(Aluno* alunos, char* nome, float nota, int posiFinal){

    if(posiFinal >= 10){
        printf("cheio");
    }else{
        int index -1;

        for(int i = 0; i < posiFinal; i++){
            if(alunos[i] > nota){
                index = i;
                break;
            }
        }

        if(index == -1){
            alunos[posiFinal].nome = nome;
            alunos[posiFinal].nota = nota;
            return
        }

        for(int i = posiFinal + 1; i <= index; i--){
            alunos[i].nome = alunos[i -1].nome;
            alunos[posiFinal].nota = nota;
        }

        alunos[index].nome = nome;
        alunos[index].nota = nota;

    }
  
}