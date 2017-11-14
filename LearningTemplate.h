#ifndef PREDICTION_LEARNINGTEMPLATE_H
#include "MatrixClass.h"
#include <string>
#include <vector>
#include <fstream>
#define PREDICTION_LEARNINGTEMPLATE_H


class LearningTemplate {
    std::vector<double> seaquence;
    double correctMember;
    MatrixClass X;
public:
    void matrixFromSeaquence();
    void setContextNeuron(double neuron);
    void addNumberToSeaquence(double number);
    void setCorrectMember(double correctMember);
    inline MatrixClass getX() { return this->X; };
    inline double getContextNeuron() { return X(0, static_cast<unsigned int>(seaquence.size())); };
    inline double getCorrectMember() { return this->correctMember; };
};


#endif //PREDICTION_LEARNINGTEMPLATE_H
