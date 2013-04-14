#ifndef TRANSITSTEPINFO_H
#define TRANSITSTEPINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流跟踪信息的一条
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TransitStepInfo : public TaoDomain
{

public:
 virtual ~TransitStepInfo() { }

  QString getStatusDesc() const;
  void setStatusDesc (QString statusDesc);
  QString getStatusTime() const;
  void setStatusTime (QString statusTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 状态描述
 **/
  QString statusDesc;

/**
 * @brief 状态发生的时间
 **/
  QString statusTime;

};

#endif  /* TRANSITSTEPINFO_H */
