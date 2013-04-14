#ifndef EVALUATION_H
#define EVALUATION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 客服评价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Evaluation : public TaoDomain
{

public:
 virtual ~Evaluation() { }

  QString getEvaluationName() const;
  void setEvaluationName (QString evaluationName);
  QString getEvaluationNum() const;
  void setEvaluationNum (QString evaluationNum);
  
  virtual void parseResponse();

private:
/**
 * @brief 客服评价内容
 **/
  QString evaluationName;

/**
 * @brief 评价数量
 **/
  QString evaluationNum;

};

#endif  /* EVALUATION_H */
