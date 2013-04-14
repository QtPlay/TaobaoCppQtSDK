#ifndef EVALDETAIL_H
#define EVALDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 评价详细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EvalDetail : public TaoDomain
{

public:
 virtual ~EvalDetail() { }

  qlonglong getEvalCode() const;
  void setEvalCode (qlonglong evalCode);
  QString getEvalRecer() const;
  void setEvalRecer (QString evalRecer);
  QString getEvalSender() const;
  void setEvalSender (QString evalSender);
  QDateTime getEvalTime() const;
  void setEvalTime (QDateTime evalTime);
  QDateTime getSendTime() const;
  void setSendTime (QDateTime sendTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 评价详细： 
1 非常满意 
2 满意 
3 一般 
4 不满意
 **/
  qlonglong evalCode;

/**
 * @brief 评价接收者
 **/
  QString evalRecer;

/**
 * @brief 评价发送者
 **/
  QString evalSender;

/**
 * @brief 评价时间
 **/
  QDateTime evalTime;

/**
 * @brief 评价发送时间
 **/
  QDateTime sendTime;

};

#endif  /* EVALDETAIL_H */
