#ifndef DATAFILE_H
#define DATAFILE_H


#define N 10

#include <iostream>
#include <fstream>
#include <random>
#include <time.h>
#include <QDebug>
#include <QVector>


class DataFile
{
public:
    static void CreateFile(){
        std::ofstream ofs ("DATA.txt");

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                ofs << (rand() % 2);
            }
            ofs << "\n";
        }
        ofs.close();
    }

    static QVector<bool> GetData(){
        DataFile::CreateFile();

        std::fstream fs ("DATA.txt");
        QVector<bool> vec;

        std::string line;
        for(int i = 0; i < N; i++){
            std::getline(fs, line);
            for(int j = 0; j < line.length(); j++){
                vec.append( line[j] == '1' ? true : false);
            }
        }
        fs.close();
        return vec;
    }
};

#endif // DATAFILE_H
